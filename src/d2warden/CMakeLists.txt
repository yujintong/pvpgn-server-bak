add_library(D2Warden SHARED
	bnethash.cpp
	bnethash.h
	d2callstub.cpp
	d2callstub.h
	d2ptrs.cpp
	d2ptrs.h
	d2warden.cpp
	global.h
	HashGameSeed.asm
	introtate.h
	md5.h
	md5c.cpp
	MyHashGameSeed.cpp
	RC4.cpp
	RC4.h
	d2warden.def)

target_compile_definitions(D2Warden PRIVATE D2_1_13_c)

target_link_options(D2Warden PRIVATE /SAFESEH:NO)

set_target_properties(D2Warden
	PROPERTIES
		CXX_STANDARD 98
		CXX_STANDARD_REQUIRED YES
		CXX_EXTENSIONS NO)