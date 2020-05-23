/*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
#include "common/setup_before.h"
#include "smtp.h"

#include <ctime>
#include <string>

#include <curl/curl.h>
#include <fmt/core.h>
#include <fmt/chrono.h>

#include "common/eventlog.h"

#include "server.h"

#include "common/setup_after.h"

namespace pvpgn
{

	namespace bnetd
	{

		static bool is_curl_initialized = false;
		static std::string smtp_ca_cert_store;
		static char smtp_server_url[512] = {};
		static long smtp_port;
		static std::string smtp_username;
		static std::string smtp_password;

		typedef struct
		{
			std::string message;
			std::size_t bytes_remaining;
		} read_callback_message;

		static std::size_t read_callback(char* buffer, std::size_t size, std::size_t nitems, void* message)
		{
			read_callback_message* rcbmessage = reinterpret_cast<read_callback_message*>(message);
			std::size_t buffer_size = size * nitems;
			std::size_t copy_size = rcbmessage->bytes_remaining <= buffer_size ? rcbmessage->bytes_remaining : buffer_size;

			std::memcpy(buffer, rcbmessage->message.c_str(), copy_size);
			rcbmessage->bytes_remaining -= copy_size;
			return copy_size;
		}

		/**
		* Initializes libcurl's global context if it hasn't already been initialized. 
		*
		* On success, returns true.
		* On failure, returns false. Will fail if libcurl couldn't initialize global context.
		*/
		bool smtp_init()
		{
			if (is_curl_initialized)
			{
				eventlog(eventlog_level_error, __FUNCTION__, "libcurl has already been initialized");
				return false;
			}

			if (curl_global_init(CURL_GLOBAL_NOTHING) == 0)
			{
				is_curl_initialized = true;

				return true;
			}
			else
			{
				return false;
			}
		}

		/**
		* Initializes smtp_server_url, smtp_port, smtp_username, and smtp_password from the four function parameters.
		* Will return false if prefs_smtp_port is greater than 65535.
		*/
		bool smtp_config(const char* prefs_smtp_ca_cert_store, const char* prefs_smtp_server_url, unsigned int prefs_smtp_port, const char* prefs_smtp_username, const char* prefs_smtp_password)
		{
			smtp_ca_cert_store = prefs_smtp_ca_cert_store;
			std::snprintf(smtp_server_url, sizeof(smtp_server_url), "smtps://%s", prefs_smtp_server_url);
			if (prefs_smtp_port > 65535)
			{
				eventlog(eventlog_level_error, __FUNCTION__, "Received out-of-range port number ({})", prefs_smtp_port);
				return false;
			}
			smtp_port = prefs_smtp_port;
			smtp_username = prefs_smtp_username;
			smtp_password = prefs_smtp_password;

			return true;
		}

		void smtp_cleanup()
		{
			if (is_curl_initialized)
			{
				curl_global_cleanup();
				is_curl_initialized = false;
			}
		}

		void smtp_send_email(const std::string& to_address, const std::string& from_address, const std::string& subject, std::string message)
		{
			if (!is_curl_initialized)
			{
				eventlog(eventlog_level_debug, __FUNCTION__, "libcurl not initialized, returning without attempting to send email");
				return;
			}

			CURL* curl = curl_easy_init();
			if (curl == nullptr)
			{
				eventlog(eventlog_level_error, __FUNCTION__, "Failed to initialize CURL easy handle");
				return;
			}

			curl_easy_setopt(curl, CURLOPT_USE_SSL, (long)CURLUSESSL_ALL);
			curl_easy_setopt(curl, CURLOPT_CAINFO, smtp_ca_cert_store.c_str());

			curl_easy_setopt(curl, CURLOPT_URL, smtp_server_url);
			curl_easy_setopt(curl, CURLOPT_PORT, smtp_port);
			curl_easy_setopt(curl, CURLOPT_USERNAME, smtp_username.c_str());
			curl_easy_setopt(curl, CURLOPT_PASSWORD, smtp_password.c_str());

			curl_easy_setopt(curl, CURLOPT_MAIL_FROM, fmt::format("<{}>", from_address).c_str());
			struct curl_slist* recipient = nullptr;
			{
				struct curl_slist* recipient_temp = curl_slist_append(recipient, fmt::format("<{}>", to_address).c_str());
				if (recipient_temp == nullptr)
				{
					eventlog(eventlog_level_error, __FUNCTION__, "Failed to append recipient address to recipient list");
					return;
				}

				recipient = recipient_temp;
			}
			curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, recipient);

			curl_easy_setopt(curl, CURLOPT_READFUNCTION, read_callback);

			message.insert(0, fmt::format("MIME-Version: 1.0\r\nContent-Type: text/plain; charset=\"UTF-8\"\r\nDate: {:%a, %d %b %Y %T %z}\r\nFrom: <{}>\r\nTo: <{}>\r\nSubject: {}\r\n\r\n", *std::localtime(&now), from_address, to_address, subject));
			read_callback_message rcbmessage = {};
			rcbmessage.message = message;
			rcbmessage.bytes_remaining = message.length() + 1;
			curl_easy_setopt(curl, CURLOPT_READDATA, reinterpret_cast<void *>(&rcbmessage));

			curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);

			CURLcode result = curl_easy_perform(curl);
			if (result != CURLE_OK)
			{
				eventlog(eventlog_level_error, __FUNCTION__, "Failed to send email ({})", curl_easy_strerror(result));
			}

			curl_slist_free_all(recipient);

			curl_easy_cleanup(curl);
		}

	}

}