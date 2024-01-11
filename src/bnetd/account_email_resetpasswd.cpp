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
#include "account_email_resetpasswd.h"

#include <fstream>
#include <iterator>
#include <limits>
#include <random>
#include <string>

#include <curl/curl.h>

#include "common/eventlog.h"

#include "account.h"
#include "account_wrap.h"
#include "prefs.h"
#include "server.h"
#include "smtp.h"
#include "common/setup_after.h"

namespace pvpgn
{

	namespace bnetd
	{

		static std::string message;
		static std::string resetpasswd_account_email_from_address;
		static std::string resetpasswd_account_email_from_name;

		bool account_email_resetpasswd_load(const char* filepath, const char* prefs_servername, const char* prefs_resetpasswd_account_email_from_address, const char* prefs_resetpasswd_account_email_from_name)
		{
			if (filepath == nullptr)
			{
				eventlog(eventlog_level_error, __FUNCTION__, "got NULL filepath");
				return false;
			}

			if (prefs_servername == nullptr)
			{
				eventlog(eventlog_level_error, __FUNCTION__, "got NULL prefs_servername");
				return false;
			}

			if (prefs_resetpasswd_account_email_from_address == nullptr)
			{
				eventlog(eventlog_level_error, __FUNCTION__, "got NULL prefs_resetpasswd_account_email_from_address");
				return false;
			}

			if (prefs_resetpasswd_account_email_from_name == nullptr)
			{
				eventlog(eventlog_level_error, __FUNCTION__, "got NULL prefs_resetpasswd_account_email_from_name");
				return false;
			}

			std::ifstream infile{ filepath };
			if (!infile.is_open())
			{
				eventlog(eventlog_level_error, __FUNCTION__, "Could not open email reset pasword message file ({})", filepath);
				return false;
			}

			try
			{
				std::string raw_message{ std::istreambuf_iterator<char>(infile), std::istreambuf_iterator<char>() };
				message = fmt::format(raw_message, fmt::arg("pvpgn_server_name", prefs_servername));

				eventlog(eventlog_level_info, __FUNCTION__, "Successfully loaded email reset password message ({} bytes)", message.length());
			}
			catch (const std::exception& e)
			{
				eventlog(eventlog_level_error, __FUNCTION__, "Failed to load email reset password message ({})", e.what());
				return false;
			}

			resetpasswd_account_email_from_address = prefs_resetpasswd_account_email_from_address;
			resetpasswd_account_email_from_name = prefs_resetpasswd_account_email_from_name;

			return true;
		}

		void account_email_resetpasswd_unload()
		{
			message.clear();
			resetpasswd_account_email_from_address.clear();
		}

		/**
		* Generates an email verification code and saves it in the "emailverification\\code" attribute for the given account. Sets the "emailverification\\expiration" attribute
		* to X minutes from current time, where X is the value of 'resetpasswd_account_email_expiration' in bnetd.conf.
		* Sends an email containing the email verification code to the registered email address of the account.
		*/
		bool account_email_resetpasswd_sendemail(t_account* account, const std::string& newpassword)
		{
			if (account == nullptr)
			{
				eventlog(eventlog_level_error, __FUNCTION__, "got NULL account");
				return false;
			}

			std::string personalized_message = fmt::format(message, fmt::arg("account_name", account_get_name(account)), fmt::arg("account_passwd", newpassword));

			eventlog(eventlog_level_info, __FUNCTION__, "Sending email reset password to {} for account uid {}", account_get_email(account), account_get_uid(account));
			smtp_send_email(account_get_email(account), resetpasswd_account_email_from_address, resetpasswd_account_email_from_name, "Email Reset Password", personalized_message);

			return true;
		}

	}
}