add_executable(D2GS WIN32
	bn_types.h
	bnethash.c
	bnethash.h
	callback.c
	callback.h
	charlist.c
	charlist.h
	config.c
	config.h
	connection.h
	d2cs_d2gs_character.h
	d2cs_d2gs_protocol.h
	d2dbs_d2gs_protocol.h
	d2gamelist.c
	d2gamelist.h
	d2ge.c
	d2ge.h
	d2gs.h
	debug.c
	debug.h
	eventlog.c
	eventlog.h
	handle_s2s.c
	handle_s2s.h
	hexdump.c
	hexdump.h
	list.h
	main.c
	net.c
	net.h
	psapi.h
	telnetd.c
	telnetd.h
	timer.c
	timer.h
	utils.c
	utils.h
	vars.c
	vars.h
	versioncheck.c
	versioncheck.h
	D2Server.ico
	d2server.rc
	resource.h)

target_include_directories(D2GS PRIVATE ${PROJECT_SOURCE_DIR}/include/ ${PROJECT_SOURCE_DIR}/resources/)

target_compile_definitions(D2GS PRIVATE D2GS)

target_link_libraries(D2GS PRIVATE ws2_32 ${PROJECT_SOURCE_DIR}/libs/d2server.lib)

set_target_properties(D2GS
	PROPERTIES
		C_STANDARD 99
		C_STANDARD_REQUIRED YES
		C_EXTENSIONS NO)