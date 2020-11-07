typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct D2GETDATAREQUEST D2GETDATAREQUEST, *PD2GETDATAREQUEST;

typedef ulong DWORD;

typedef ushort WORD;

struct D2GETDATAREQUEST {
    uchar AcctName[16];
    uchar CharName[16];
    DWORD ClientId;
    uchar field_0x24;
    uchar field_0x25;
    WORD field_0x26;
    WORD TickCount;
    DWORD field_0x2a;
    undefined field_0x2e;
    undefined field_0x2f;
    DWORD next;
    void * field_0x34;
    void * field_0x38;
    void * field_0x3c;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct t_replace t_replace, *Pt_replace;

struct t_replace {
    char * src;
    char * dest;
};

typedef struct D2GSINFO D2GSINFO, *PD2GSINFO;

typedef char CHAR;

typedef CHAR * LPCSTR;

typedef int BOOL;

typedef void * HANDLE;

typedef struct EVENTCALLBACKTABLE EVENTCALLBACKTABLE, *PEVENTCALLBACKTABLE;

struct EVENTCALLBACKTABLE {
    void * fpCloseGame;
    void * fpLeaveGame;
    void * fpGetDatabaseCharacter;
    void * fpSaveDatabaseCharacter;
    void * fpServerLogMessage;
    void * fpEnterGame;
    void * fpFindPlayerToken;
    void * fpSaveDatabaseGuild;
    void * fpUnlockDatabaseCharacter;
    void * fpReserved1;
    void * fpUpdateCharacterLadder;
    void * fpUpdateGameInformation;
    void * fpReserved2;
    void * fpSetGameData;
    void * fpRelockDatabaseCharacter;
    void * fpLoadComplete;
};

struct D2GSINFO {
    LPCSTR field_0x0;
    DWORD dwLibVersion;
    BOOL bStop;
    BOOL field_0xc;
    BOOL field_0x10;
    HANDLE hEventInited;
    void * field_0x18;
    void * fpErrorHandle;
    struct EVENTCALLBACKTABLE * fpCallback;
    BOOL field_0x24;
    DWORD field_0x28;
    DWORD field_0x2c;
    DWORD field_0x30;
    DWORD field_0x34;
};

typedef unsigned short    wchar16;
typedef struct D2GSCONFIGS D2GSCONFIGS, *PD2GSCONFIGS;

struct D2GSCONFIGS {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    undefined field_0x8;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    undefined field_0x10;
    undefined field_0x11;
    undefined field_0x12;
    undefined field_0x13;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
    undefined field_0x18;
    undefined field_0x19;
    undefined field_0x1a;
    undefined field_0x1b;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
    undefined field_0x20;
    undefined field_0x21;
    undefined field_0x22;
    undefined field_0x23;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    undefined field_0x28;
    undefined field_0x29;
    undefined field_0x2a;
    undefined field_0x2b;
    undefined field_0x2c;
    undefined field_0x2d;
    undefined field_0x2e;
    undefined field_0x2f;
    undefined field_0x30;
    undefined field_0x31;
    undefined field_0x32;
    undefined field_0x33;
    undefined field_0x34;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
    undefined field_0x38;
    undefined field_0x39;
    undefined field_0x3a;
    undefined field_0x3b;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    undefined field_0x40;
    undefined field_0x41;
    undefined field_0x42;
    undefined field_0x43;
    undefined field_0x44;
    undefined field_0x45;
    undefined field_0x46;
    undefined field_0x47;
    undefined field_0x48;
    undefined field_0x49;
    undefined field_0x4a;
    undefined field_0x4b;
    undefined field_0x4c;
    undefined field_0x4d;
    undefined field_0x4e;
    undefined field_0x4f;
    undefined field_0x50;
    undefined field_0x51;
    undefined field_0x52;
    undefined field_0x53;
    undefined field_0x54;
    undefined field_0x55;
    undefined field_0x56;
    undefined field_0x57;
    undefined field_0x58;
    undefined field_0x59;
    undefined field_0x5a;
    undefined field_0x5b;
    undefined field_0x5c;
    undefined field_0x5d;
    undefined field_0x5e;
    undefined field_0x5f;
    undefined field_0x60;
    undefined field_0x61;
    undefined field_0x62;
    undefined field_0x63;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
    undefined field_0x68;
    undefined field_0x69;
    undefined field_0x6a;
    undefined field_0x6b;
    undefined field_0x6c;
    undefined field_0x6d;
    undefined field_0x6e;
    undefined field_0x6f;
    undefined field_0x70;
    undefined field_0x71;
    undefined field_0x72;
    undefined field_0x73;
    undefined field_0x74;
    undefined field_0x75;
    undefined field_0x76;
    undefined field_0x77;
    undefined field_0x78;
    undefined field_0x79;
    undefined field_0x7a;
    undefined field_0x7b;
    undefined field_0x7c;
    undefined field_0x7d;
    undefined field_0x7e;
    undefined field_0x7f;
    undefined field_0x80;
    undefined field_0x81;
    undefined field_0x82;
    undefined field_0x83;
    undefined field_0x84;
    undefined field_0x85;
    undefined field_0x86;
    undefined field_0x87;
    undefined field_0x88;
    undefined field_0x89;
    undefined field_0x8a;
    undefined field_0x8b;
    undefined field_0x8c;
    undefined field_0x8d;
    undefined field_0x8e;
    undefined field_0x8f;
    undefined field_0x90;
    undefined field_0x91;
    undefined field_0x92;
    undefined field_0x93;
    undefined field_0x94;
    undefined field_0x95;
    undefined field_0x96;
    undefined field_0x97;
    undefined field_0x98;
    undefined field_0x99;
    undefined field_0x9a;
    undefined field_0x9b;
    undefined field_0x9c;
    undefined field_0x9d;
    undefined field_0x9e;
    undefined field_0x9f;
    undefined field_0xa0;
    undefined field_0xa1;
    undefined field_0xa2;
    undefined field_0xa3;
    undefined field_0xa4;
    undefined field_0xa5;
    undefined field_0xa6;
    undefined field_0xa7;
    undefined field_0xa8;
    undefined field_0xa9;
    undefined field_0xaa;
    undefined field_0xab;
    undefined field_0xac;
    undefined field_0xad;
    undefined field_0xae;
    undefined field_0xaf;
    undefined field_0xb0;
    undefined field_0xb1;
    undefined field_0xb2;
    undefined field_0xb3;
    undefined field_0xb4;
    undefined field_0xb5;
    undefined field_0xb6;
    undefined field_0xb7;
    undefined field_0xb8;
    undefined field_0xb9;
    undefined field_0xba;
    undefined field_0xbb;
    undefined field_0xbc;
    undefined field_0xbd;
    undefined field_0xbe;
    undefined field_0xbf;
    undefined field_0xc0;
    undefined field_0xc1;
    undefined field_0xc2;
    undefined field_0xc3;
    undefined field_0xc4;
    undefined field_0xc5;
    undefined field_0xc6;
    undefined field_0xc7;
    undefined field_0xc8;
    undefined field_0xc9;
    undefined field_0xca;
    undefined field_0xcb;
    undefined field_0xcc;
    undefined field_0xcd;
    undefined field_0xce;
    undefined field_0xcf;
    undefined field_0xd0;
    undefined field_0xd1;
    undefined field_0xd2;
    undefined field_0xd3;
    undefined field_0xd4;
    undefined field_0xd5;
    undefined field_0xd6;
    undefined field_0xd7;
    undefined field_0xd8;
    undefined field_0xd9;
    undefined field_0xda;
    undefined field_0xdb;
    undefined field_0xdc;
    undefined field_0xdd;
    undefined field_0xde;
    undefined field_0xdf;
    undefined field_0xe0;
    undefined field_0xe1;
    undefined field_0xe2;
    undefined field_0xe3;
    undefined field_0xe4;
    undefined field_0xe5;
    undefined field_0xe6;
    undefined field_0xe7;
    undefined field_0xe8;
    undefined field_0xe9;
    undefined field_0xea;
    undefined field_0xeb;
    undefined field_0xec;
    undefined field_0xed;
    undefined field_0xee;
    undefined field_0xef;
    undefined field_0xf0;
    undefined field_0xf1;
    undefined field_0xf2;
    undefined field_0xf3;
    undefined field_0xf4;
    undefined field_0xf5;
    undefined field_0xf6;
    undefined field_0xf7;
    undefined field_0xf8;
    undefined field_0xf9;
    undefined field_0xfa;
    undefined field_0xfb;
    undefined field_0xfc;
    undefined field_0xfd;
    undefined field_0xfe;
    undefined field_0xff;
    undefined field_0x100;
    undefined field_0x101;
    undefined field_0x102;
    undefined field_0x103;
    undefined field_0x104;
    undefined field_0x105;
    undefined field_0x106;
    undefined field_0x107;
    undefined field_0x108;
    undefined field_0x109;
    undefined field_0x10a;
    undefined field_0x10b;
    undefined field_0x10c;
    undefined field_0x10d;
    undefined field_0x10e;
    undefined field_0x10f;
    undefined field_0x110;
    undefined field_0x111;
    undefined field_0x112;
    undefined field_0x113;
    undefined field_0x114;
    undefined field_0x115;
    undefined field_0x116;
    undefined field_0x117;
    undefined field_0x118;
    undefined field_0x119;
    undefined field_0x11a;
    undefined field_0x11b;
    undefined field_0x11c;
    undefined field_0x11d;
    undefined field_0x11e;
    undefined field_0x11f;
    undefined field_0x120;
    undefined field_0x121;
    undefined field_0x122;
    undefined field_0x123;
    undefined field_0x124;
    undefined field_0x125;
    undefined field_0x126;
    undefined field_0x127;
    undefined field_0x128;
    undefined field_0x129;
    undefined field_0x12a;
    undefined field_0x12b;
    undefined field_0x12c;
    undefined field_0x12d;
    undefined field_0x12e;
    undefined field_0x12f;
    undefined field_0x130;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
    undefined field_0x134;
    undefined field_0x135;
    undefined field_0x136;
    undefined field_0x137;
    undefined field_0x138;
    undefined field_0x139;
    undefined field_0x13a;
    undefined field_0x13b;
    undefined field_0x13c;
    undefined field_0x13d;
    undefined field_0x13e;
    undefined field_0x13f;
    undefined field_0x140;
    undefined field_0x141;
    undefined field_0x142;
    undefined field_0x143;
    undefined field_0x144;
    undefined field_0x145;
    undefined field_0x146;
    undefined field_0x147;
    undefined field_0x148;
    undefined field_0x149;
    undefined field_0x14a;
    undefined field_0x14b;
    undefined field_0x14c;
    undefined field_0x14d;
    undefined field_0x14e;
    undefined field_0x14f;
    undefined field_0x150;
    undefined field_0x151;
    undefined field_0x152;
    undefined field_0x153;
    undefined field_0x154;
    undefined field_0x155;
    undefined field_0x156;
    undefined field_0x157;
    undefined field_0x158;
    undefined field_0x159;
    undefined field_0x15a;
    undefined field_0x15b;
    undefined field_0x15c;
    undefined field_0x15d;
    undefined field_0x15e;
    undefined field_0x15f;
    undefined field_0x160;
    undefined field_0x161;
    undefined field_0x162;
    undefined field_0x163;
    undefined field_0x164;
    undefined field_0x165;
    undefined field_0x166;
    undefined field_0x167;
    undefined field_0x168;
    undefined field_0x169;
    undefined field_0x16a;
    undefined field_0x16b;
    undefined field_0x16c;
    undefined field_0x16d;
    undefined field_0x16e;
    undefined field_0x16f;
    undefined field_0x170;
    undefined field_0x171;
    undefined field_0x172;
    undefined field_0x173;
    undefined field_0x174;
    undefined field_0x175;
    undefined field_0x176;
    undefined field_0x177;
    undefined field_0x178;
    undefined field_0x179;
    undefined field_0x17a;
    undefined field_0x17b;
    undefined field_0x17c;
    undefined field_0x17d;
    undefined field_0x17e;
    undefined field_0x17f;
    undefined field_0x180;
    undefined field_0x181;
    undefined field_0x182;
    undefined field_0x183;
    undefined field_0x184;
    undefined field_0x185;
    undefined field_0x186;
    undefined field_0x187;
    undefined field_0x188;
    undefined field_0x189;
    undefined field_0x18a;
    undefined field_0x18b;
    undefined field_0x18c;
    undefined field_0x18d;
    undefined field_0x18e;
    undefined field_0x18f;
    undefined field_0x190;
    undefined field_0x191;
    undefined field_0x192;
    undefined field_0x193;
    undefined field_0x194;
    undefined field_0x195;
    undefined field_0x196;
    undefined field_0x197;
    undefined field_0x198;
    undefined field_0x199;
    undefined field_0x19a;
    undefined field_0x19b;
    undefined field_0x19c;
    undefined field_0x19d;
    undefined field_0x19e;
    undefined field_0x19f;
    undefined field_0x1a0;
    undefined field_0x1a1;
    undefined field_0x1a2;
    undefined field_0x1a3;
    undefined field_0x1a4;
    undefined field_0x1a5;
    undefined field_0x1a6;
    undefined field_0x1a7;
    undefined field_0x1a8;
    undefined field_0x1a9;
    undefined field_0x1aa;
    undefined field_0x1ab;
    undefined field_0x1ac;
    undefined field_0x1ad;
    undefined field_0x1ae;
    undefined field_0x1af;
    undefined field_0x1b0;
    undefined field_0x1b1;
    undefined field_0x1b2;
    undefined field_0x1b3;
    undefined field_0x1b4;
    undefined field_0x1b5;
    undefined field_0x1b6;
    undefined field_0x1b7;
};

typedef struct D2GSINTERFACE D2GSINTERFACE, *PD2GSINTERFACE;

struct D2GSINTERFACE {
    void * Reserved;
    void * Reserved2;
    void * D2GSStart;
    void * D2GSSendDatabaseCharacter;
    void * D2GSRemoveClientFromGame;
    void * D2GSNewEmptyGame;
    void * D2GSEndAllGames;
    void * D2GSSendClientChatMessage;
    void * D2GSSetTickCount;
    void * D2GSSetACData;
    void * Reserved3;
    void * D2GSLoadConfig;
    void * Reserved4;
    void * D2GSInitConfig;
    void * Reserved5;
    void * Reserved6;
};

typedef struct D2GSPACKET D2GSPACKET, *PD2GSPACKET;

typedef ushort u_short;

typedef uchar u_char;

struct D2GSPACKET {
    u_short peer;
    u_short datalen;
    undefined field_0x4;
    undefined field_0x5;
    u_char data[16384];
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void * LPVOID;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef DWORD (* PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef CHAR * LPSTR;

typedef uchar BYTE;

typedef BYTE * LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOA * LPSTARTUPINFOA;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef ulong ULONG_PTR;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION * CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef struct _SYSTEMTIME * LPSYSTEMTIME;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef void * PVOID;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef BOOL (* PHANDLER_ROUTINE)(DWORD);

typedef char * va_list;

typedef struct D2GAMEINFO D2GAMEINFO, *PD2GAMEINFO;

struct D2GAMEINFO {
    undefined field_0x0;
    undefined field_0x1;
    WORD GameId; // Created by retype action
    WORD CharCount;
    undefined field_0x6;
    undefined field_0x7;
    undefined field_0x8;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    void * lpCharInfo; // Created by retype action
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
    undefined field_0x18;
    undefined field_0x19;
    undefined field_0x1a;
    undefined field_0x1b;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
    undefined field_0x20;
    undefined field_0x21;
    undefined field_0x22;
    undefined field_0x23;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    undefined field_0x28;
    undefined field_0x29;
    undefined field_0x2a;
    undefined field_0x2b;
    undefined field_0x2c;
    undefined field_0x2d;
    undefined field_0x2e;
    undefined field_0x2f;
    undefined field_0x30;
    undefined field_0x31;
    undefined field_0x32;
    undefined field_0x33;
    undefined field_0x34;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
    undefined field_0x38;
    undefined field_0x39;
    undefined field_0x3a;
    undefined field_0x3b;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    undefined field_0x40;
    undefined field_0x41;
    undefined field_0x42;
    undefined field_0x43;
    undefined field_0x44;
    undefined field_0x45;
    undefined field_0x46;
    undefined field_0x47;
    undefined field_0x48;
    undefined field_0x49;
    undefined field_0x4a;
    undefined field_0x4b;
    undefined field_0x4c;
    undefined field_0x4d;
    undefined field_0x4e;
    undefined field_0x4f;
    undefined field_0x50;
    undefined field_0x51;
    undefined field_0x52;
    undefined field_0x53;
    undefined field_0x54;
    undefined field_0x55;
    undefined field_0x56;
    undefined field_0x57;
    undefined field_0x58;
    undefined field_0x59;
    undefined field_0x5a;
    undefined field_0x5b;
    undefined field_0x5c;
    undefined field_0x5d;
    undefined field_0x5e;
    undefined field_0x5f;
    undefined field_0x60;
    undefined field_0x61;
    undefined field_0x62;
    undefined field_0x63;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
    undefined field_0x68;
    undefined field_0x69;
    undefined field_0x6a;
    undefined field_0x6b;
    undefined field_0x6c;
    undefined field_0x6d;
    undefined field_0x6e;
    undefined field_0x6f;
    char ladder;
    char expansion;
    byte field_0x72;
    char hardcore;
};

typedef struct D2CHARINFO D2CHARINFO, *PD2CHARINFO;

struct D2CHARINFO {
    uchar AcctName[16];
    uchar CharName[16];
    uchar RealmName[16];
    uint token;
    uint CharLevel;
    ushort CharClass;
    ushort TickCount;
    ushort EnterGame;
    ushort AllowLadder;
    ushort CharLockStatus;
    undefined field_0x42;
    undefined field_0x43;
    DWORD EnterTime;
    DWORD CharCreateTime;
    DWORD ClientId;
    WORD GameId;
    undefined field_0x52;
    undefined field_0x53;
    void * lpGameInfo;
    void * prev;
    void * next;
};

typedef longlong __time64_t;

typedef uint size_t;

typedef __time64_t time_t;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef DWORD ACCESS_MASK;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef uint UINT_PTR;

typedef struct in_addr in_addr, *Pin_addr;

typedef union _union_1226 _union_1226, *P_union_1226;

typedef struct _struct_1227 _struct_1227, *P_struct_1227;

typedef struct _struct_1228 _struct_1228, *P_struct_1228;

typedef ulong ULONG;

typedef uchar UCHAR;

typedef ushort USHORT;

struct _struct_1228 {
    USHORT s_w1;
    USHORT s_w2;
};

struct _struct_1227 {
    UCHAR s_b1;
    UCHAR s_b2;
    UCHAR s_b3;
    UCHAR s_b4;
};

union _union_1226 {
    struct _struct_1227 S_un_b;
    struct _struct_1228 S_un_w;
    ULONG S_addr;
};

struct in_addr {
    union _union_1226 S_un;
};

typedef USHORT ADDRESS_FAMILY;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD * LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (* FARPROC)(void);

typedef struct HKEY__ * HKEY;

typedef HKEY * PHKEY;

typedef uint UINT;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_WRITE=2147483648,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_TYPE_NO_PAD=8
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef ACCESS_MASK REGSAM;

typedef LONG LSTATUS;

typedef struct WSAData WSAData, *PWSAData;

typedef struct WSAData WSADATA;

typedef WSADATA * LPWSADATA;

struct WSAData {
    WORD wVersion;
    WORD wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char * lpVendorInfo;
};

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    ADDRESS_FAMILY sa_family;
    CHAR sa_data[14];
};

typedef UINT_PTR SOCKET;

typedef ulong u_long;

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    long tv_sec;
    long tv_usec;
};

typedef struct fd_set fd_set, *Pfd_set;

typedef uint u_int;

struct fd_set {
    u_int fd_count;
    SOCKET fd_array[64];
};




undefined4 __cdecl FUN_00401000(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint local_140 [80];
  
  if ((param_1 != (uint *)0x0) && ((param_2 == 0 || (param_3 != 0)))) {
    FUN_00401080(param_1);
    if (param_2 != 0) {
      do {
        uVar1 = 0x40;
        if (param_2 < 0x41) {
          uVar1 = param_2;
        }
        FUN_00401300(local_140,param_3,uVar1);
        FUN_004010b0(param_1,(int *)local_140);
        param_3 = param_3 + uVar1;
        param_2 = param_2 - uVar1;
      } while (param_2 != 0);
    }
    return 0;
  }
  return 0xffffffff;
}



void __cdecl FUN_00401080(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return;
}



void __cdecl FUN_004010b0(uint *param_1,int *param_2)

{
  sbyte sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  puVar8 = (uint *)(param_2 + 8);
  iVar10 = 0x40;
  do {
    uVar2 = (puVar8[-8] ^ puVar8[-6] ^ puVar8[5] ^ *puVar8) & 0x1f;
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    else {
      sVar1 = (sbyte)uVar2;
      uVar2 = 1 >> (0x20U - sVar1 & 0x1f) | 1 << sVar1;
    }
    puVar8[8] = uVar2;
    puVar8 = puVar8 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_10 = param_2;
  local_c = (int *)0x14;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar9 = param_1[3];
  uVar2 = *param_1;
  local_14 = param_1[4];
  do {
    uVar7 = uVar2;
    uVar3 = uVar9;
    uVar9 = uVar5;
    iVar10 = *local_10;
    local_10 = local_10 + 1;
    uVar2 = (~uVar4 & uVar3 | uVar9 & uVar4) + (uVar7 >> 0x1b | uVar7 << 5) + iVar10 + 0x5a827999 +
            local_14;
    uVar5 = uVar4 << 0x1e | uVar4 >> 2;
    local_c = (int *)((int)local_c + -1);
    uVar4 = uVar7;
    local_14 = uVar3;
  } while (local_c != (int *)0x0);
  local_14 = 0x14;
  local_c = param_2 + 0x14;
  do {
    uVar6 = uVar9;
    uVar9 = uVar5;
    uVar4 = uVar2;
    iVar10 = *local_c;
    local_c = local_c + 1;
    uVar2 = (uVar4 >> 0x1b | uVar4 << 5) + (uVar6 ^ uVar9 ^ uVar7) + iVar10 + 0x6ed9eba1 + uVar3;
    uVar5 = uVar7 << 0x1e | uVar7 >> 2;
    local_14 = local_14 + -1;
    uVar7 = uVar4;
    uVar3 = uVar6;
  } while (local_14 != 0);
  uVar7 = 0x28;
  if (true) {
    local_c = param_2 + 0x28;
    local_8 = 0x14;
    uVar7 = 0x3c;
    uVar3 = uVar4;
    local_14 = uVar6;
    do {
      uVar6 = uVar9;
      uVar9 = uVar5;
      uVar4 = uVar2;
      iVar10 = *local_c;
      local_c = local_c + 1;
      uVar2 = (uVar4 >> 0x1b | uVar4 << 5) + local_14 + ((uVar9 | uVar3) & uVar6 | uVar9 & uVar3) +
              -0x70e44324 + iVar10;
      uVar5 = uVar3 << 0x1e | uVar3 >> 2;
      local_8 = local_8 + -1;
      uVar3 = uVar4;
      local_14 = uVar6;
    } while (local_8 != 0);
  }
  if (uVar7 < 0x50) {
    param_2 = param_2 + uVar7;
    local_8 = 0x50 - uVar7;
    uVar7 = uVar4;
    uVar3 = uVar6;
    do {
      uVar4 = uVar2;
      uVar6 = uVar9;
      uVar9 = uVar5;
      iVar10 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = (uVar4 >> 0x1b | uVar4 << 5) + (uVar6 ^ uVar9 ^ uVar7) + iVar10 + -0x359d3e2a + uVar3;
      uVar5 = uVar7 << 0x1e | uVar7 >> 2;
      local_8 = local_8 + -1;
      uVar7 = uVar4;
      uVar3 = uVar6;
    } while (local_8 != 0);
  }
  *param_1 = *param_1 + uVar2;
  param_1[2] = param_1[2] + uVar5;
  param_1[1] = param_1[1] + uVar4;
  param_1[3] = param_1[3] + uVar9;
  param_1[4] = param_1[4] + uVar6;
  return;
}



void __cdecl FUN_00401300(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0x10;
  do {
    *param_1 = 0;
    if (uVar1 < param_3) {
      *param_1 = (uint)*(byte *)(uVar1 + param_2);
    }
    if (uVar1 + 1 < param_3) {
      *param_1 = *param_1 | (uint)*(byte *)(uVar1 + 1 + param_2) << 8;
    }
    if (uVar1 + 2 < param_3) {
      *param_1 = *param_1 | (uint)*(byte *)(uVar1 + 2 + param_2) << 0x10;
    }
    if (uVar1 + 3 < param_3) {
      *param_1 = *param_1 | (uint)*(byte *)(uVar1 + 3 + param_2) << 0x18;
    }
    uVar1 = uVar1 + 4;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



undefined * __cdecl FUN_00401370(undefined4 *param_1)

{
  char *_Dest;
  
  if (param_1 == (undefined4 *)0x0) {
    return (undefined *)0x0;
  }
  _Dest = &DAT_00411358;
  do {
    sprintf(_Dest,(char *)&_Format_0040d010,*param_1);
    _Dest = _Dest + 8;
    param_1 = param_1 + 1;
  } while (_Dest < &DAT_00411380);
  return &DAT_00411358;
}



undefined * FUN_0040138a(void)

{
  code *unaff_EBX;
  undefined *unaff_ESI;
  undefined4 *unaff_EDI;
  
  do {
    (*unaff_EBX)(unaff_ESI,&_Format_0040d010,*unaff_EDI);
    unaff_ESI = unaff_ESI + 8;
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_ESI < &DAT_00411380);
  return &DAT_00411358;
}



void __fastcall CloseGame(WORD bExpansion,DWORD dwTotalEnter,DWORD dwGameLife)

{
  DWORD unaff_retaddr;
  
  D2GSCBCloseGame(bExpansion,unaff_retaddr,dwGameLife);
  return;
}



void __fastcall
LeaveGame(undefined *param_1,undefined4 param_2,WORD param_3,short param_4,DWORD param_5,
         DWORD param_6,uint param_7,LPCSTR param_8,uint param_9)

{
  undefined2 in_stack_0000000a;
  BOOL in_stack_00000020;
  DWORD in_stack_00000024;
  DWORD in_stack_00000028;
  LPCSTR in_stack_0000002c;
  DWORD in_stack_00000030;
  DWORD in_stack_00000034;
  
  D2GSCBLeaveGame(param_1,(WORD)param_2,param_3,_param_4,param_5,param_6,(WORD)param_7,param_8,
                  (LPCSTR)param_9,in_stack_00000020,in_stack_00000024,in_stack_00000028,
                  in_stack_0000002c,in_stack_00000030,in_stack_00000034);
  return;
}



void __fastcall
GetDatabaseCharacter(void *param_1,LPCSTR param_2,DWORD dwClientId,LPCSTR lpAccountName)

{
  LPCSTR unaff_retaddr;
  
  D2GSCBGetDatabaseCharacter(param_1,param_2,(short)dwClientId,(DWORD)lpAccountName,unaff_retaddr);
  return;
}



void __fastcall
SaveDatabaseCharacter
          (undefined4 param_1,undefined2 param_2,short param_3,undefined4 param_4,undefined2 param_5
          )

{
  D2GSCBSaveDatabaseCharacter(param_1,param_2,param_3,param_4,param_5);
  return;
}



void __cdecl ServerLogMessage(DWORD dwCount,LPCSTR lpFormat,...)

{
  LogAP(s_ServerLogMessage_0040d018,lpFormat,&stack0x0000000c);
  return;
}



void __fastcall
EnterGame(undefined4 param_1,char *param_2,uchar *param_3,undefined4 param_4,undefined4 param_5,
         undefined4 param_6,undefined2 param_7,short param_8,undefined4 param_9,undefined4 param_10,
         uint param_11,undefined4 param_12,uint param_13)

{
  char *unaff_retaddr;
  
  D2GSCBEnterGame(param_1,(char)param_2,param_3,param_4,param_5,unaff_retaddr,param_3._0_1_,param_4,
                  param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13);
  return;
}



void __fastcall
FindPlayerToken(byte *lpCharName,int param_2,short param_3,char *param_4,undefined4 *param_5)

{
  D2GSCBFindPlayerToken(lpCharName,param_2,param_3,param_4,param_5);
  return;
}



EVENTCALLBACKTABLE * EventCallbackTableInit(void)

{
  gEventCallbackTable.fpCloseGame = CloseGame;
  gEventCallbackTable.fpLeaveGame = LeaveGame;
  gEventCallbackTable.fpGetDatabaseCharacter = GetDatabaseCharacter;
  gEventCallbackTable.fpSaveDatabaseCharacter = SaveDatabaseCharacter;
  gEventCallbackTable.fpServerLogMessage = ServerLogMessage;
  gEventCallbackTable.fpEnterGame = EnterGame;
  gEventCallbackTable.fpFindPlayerToken = FindPlayerToken;
  gEventCallbackTable.fpSaveDatabaseGuild = &DAT_00401520;
  gEventCallbackTable.fpUnlockDatabaseCharacter = &DAT_00401520;
  gEventCallbackTable.fpReserved1 = &DAT_00401530;
  gEventCallbackTable.fpUpdateCharacterLadder = &LAB_004014c0;
  gEventCallbackTable.fpUpdateGameInformation = &LAB_004014f0;
  gEventCallbackTable.fpReserved2 = &DAT_00401520;
  gEventCallbackTable.fpSetGameData = &LAB_00401510;
  gEventCallbackTable.fpRelockDatabaseCharacter = &DAT_00401520;
  gEventCallbackTable.fpLoadComplete = &DAT_00401520;
  return &gEventCallbackTable;
}



uint __cdecl FUN_004015f0(char *param_1)

{
  char cVar1;
  byte bVar2;
  sbyte sVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint local_4;
  
  pcVar4 = param_1;
  uVar7 = 0;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  iVar6 = -1;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_4 = 0;
  param_1 = (char *)0x0;
  if (iVar6 != -2) {
    do {
      bVar2 = pcVar4[uVar7];
      uVar5 = (uint)bVar2;
      if (bVar2 < 0x80) {
        uVar5 = tolower((int)(char)bVar2);
      }
      uVar5 = uVar5 & 0xff;
      if (((uint)param_1 & 0x1f) != 0) {
        sVar3 = (sbyte)((uint)param_1 & 0x1f);
        uVar5 = uVar5 >> (0x20U - sVar3 & 0x1f) | uVar5 << sVar3;
      }
      local_4 = local_4 ^ uVar5;
      param_1 = param_1 + 7;
      uVar5 = 0xffffffff;
      uVar7 = uVar7 + 1;
      pcVar8 = pcVar4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
    } while (uVar7 < ~uVar5 - 1);
  }
  return local_4;
}



int __cdecl charlist_init(uint tbllen)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (tbllen == 0) {
    return -1;
  }
  charlist_destroy();
  clitbl = (undefined4 *)malloc(tbllen * 4);
  if (clitbl == (undefined4 *)0x0) {
    return -1;
  }
  uVar1 = tbllen & 0x3fffffff;
  puVar3 = clitbl;
  while (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = 0;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  clitbl_len = tbllen;
  return 0;
}



int charlist_destroy(void)

{
  charlist_flush();
  if (clitbl != 0) {
    free((void *)clitbl);
  }
  clitbl_len = 0;
  clitbl = 0;
  return 0;
}



void charlist_flush(void)

{
  void *pvVar1;
  void *_Memory;
  uint i;
  
  if ((clitbl != 0) && (i = 0, clitbl_len != 0)) {
    do {
      _Memory = *(void **)(clitbl + i * 4);
      while (_Memory != (void *)0x0) {
        pvVar1 = *(void **)((int)_Memory + 0x18);
        free(_Memory);
        _Memory = pvVar1;
      }
      i = i + 1;
    } while (i < clitbl_len);
  }
  return;
}



void * __cdecl charlist_getdata(uchar *charname,int param_2)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  char *_Str1;
  uchar *puVar4;
  void *pvVar5;
  
  if (charname == (uchar *)0x0) {
    return (void *)0x0;
  }
  if (clitbl_len == 0) {
    return (void *)0x0;
  }
  uVar3 = 0xffffffff;
  puVar4 = charname;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (uVar1 != '\0');
  if (0xf < ~uVar3 - 1) {
    return (void *)0x0;
  }
  pvVar5 = (void *)0x0;
  uVar3 = FUN_004015f0((char *)charname);
  _Str1 = *(char **)(clitbl + (uVar3 % clitbl_len) * 4);
  if (_Str1 != (char *)0x0) {
    while (iVar2 = _strcmpi(_Str1,(char *)charname), iVar2 != 0) {
      _Str1 = *(char **)(_Str1 + 0x18);
      if (_Str1 == (char *)0x0) {
        return (void *)0x0;
      }
    }
    if (param_2 != 1) {
      if (param_2 == 2) {
        return *(void **)(_Str1 + 0x14);
      }
      return (void *)0x0;
    }
    pvVar5 = *(void **)(_Str1 + 0x10);
  }
  return pvVar5;
}



int __cdecl charlist_insert(char *param_1,void *param_2,void *param_3)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  undefined4 *_Dest;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  if (clitbl_len == 0) {
    return -1;
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (0xf < ~uVar3 - 1) {
    return -2;
  }
  uVar3 = FUN_004015f0(param_1);
  uVar3 = uVar3 % clitbl_len;
  pcVar4 = (char *)0x0;
  _Str1 = *(char **)(clitbl + uVar3 * 4);
  while (_Str1 != (char *)0x0) {
    iVar2 = _strcmpi(_Str1,param_1);
    if (iVar2 == 0) {
      return -3;
    }
    pcVar4 = _Str1;
    _Str1 = *(char **)(_Str1 + 0x18);
  }
  _Dest = (undefined4 *)malloc(0x1c);
  if (_Dest == (undefined4 *)0x0) {
    return -4;
  }
  iVar2 = 7;
  puVar5 = _Dest;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  strncpy((char *)_Dest,param_1,0xf);
  *(void **)(_Dest + 4) = param_2;
  *(void **)(_Dest + 5) = param_3;
  if (pcVar4 != (char *)0x0) {
    *(undefined4 **)(pcVar4 + 0x18) = _Dest;
    return 0;
  }
  *(undefined4 **)(clitbl + uVar3 * 4) = _Dest;
  return 0;
}



undefined4 __cdecl FUN_00401900(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *_Str1;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (clitbl_len == 0) {
    return 0xffffffff;
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (0xf < ~uVar3 - 1) {
    return 0xffffffff;
  }
  uVar3 = FUN_004015f0(param_1);
  uVar3 = uVar3 % clitbl_len;
  pcVar4 = *(char **)(clitbl + uVar3 * 4);
  pcVar5 = (char *)0x0;
  if (pcVar4 != (char *)0x0) {
    while( true ) {
      _Str1 = pcVar4;
      iVar2 = _strcmpi(_Str1,param_1);
      if (iVar2 == 0) break;
      pcVar4 = *(char **)(_Str1 + 0x18);
      pcVar5 = _Str1;
      if (*(char **)(_Str1 + 0x18) == (char *)0x0) {
        return 0;
      }
    }
    if (pcVar5 != (char *)0x0) {
      *(undefined4 *)(pcVar5 + 0x18) = *(undefined4 *)(_Str1 + 0x18);
      free(_Str1);
      return 0;
    }
    *(undefined4 *)(clitbl + uVar3 * 4) = *(undefined4 *)(_Str1 + 0x18);
    free(_Str1);
  }
  return 0;
}



int D2GSReadConfig(void)

{
  int iVar1;
  
  iVar1 = RegkeyOpen((HKEY)0x80000002,s_Software_D2Server_D2GS_0040d4f4,&PTR_s_D2CSIP_0040d030);
  if (iVar1 == 0) {
    D2GSEventLog(s_D2GSReadConfig_0040d4b8,s_failed_loading_configurations_fr_0040d4c8);
    return 0;
  }
  DAT_00631808 = ntohs(DAT_00631808);
  DAT_0063180a = ntohs(DAT_0063180a);
  d2csip = ntohs(d2csip);
  DAT_00631830 = MaxGames * 2 + 200;
  DAT_00631838 = 0;
  return 1;
}



undefined4 __cdecl RegkeyOpen(HKEY param_1,LPCSTR param_2,char **param_3)

{
  char **ppcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  HKEY local_20c;
  undefined2 local_208 [2];
  LPCSTR local_204;
  undefined4 local_200 [64];
  undefined4 local_100 [64];
  
  uVar3 = FUN_00401ce0(param_1,param_2,(PHKEY)&local_20c,0x20019);
  if (uVar3 == 0) {
    D2GSEventLog(s_D2GSLoadRegConfigs_0040d56c,s_Can_t_open_registry_key____HKEY__0040d580,param_2);
    return 0;
  }
  if (*param_3 != (char *)0x0) {
    ppcVar7 = param_3 + 2;
    do {
      if (false) {
switchD_00401ac0_caseD_2:
        D2GSEventLog(s_D2GSLoadRegConfigs_0040d56c,s_Unknown_conf_type_for__s_0040d50c,ppcVar7[-2]);
      }
      else {
        switch(param_3[1]) {
        case (char *)0x1:
        case (char *)0x3:
          iVar4 = FUN_00401d90(local_20c,ppcVar7[-2],&local_204);
          if (iVar4 == 0) {
            D2GSEventLog(s_D2GSLoadRegConfigs_0040d56c,s_Can_t_read_key___s___set_default_0040d540,
                         ppcVar7[-2],*ppcVar7);
            iVar4 = atoi(*ppcVar7);
            *(int *)ppcVar7[1] = iVar4;
          }
          else {
            *(LPCSTR *)ppcVar7[1] = local_204;
          }
          break;
        default:
          goto switchD_00401ac0_caseD_2;
        case (char *)0x4:
          iVar4 = FUN_00401d20(local_20c,ppcVar7[-2],local_100,0x100);
          if (iVar4 == 0) {
            D2GSEventLog(s_D2GSLoadRegConfigs_0040d56c,s_Can_t_read_key___s___set_default_0040d540,
                         ppcVar7[-2],*ppcVar7);
            uVar3 = 0xffffffff;
            pcVar9 = *ppcVar7;
            do {
              pcVar10 = pcVar9;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar10 = pcVar9 + 1;
              cVar2 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar2 != '\0');
            uVar3 = ~uVar3;
            uVar6 = uVar3 >> 2;
            puVar8 = (undefined4 *)(pcVar10 + -uVar3);
            puVar11 = (undefined4 *)ppcVar7[1];
            while (uVar6 != 0) {
              uVar6 = uVar6 - 1;
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            uVar3 = uVar3 & 3;
            while (uVar3 != 0) {
              uVar3 = uVar3 - 1;
              *(undefined *)puVar11 = *(undefined *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
          }
          else {
            uVar3 = 0xffffffff;
            puVar8 = local_100;
            do {
              puVar11 = puVar8;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              puVar11 = (undefined4 *)((int)puVar8 + 1);
              cVar2 = *(char *)puVar8;
              puVar8 = puVar11;
            } while (cVar2 != '\0');
            uVar3 = ~uVar3;
            uVar6 = uVar3 >> 2;
            puVar8 = (undefined4 *)((int)puVar11 - uVar3);
            puVar11 = (undefined4 *)ppcVar7[1];
            while (uVar6 != 0) {
              uVar6 = uVar6 - 1;
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            uVar3 = uVar3 & 3;
            while (uVar3 != 0) {
              uVar3 = uVar3 - 1;
              *(undefined *)puVar11 = *(undefined *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
          }
          break;
        case (char *)0x9:
          iVar4 = FUN_00401d90(local_20c,ppcVar7[-2],(LPCSTR *)local_208);
          if (iVar4 == 0) {
            D2GSEventLog(s_D2GSLoadRegConfigs_0040d56c,s_Can_t_read_key___s___set_default_0040d540,
                         ppcVar7[-2],*ppcVar7);
            iVar4 = atoi(*ppcVar7);
            *(short *)ppcVar7[1] = (short)iVar4;
          }
          else {
            *(undefined2 *)ppcVar7[1] = local_208[0];
          }
          break;
        case (char *)0xa:
          iVar4 = FUN_00401d20(local_20c,ppcVar7[-2],local_200,0x100);
          if (iVar4 == 0) {
            D2GSEventLog(s_D2GSLoadRegConfigs_0040d56c,s_Can_t_read_key___s___set_default_0040d540,
                         ppcVar7[-2],*ppcVar7);
            strncpy((char *)local_200,*ppcVar7,0xff);
          }
          uVar5 = inet_addr((char *)local_200);
          if (uVar5 == 0xffffffff) {
            D2GSEventLog(s_D2GSReadConfig_0040d4b8,s_Invalid_ip_address___s__0040d528,local_200);
          }
          *(ulong *)ppcVar7[1] = uVar5;
        }
      }
      ppcVar1 = ppcVar7 + 2;
      param_3 = ppcVar7 + 2;
      ppcVar7 = ppcVar7 + 4;
    } while (*ppcVar1 != (char *)0x0);
  }
  FUN_00401d10(local_20c);
  return 1;
}



uint __cdecl FUN_00401ce0(HKEY param_1,LPCSTR param_2,PHKEY param_3,REGSAM param_4)

{
  LSTATUS LVar1;
  
  LVar1 = RegOpenKeyExA(param_1,param_2,0,param_4,param_3);
  return (uint)(LVar1 == 0);
}



void __cdecl FUN_00401d10(HKEY param_1)

{
  if (param_1 != (HKEY)0x0) {
    RegCloseKey(param_1);
  }
  return;
}



undefined4 __cdecl FUN_00401d20(HKEY param_1,LPCSTR param_2,undefined4 *param_3,uint param_4)

{
  LPCSTR lpValueName;
  LSTATUS LVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  lpValueName = param_2;
  if ((param_1 != (HKEY)0x0) && (param_2 != (LPCSTR)0x0)) {
    uVar2 = param_4 >> 2;
    puVar3 = param_3;
    while (uVar2 != 0) {
      uVar2 = uVar2 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    param_2 = (LPCSTR)param_4;
    uVar2 = param_4 & 3;
    while (uVar2 != 0) {
      uVar2 = uVar2 - 1;
      *(undefined *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    LVar1 = RegQueryValueExA(param_1,lpValueName,(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)param_3,
                             (LPDWORD)&param_2);
    if (LVar1 == 0) {
      *(undefined *)((int)param_3 + (param_4 - 1)) = 0;
      return 1;
    }
  }
  return 0;
}



undefined4 __cdecl FUN_00401d90(HKEY param_1,LPCSTR param_2,LPCSTR *param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  DWORD local_4;
  
  hKey = param_1;
  if ((param_1 != (HKEY)0x0) && (param_2 != (LPCSTR)0x0)) {
    param_1 = (HKEY)&DAT_00000004;
    LVar1 = RegQueryValueExA(hKey,param_2,(LPDWORD)0x0,&local_4,(LPBYTE)&param_2,(LPDWORD)&param_1);
    if (LVar1 == 0) {
      *param_3 = param_2;
      return 1;
    }
  }
  return 0;
}



uint __cdecl FUN_00401de0(HKEY param_1,LPCSTR param_2,BYTE *param_3)

{
  BYTE BVar1;
  LSTATUS LVar2;
  uint uVar3;
  BYTE *pBVar4;
  
  if ((param_1 == (HKEY)0x0) || (param_2 == (LPCSTR)0x0)) {
    return 0;
  }
  uVar3 = 0xffffffff;
  pBVar4 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    BVar1 = *pBVar4;
    pBVar4 = pBVar4 + 1;
  } while (BVar1 != '\0');
  LVar2 = RegSetValueExA(param_1,param_2,0,1,param_3,~uVar3);
  return (uint)(LVar2 == 0);
}



uint __cdecl FUN_00401e20(HKEY param_1,LPCSTR param_2,HKEY param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  
  hKey = param_1;
  if ((param_1 != (HKEY)0x0) && (param_2 != (LPCSTR)0x0)) {
    param_1 = param_3;
    LVar1 = RegSetValueExA(hKey,param_2,0,4,(BYTE *)&param_1,4);
    return (uint)(LVar1 == 0);
  }
  return 0;
}



int __cdecl D2GSSetConfigDWORD(LPCSTR param_1,DWORD param_2)

{
  uint uVar1;
  HKEY local_4;
  
  uVar1 = FUN_00401ce0((HKEY)0x80000002,s_Software_D2Server_D2GS_0040d4f4,(PHKEY)&local_4,2);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = FUN_00401e20(local_4,param_1,param_2);
  if (uVar1 == 0) {
    FUN_00401d10(local_4);
    return 0;
  }
  FUN_00401d10(local_4);
  return 1;
}



undefined4 __cdecl FUN_00401ec0(LPCSTR param_1,BYTE *param_2)

{
  uint uVar1;
  HKEY local_4;
  
  uVar1 = FUN_00401ce0((HKEY)0x80000002,s_Software_D2Server_D2GS_0040d4f4,(PHKEY)&local_4,2);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = FUN_00401de0(local_4,param_1,param_2);
  if (uVar1 == 0) {
    FUN_00401d10(local_4);
    return 0;
  }
  FUN_00401d10(local_4);
  return 1;
}



void __cdecl D2GSSetMaxGameLife(DWORD value)

{
  MaxGameLife = value;
  D2GSSetConfigDWORD(s_MaxGameLife_0040d3ac,value);
  return;
}



void __cdecl D2GSSetMaxGames(DWORD param_1)

{
  MaxGames = param_1;
  D2GSSetConfigDWORD(s_MaxGames_0040d3cc,param_1);
  return;
}



void __cdecl D2GSSetMaxPreferUsers(DWORD param_1)

{
  MaxPreferUsers = param_1;
  D2GSSetConfigDWORD(s_MaxPreferUsers_0040d3b8,param_1);
  return;
}



void __cdecl D2GSEnableGSLog(DWORD param_1)

{
  EnableGSLog = param_1;
  D2GSSetConfigDWORD(s_EnableGSLog_0040d414,param_1);
  return;
}



int __cdecl D2GSSetMultiCPUMask(DWORD value)

{
  int iVar1;
  
  MultiCPUMask = value;
  iVar1 = D2GSSetConfigDWORD(s_MultiCPUMask_0040d334,value);
  return iVar1;
}



void __cdecl D2GSSetAutoUpdate(DWORD param_1)

{
  AutoUpdate = param_1;
  D2GSSetConfigDWORD(s_AutoUpdate_0040d28c,param_1);
  return;
}



void __cdecl D2GSSetAutoUpdateVer(DWORD param_1)

{
  AutoUpdateVer = param_1;
  D2GSSetConfigDWORD(s_AutoUpdateVer_0040d260,param_1);
  return;
}



int __cdecl D2GSSetAutoUpdateTimeout(DWORD value)

{
  int iVar1;
  
  AutoUpdateTimeout = value;
  iVar1 = D2GSSetConfigDWORD(s_AutoUpdateTimeout_0040d278,value);
  return iVar1;
}



int __cdecl D2GSSetAutoUpdateURL(BYTE *param_1)

{
  int iVar1;
  
  _snprintf((char *)&_Dest_0063158c,0x103,(char *)&_Format_0040d5b4,param_1);
  DAT_0063168f = 0;
  iVar1 = FUN_00401ec0(s_AutoUpdateUrl_0040d250,param_1);
  return iVar1;
}



void D2GSResetGameList(void)

{
  void *pChar;
  void *ph;
  
  DAT_004113a0 = &DAT_00631ca8;
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  ph = lpGameInfoHead;
  while (pChar = (void *)lpPendingChar, ph != (void *)0x0) {
    pChar = *(void **)((int)ph + 0x8c);
    D2GSDeleteAllCharInGame(ph);
    free(ph);
    ph = pChar;
  }
  while (pChar != (void *)0x0) {
    ph = *(void **)((int)pChar + 0x5c);
    free(pChar);
    pChar = ph;
  }
  (*D2GSEndAllGames)();
  charlist_flush();
  lpGameInfoHead = (void *)0x0;
  lpPendingChar = 0;
  currentgamenum = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  D2GSEventLog(s_D2GSResetGameList_0040d6d4,s_End_all_game_in_the_Game_List_an_0040d6e8);
  return;
}



undefined4 __cdecl FUN_00402120(int *param_1,int *param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  iVar2 = lpGameInfoHead;
  do {
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    puVar1 = (ushort *)(iVar2 + 0x78);
    iVar2 = *(int *)(iVar2 + 0x8c);
    iVar4 = iVar4 + (uint)*puVar1;
  } while (iVar3 < 0x1f5);
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  *param_1 = iVar3;
  *param_2 = iVar4;
  return 0;
}



void __cdecl D2GSDeleteAllCharInGame(void *lpGameInfo)

{
  LPCSTR pCVar1;
  LPCSTR lpAccountName;
  uint uVar2;
  
  if (lpGameInfo != (void *)0x0) {
    uVar2 = 0;
    lpAccountName = *(LPCSTR *)((int)lpGameInfo + 0x84);
    while (lpAccountName != (LPCSTR)0x0) {
      pCVar1 = *(LPCSTR *)(lpAccountName + 0x5c);
      if (*(short *)(lpAccountName + 0x40) != 0) {
        D2GSEventLog(s_D2GSDeleteAllCharInGame_0040d75c,s_Unlock_char__s___s__with_unfinis_0040d774,
                     lpAccountName + 0x10,lpAccountName);
        D2GSUnlockChar(lpAccountName,lpAccountName + 0x10);
      }
      D2GSEventLog(s_D2GSDeleteAllCharInGame_0040d75c,s_Delete_zombie_char__s___s__0040d740,
                   lpAccountName + 0x10,lpAccountName);
      FUN_00401900(lpAccountName + 0x10);
      free(lpAccountName);
      uVar2 = uVar2 + 1;
      lpAccountName = pCVar1;
    }
    *(undefined4 *)((int)lpGameInfo + 0x84) = 0;
    D2GSEventLog(s_D2GSDeleteAllCharInGame_0040d75c,s_Delete__u__u__character_in_game___0040d714,
                 uVar2 & 0xffff,(uint)*(ushort *)((int)lpGameInfo + 0x78),lpGameInfo,
                 (uint)*(ushort *)((int)lpGameInfo + 0x76));
    *(undefined2 *)((int)lpGameInfo + 0x78) = 0;
  }
  return;
}



int __cdecl D2GSGameListDelete(void *lpGameInfo)

{
  int lpPrev;
  int lpNext;
  int iVar1;
  
  if (lpGameInfo != (void *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
    D2GSDeleteAllCharInGame(lpGameInfo);
    lpPrev = *(int *)((int)lpGameInfo + 0x88);
    lpNext = *(int *)((int)lpGameInfo + 0x8c);
    iVar1 = lpNext;
    if (lpPrev != 0) {
      *(int *)(lpPrev + 0x8c) = lpNext;
      iVar1 = lpGameInfoHead;
    }
    lpGameInfoHead = iVar1;
    if (lpNext != 0) {
      *(int *)(lpNext + 0x88) = lpPrev;
    }
    *(undefined2 *)((int)lpGameInfo + 0x76) = 0;
    free(lpGameInfo);
    currentgamenum = currentgamenum - 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  }
  return 0;
}



int __cdecl
D2GSInsertCharIntoGameInfo
          (D2GAMEINFO *lpGameInfo,DWORD token,uchar *AcctName,uchar *CharName,char *RealmName,
          DWORD CharLevel,WORD CharClass,WORD EnterGame)

{
  D2CHARINFO *lpCharInfo;
  int val;
  D2CHARINFO *pDVar1;
  time_t tVar2;
  D2CHARINFO *lpTemp;
  
  if (((lpGameInfo == (D2GAMEINFO *)0x0) || (AcctName == (uchar *)0x0)) ||
     (CharName == (uchar *)0x0)) {
    return 0x81;
  }
  if (7 < lpGameInfo[1].CharCount) {
    return 0x82;
  }
  lpCharInfo = (D2CHARINFO *)malloc(0x60);
  if (lpCharInfo == (D2CHARINFO *)0x0) {
    return 0x80;
  }
  val = 0x18;
  pDVar1 = lpCharInfo;
  while (val != 0) {
    val = val + -1;
    *(undefined4 *)pDVar1->AcctName = 0;
    pDVar1 = (D2CHARINFO *)(pDVar1->AcctName + 4);
  }
  strncpy((char *)lpCharInfo,(char *)AcctName,0xf);
  strncpy((char *)lpCharInfo->CharName,(char *)CharName,0xf);
  strncpy((char *)lpCharInfo->RealmName,RealmName,0xf);
  lpCharInfo->token = token;
  lpCharInfo->CharLevel = CharLevel;
  lpCharInfo->CharClass = CharClass;
  lpCharInfo->EnterGame = EnterGame;
  lpCharInfo->AllowLadder = 0;
  lpCharInfo->CharLockStatus = 0;
  tVar2 = time((time_t *)0x0);
  lpCharInfo->EnterTime = (DWORD)tVar2;
  lpCharInfo->CharCreateTime = (DWORD)tVar2;
  lpCharInfo->GameId = lpGameInfo[1].GameId;
  *(D2GAMEINFO **)&lpCharInfo->lpGameInfo = lpGameInfo;
  lpCharInfo->ClientId = 0;
  val = charlist_insert((char *)CharName,lpCharInfo,lpGameInfo);
  if (val != 0) {
    D2GSEventLog(s_D2GSInsertCharIntoGameInfo_0040d7dc,s_failed_insert_info_charlist_for___0040d7f8,
                 CharName,AcctName,val);
    free(lpCharInfo);
    return 0x83;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  lpTemp = (D2CHARINFO *)lpGameInfo[1].lpCharInfo;
  *(D2CHARINFO **)&lpGameInfo[1].lpCharInfo = lpCharInfo;
  if (lpTemp != (D2CHARINFO *)0x0) {
    *(D2CHARINFO **)&lpCharInfo->next = lpTemp;
    *(D2CHARINFO **)&lpTemp->prev = lpCharInfo;
  }
  lpGameInfo[1].CharCount = lpGameInfo[1].CharCount + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  return 0;
}



int __cdecl D2GSDeleteCharFromGameInfo(D2GAMEINFO *lpGameInfo,D2CHARINFO *lpCharInfo)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((lpGameInfo != (D2GAMEINFO *)0x0) && (lpCharInfo != (D2CHARINFO *)0x0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
    pvVar1 = lpCharInfo->prev;
    pvVar2 = lpCharInfo->next;
    if (pvVar1 == (void *)0x0) {
      lpGameInfo[1].lpCharInfo = pvVar2;
    }
    else {
      *(void **)((int)pvVar1 + 0x5c) = pvVar2;
    }
    if (pvVar2 != (void *)0x0) {
      *(void **)((int)pvVar2 + 0x58) = pvVar1;
    }
    lpGameInfo[1].CharCount = lpGameInfo[1].CharCount - 1;
    FUN_00401900((char *)lpCharInfo->CharName);
    free(lpCharInfo);
    LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
    return 0;
  }
  return 0x81;
}



int __cdecl D2GSDeletePendingChar(D2CHARINFO *lpCharInfo)

{
  short *psVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  BOOL BVar5;
  
  if (lpCharInfo != (D2CHARINFO *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
    pvVar2 = lpCharInfo->prev;
    pvVar3 = lpCharInfo->next;
    pvVar4 = pvVar3;
    if (pvVar2 != (void *)0x0) {
      *(void **)((int)pvVar2 + 0x5c) = pvVar3;
      pvVar4 = lpPendingChar;
    }
    lpPendingChar = pvVar4;
    if (pvVar3 != (void *)0x0) {
      *(void **)((int)pvVar3 + 0x58) = pvVar2;
    }
    BVar5 = IsBadReadPtr(lpCharInfo->lpGameInfo,0x90);
    if ((BVar5 == 0) && (*(WORD *)((int)lpCharInfo->lpGameInfo + 0x76) == lpCharInfo->GameId)) {
      psVar1 = (short *)((int)lpCharInfo->lpGameInfo + 0x78);
      *psVar1 = *psVar1 + -1;
    }
    else {
      D2GSEventLog(s_D2GSDeletePendingChar_0040d82c,s_Delete_a_pending_char__s___s__in_0040d844,
                   lpCharInfo->CharName,lpCharInfo);
    }
    free(lpCharInfo);
    LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  }
  return 0;
}



undefined4 __cdecl FUN_00402720(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *_Dest;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    _Dest = (undefined4 *)malloc(0x34);
    if (_Dest == (undefined4 *)0x0) {
      return 0x80;
    }
    iVar2 = 0xd;
    puVar3 = _Dest;
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    strncpy((char *)_Dest,param_1,0xf);
    strncpy((char *)(_Dest + 4),param_2,0xf);
    _Dest[8] = param_3;
    _Dest[9] = param_4;
    *(undefined2 *)(_Dest + 10) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
    puVar3 = DAT_00411398;
    if (DAT_00411398 != (undefined4 *)0x0) {
      puVar1 = _Dest;
      *(undefined4 **)(_Dest + 0xc) = DAT_00411398;
      DAT_00411398 = puVar1;
      *(undefined4 **)(puVar3 + 0xb) = _Dest;
      _Dest = DAT_00411398;
    }
    DAT_00411398 = _Dest;
    LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
    return 0;
  }
  return 0x81;
}



int __cdecl D2GSDeleteGetDataRequest(D2GETDATAREQUEST *lpGetDataReq)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  if (lpGetDataReq != (D2GETDATAREQUEST *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
    iVar1 = *(int *)((int)&lpGetDataReq->field_0x2a + 2);
    DVar2 = lpGetDataReq->next;
    DVar3 = DVar2;
    if (iVar1 != 0) {
      *(DWORD *)(iVar1 + 0x30) = DVar2;
      DVar3 = DAT_00411398;
    }
    DAT_00411398 = DVar3;
    if (DVar2 != 0) {
      *(int *)(DVar2 + 0x2c) = iVar1;
    }
    free(lpGetDataReq);
    LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  }
  return 0;
}



D2GAMEINFO * __cdecl D2GSFindGameInfoByGameId(WORD GameId)

{
  D2GAMEINFO *lpGame;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  lpGame = lpGameInfoHead;
  while ((lpGame != (D2GAMEINFO *)0x0 && (lpGame[1].GameId != GameId))) {
    lpGame = *(D2GAMEINFO **)&lpGame[1].field_0x18;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  return lpGame;
}



D2CHARINFO * __cdecl D2GSFindCharInGameByCharName(D2GAMEINFO *lpGame,uchar *CharName)

{
  byte bVar1;
  D2CHARINFO *pDVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if ((CharName == (uchar *)0x0) || (lpGame == (D2GAMEINFO *)0x0)) {
    return (D2CHARINFO *)0x0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  pDVar2 = (D2CHARINFO *)lpGame[1].lpCharInfo;
  while (pDVar2 != (D2CHARINFO *)0x0) {
    pbVar3 = pDVar2->CharName;
    pbVar5 = CharName;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_004028b6:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != false);
        goto LAB_004028bb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_004028b6;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004028bb:
    if (iVar4 == 0) break;
    pDVar2 = (D2CHARINFO *)pDVar2->next;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  return pDVar2;
}



D2CHARINFO * __cdecl D2GSFindPendingCharByCharName(uchar *CharName)

{
  byte bVar1;
  D2CHARINFO *pDVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (CharName == (uchar *)0x0) {
    return (D2CHARINFO *)0x0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  pDVar2 = lpPendingChar;
  while (pDVar2 != (D2CHARINFO *)0x0) {
    pbVar3 = pDVar2->CharName;
    pbVar5 = CharName;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00402933:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != false);
        goto LAB_00402938;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00402933;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00402938:
    if (iVar4 == 0) break;
    pDVar2 = (D2CHARINFO *)pDVar2->next;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  return pDVar2;
}



int FUN_004028ed(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *unaff_EBP;
  byte *pbVar5;
  bool bVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  iVar2 = lpPendingChar;
  while (iVar2 != 0) {
    pbVar3 = (byte *)(iVar2 + 0x10);
    pbVar5 = unaff_EBP;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00402933:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != false);
        goto LAB_00402938;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00402933;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00402938:
    if (iVar4 == 0) break;
    iVar2 = *(int *)(iVar2 + 0x5c);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  return iVar2;
}



void FUN_004029a0(void)

{
  uint uVar1;
  D2CHARINFO *lpCharInfo;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  uVar1 = lpPendingChar;
  while (uVar1 != 0) {
    *(short *)(uVar1 + 0x3a) = *(short *)(uVar1 + 0x3a) + 1;
    lpCharInfo = (D2CHARINFO *)(-(uint)(DAT_00631844 < *(ushort *)(uVar1 + 0x3a)) & uVar1);
    uVar1 = *(uint *)(uVar1 + 0x5c);
    if (lpCharInfo != (D2CHARINFO *)0x0) {
      D2GSDeletePendingChar(lpCharInfo);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void D2GSGetDataRequestTimerRoutine(void)

{
  DWORD dwClientId;
  undefined4 *puVar1;
  D2GAMEINFO *lpGameInfo;
  D2CHARINFO *lpCharInfo;
  BOOL BVar2;
  D2GETDATAREQUEST *lpTimeOutReq;
  undefined4 *local_28;
  uchar CharName [16];
  char AcctName [16];
  undefined4 *temp_79fa6c1dd02;
  D2GETDATAREQUEST *lpGetDataReq;
  
  local_28 = (undefined4 *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  temp_79fa6c1dd02 = (undefined4 *)0;
  puVar1 = local_28;
  lpGetDataReq = DAT_00411398;
  while (lpGetDataReq != (D2GETDATAREQUEST *)0x0) {
    lpGetDataReq->TickCount = lpGetDataReq->TickCount + 1;
    lpTimeOutReq = (D2GETDATAREQUEST *)
                   (-(uint)(1000 < lpGetDataReq->TickCount) & (uint)lpGetDataReq);
    lpGetDataReq = (D2GETDATAREQUEST *)lpGetDataReq->next;
    if (lpTimeOutReq != (D2GETDATAREQUEST *)0x0) {
      dwClientId = lpTimeOutReq->ClientId;
      local_28 = (undefined4 *)malloc(0xc);
      if (local_28 == (undefined4 *)0x0) {
        (*_D2GSSendDatabaseCharacter)(dwClientId,0,0,0,1,0,0,1);
        D2GSEventLog(s_D2GSGetDataRequestTimerRoutine_0040d8f0,s_out_of_memory_0040d910);
        local_28 = puVar1;
      }
      else {
        local_28[2] = dwClientId;
        *(undefined4 **)local_28 = temp_79fa6c1dd02;
      }
      D2GSEventLog(s_D2GSGetDataRequestTimerRoutine_0040d8f0,
                   s_Failed_get_CHARSAVE_data_for___s_0040d8c8,lpTimeOutReq->CharName,lpTimeOutReq);
      strncpy(AcctName,(char *)lpTimeOutReq,0xf);
      AcctName[15] = '\0';
      strncpy((char *)CharName,(char *)lpTimeOutReq->CharName,0xf);
      CharName[15] = '\0';
      lpGameInfo = (D2GAMEINFO *)charlist_getdata(CharName,2);
      lpCharInfo = (D2CHARINFO *)charlist_getdata(CharName,1);
      if ((((lpCharInfo == (D2CHARINFO *)0x0) || (lpGameInfo == (D2GAMEINFO *)0x0)) ||
          (BVar2 = IsBadReadPtr(lpCharInfo,0x60), BVar2 != 0)) ||
         (((BVar2 = IsBadReadPtr(lpGameInfo,0x90), BVar2 != 0 ||
           ((D2GAMEINFO *)lpCharInfo->lpGameInfo != lpGameInfo)) ||
          ((lpCharInfo->GameId != lpGameInfo[1].GameId || (lpCharInfo->ClientId != dwClientId))))))
      {
        D2GSEventLog(s_D2GSGetDataRequestTimerRoutine_0040d8f0,
                     s_char__s___s__NOT_in_game_now_0040d87c,CharName,AcctName);
      }
      else {
        D2GSDeleteCharFromGameInfo(lpGameInfo,lpCharInfo);
        D2GSEventLog(s_D2GSGetDataRequestTimerRoutine_0040d8f0,
                     s_delete_char__s___s__still_in_gam_0040d89c,CharName,AcctName,lpGameInfo,
                     (uint)lpGameInfo[1].GameId);
      }
      D2GSDeleteGetDataRequest(lpTimeOutReq);
      temp_79fa6c1dd02 = local_28;
      puVar1 = local_28;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  while (temp_79fa6c1dd02 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*temp_79fa6c1dd02;
    (*_D2GSSendDatabaseCharacter)(temp_79fa6c1dd02[2],0,0,0,1,0,0,1);
    free(temp_79fa6c1dd02);
    temp_79fa6c1dd02 = puVar1;
  }
  return;
}



void __cdecl FUN_00402bc0(uint param_1,char *buffer,uint buffersize,BOOL bUseDateTime)

{
  uint bufferSize;
  tm *ptVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  bufferSize = buffersize;
  uVar2 = buffersize >> 2;
  puVar3 = (undefined4 *)buffer;
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  buffersize = buffersize & 3;
  while (buffersize != 0) {
    buffersize = buffersize - 1;
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  buffersize = param_1;
  ptVar1 = localtime((time_t *)&buffersize);
  if (bUseDateTime != 0) {
    if (bUseDateTime != 1) {
      *buffer = '\0';
      return;
    }
    _snprintf(buffer,bufferSize - 1,s__04d__02d__02d__02d__02d__02d_0040d930,ptVar1->tm_year + 0x76c
              ,ptVar1->tm_mon + 1,ptVar1->tm_mday,ptVar1->tm_hour,ptVar1->tm_min,ptVar1->tm_sec);
    return;
  }
  _snprintf(buffer,bufferSize - 1,s__02d__02d__02d_0040d920,ptVar1->tm_hour,ptVar1->tm_min,
            ptVar1->tm_sec);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00402c60(SOCKET param_1)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  undefined *puVar7;
  int iVar8;
  code *pcVar9;
  char *pcVar10;
  int local_124;
  char local_120 [32];
  char local_100 [256];
  
  pcVar9 = sprintf_exref;
  iVar8 = 0;
  local_124 = 0;
  sprintf(local_100,s___No___GameName_________GamePass_0040da6c);
  uVar5 = 0xffffffff;
  pcVar4 = local_100;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  send(param_1,local_100,~uVar5 - 1,0);
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  iVar3 = lpGameInfoHead;
  do {
    if (iVar3 == 0) break;
    FUN_00402bc0(*(undefined4 *)(iVar3 + 0x7c),local_120,0x20,0);
    pcVar9 = sprintf_exref;
    puVar7 = &DAT_0040da68;
    if (*(int *)(iVar3 + 0x80) == 0) {
      puVar7 = &DAT_0040da64;
    }
    pcVar4 = s_ladder_0040da5c;
    if (*(char *)(iVar3 + 0x70) == '\0') {
      pcVar4 = s_non_ladder_0040da50;
    }
    pcVar10 = s_hc_0040da4c;
    if (*(char *)(iVar3 + 0x73) == '\0') {
      pcVar10 = s_sc_0040da48;
    }
    pcVar6 = s_exp_0040da44;
    if (*(char *)(iVar3 + 0x71) == '\0') {
      pcVar6 = s_classic_0040da3c;
    }
    iVar8 = iVar8 + 1;
    sprintf(local_100,s____03d___15s___15s___4u___7s___4_0040d9f4,iVar8,iVar3,iVar3 + 0x10,
            (uint)*(ushort *)(iVar3 + 0x76),pcVar6,pcVar10,
            s_normal_0040d5b8 + (int)((longlong)(ulonglong)*(byte *)(iVar3 + 0x72) % 3) * 0x20,
            pcVar4,(uint)*(ushort *)(iVar3 + 0x78),local_120,puVar7);
    uVar5 = 0xffffffff;
    pcVar4 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    puVar1 = (ushort *)(iVar3 + 0x78);
    iVar3 = *(int *)(iVar3 + 0x8c);
    local_124 = local_124 + (uint)*puVar1;
  } while (iVar8 < 0x1f5);
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  (*pcVar9)(local_100,s__________________________________0040d984);
  uVar5 = 0xffffffff;
  pcVar4 = local_100;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  send(param_1,local_100,~uVar5 - 1,0);
  (*pcVar9)(local_100,s__Total___d_games_running___d_use_0040d950,iVar8,local_124);
  uVar5 = 0xffffffff;
  pcVar4 = local_100;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  send(param_1,local_100,~uVar5 - 1,0);
  return;
}



void __cdecl FUN_00402e30(SOCKET param_1,ushort param_2)

{
  char cVar1;
  void *pvVar2;
  D2GAMEINFO *pDVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char local_120 [32];
  char local_100 [256];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  pDVar3 = D2GSFindGameInfoByGameId(param_2);
  if (pDVar3 != (D2GAMEINFO *)0x0) {
    FUN_00402bc0(*(undefined4 *)&pDVar3[1].field_0x8,local_120,0x20,0);
    pcVar6 = s_hc_0040da4c;
    if (pDVar3->hardcore == '\0') {
      pcVar6 = s_sc_0040da48;
    }
    pcVar4 = s_exp_0040da44;
    if (pDVar3->expansion == '\0') {
      pcVar4 = s_classic_0040da3c;
    }
    sprintf(local_100,s___GameName_____15s___GamePass_____0040dcb4,pDVar3,&pDVar3->lpCharInfo,
            &pDVar3->field_0x20,(uint)pDVar3[1].GameId,pcVar4,pcVar6);
    uVar5 = 0xffffffff;
    pcVar6 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    pcVar6 = s_Yes_0040dcb0;
    if (*(int *)&pDVar3[1].field_0xc == 0) {
      pcVar6 = s_No_0040dcac;
    }
    pcVar4 = s_ladder_0040da5c;
    if (pDVar3->ladder == '\0') {
      pcVar4 = s_non_ladder_0040da50;
    }
    sprintf(local_100,s__Difficult_____15s___IsLadder_____0040dc2c,
            s_normal_0040d5b8 + (int)((longlong)(ulonglong)pDVar3->field_0x72 % 3) * 0x20,pcVar4,
            (uint)pDVar3[1].CharCount,local_120,pcVar6,&DAT_0041138c);
    uVar5 = 0xffffffff;
    pcVar6 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    sprintf(local_100,s__CreatorAcct____15s___CreatorCha_0040dbe8,&pDVar3->field_0x40,
            &pDVar3->field_0x50,&pDVar3->field_0x60);
    uVar5 = 0xffffffff;
    pcVar6 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    sprintf(local_100,s___No___AcctName_________CharName_0040db90);
    uVar5 = 0xffffffff;
    pcVar6 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    pvVar2 = pDVar3[1].lpCharInfo;
    iVar7 = 0;
    do {
      if (pvVar2 == (void *)0x0) break;
      FUN_00402bc0(*(undefined4 *)((int)pvVar2 + 0x44),local_120,0x20,0);
      iVar7 = iVar7 + 1;
      sprintf(local_100,s____03d___15s___15s___15s___5s____0040db5c,iVar7,pvVar2,(int)pvVar2 + 0x10,
              (int)pvVar2 + 0x20,
              &PTR_DAT_0040d618 +
              (int)((longlong)(ulonglong)*(ushort *)((int)pvVar2 + 0x38) % 7) * 4,
              *(undefined4 *)((int)pvVar2 + 0x34),local_120);
      uVar5 = 0xffffffff;
      pcVar6 = local_100;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      send(param_1,local_100,~uVar5 - 1,0);
      pvVar2 = *(void **)((int)pvVar2 + 0x5c);
    } while (iVar7 < 9);
    LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
    sprintf(local_100,s__________________________________0040db04);
    uVar5 = 0xffffffff;
    pcVar6 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    sprintf(local_100,s__Total___d_charaters_in_this_gam_0040dadc,iVar7);
    uVar5 = 0xffffffff;
    pcVar6 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  sprintf(local_100,s_Game__u_not_found__0040dd34,(uint)param_2);
  uVar5 = 0xffffffff;
  pcVar6 = local_100;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_100,~uVar5 - 1,0);
  return;
}



void __cdecl FUN_00403110(SOCKET param_1,short param_2)

{
  char cVar1;
  D2GAMEINFO *pDVar2;
  uint uVar3;
  char *pcVar4;
  char local_80 [128];
  
  pDVar2 = D2GSFindGameInfoByGameId(param_2);
  if (pDVar2 == (D2GAMEINFO *)0x0) {
    send(param_1,s_Game_not_found_0040dd64,0x12,0);
    return;
  }
  *(undefined4 *)&pDVar2[1].field_0xc = 1;
  sprintf(local_80,s_Game___s__disable_0040dd4c,pDVar2);
  uVar3 = 0xffffffff;
  pcVar4 = local_80;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_80,~uVar3 - 1,0);
  return;
}



void __cdecl FUN_00403190(SOCKET param_1,short param_2)

{
  char cVar1;
  D2GAMEINFO *pDVar2;
  uint uVar3;
  char *pcVar4;
  char local_80 [128];
  
  pDVar2 = D2GSFindGameInfoByGameId(param_2);
  if (pDVar2 == (D2GAMEINFO *)0x0) {
    send(param_1,s_Game_not_found_0040dd64,0x12,0);
    return;
  }
  *(undefined4 *)&pDVar2[1].field_0xc = 0;
  sprintf(local_80,s_Game___s__enable_0040dd78,pDVar2);
  uVar3 = 0xffffffff;
  pcVar4 = local_80;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_80,~uVar3 - 1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl chat_message_announce_all(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  iVar5 = 0;
  iVar3 = lpGameInfoHead;
  do {
    if (iVar3 == 0) break;
    iVar5 = iVar5 + 1;
    iVar6 = 0;
    iVar1 = *(int *)(iVar3 + 0x84);
    puVar4 = _Memory;
    do {
      _Memory = puVar4;
      if (iVar1 == 0) break;
      iVar6 = iVar6 + 1;
      _Memory = (undefined4 *)malloc(0xc);
      if (_Memory == (undefined4 *)0x0) {
        (*_D2GSSendClientChatMessage)
                  (*(undefined4 *)(iVar1 + 0x4c),param_1,1,s__administrator__0040ddac,param_2);
        D2GSEventLog(s_chat_message_announce_all_0040dd90,s_out_of_memory_0040d910);
        _Memory = puVar4;
      }
      else {
        uVar2 = *(undefined4 *)(iVar1 + 0x4c);
        *(undefined4 **)_Memory = puVar4;
        _Memory[2] = uVar2;
      }
      iVar1 = *(int *)(iVar1 + 0x5c);
      puVar4 = _Memory;
    } while (iVar6 < 9);
    iVar3 = *(int *)(iVar3 + 0x8c);
  } while (iVar5 < 0x1f5);
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  while (_Memory != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*_Memory;
    (*_D2GSSendClientChatMessage)(_Memory[2],param_1,1,s__administrator__0040ddac,param_2);
    free(_Memory);
    _Memory = puVar4;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl chat_message_announce_game2(undefined4 param_1,short param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  D2GAMEINFO *pDVar4;
  int iVar5;
  undefined4 *_Memory;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  pDVar4 = D2GSFindGameInfoByGameId(param_2);
  if (pDVar4 == (D2GAMEINFO *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
    return 0xffffffff;
  }
  pvVar1 = pDVar4[1].lpCharInfo;
  iVar5 = 0;
  puVar3 = (undefined4 *)0x0;
  do {
    _Memory = puVar3;
    if (pvVar1 == (void *)0x0) break;
    iVar5 = iVar5 + 1;
    _Memory = (undefined4 *)malloc(0xc);
    if (_Memory == (undefined4 *)0x0) {
      (*_D2GSSendClientChatMessage)
                (*(undefined4 *)((int)pvVar1 + 0x4c),param_1,1,s__administrator__0040ddac,param_3);
      D2GSEventLog(s_chat_message_announce_game2_0040ddbc,s_out_of_memory_0040d910);
      _Memory = puVar3;
    }
    else {
      uVar2 = *(undefined4 *)((int)pvVar1 + 0x4c);
      *(undefined4 **)_Memory = puVar3;
      _Memory[2] = uVar2;
    }
    pvVar1 = *(void **)((int)pvVar1 + 0x5c);
    puVar3 = _Memory;
  } while (iVar5 < 9);
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  while (_Memory != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*_Memory;
    (*_D2GSSendClientChatMessage)(_Memory[2],param_1,1,s__administrator__0040ddac,param_3);
    free(_Memory);
    _Memory = puVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_004033f0(undefined4 param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  pvVar2 = charlist_getdata((uchar *)param_2,1);
  if (pvVar2 == (void *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)((int)pvVar2 + 0x4c);
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  (*_D2GSSendClientChatMessage)(uVar1,param_1,1,s__administrator__0040ddac,param_3);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_00403450(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*_D2GSSendClientChatMessage)(param_2,param_1,1,s__administrator__0040ddac,param_3);
  return 0;
}



int __cdecl D2GSMOTDAdd(DWORD dwClientId)

{
  int *piVar1;
  
  piVar1 = (int *)malloc(0xc);
  if (piVar1 == (int *)0x0) {
    return -1;
  }
  piVar1[2] = dwClientId;
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  FUN_004034c0(piVar1,(int)&PTR_LOOP_0040d688);
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  return 0;
}



void __cdecl FUN_004034c0(int *param_1,int param_2)

{
  FUN_004034e0(param_1,*(int ***)(param_2 + 4),param_2);
  return;
}



void __cdecl FUN_004034e0(int *param_1,int **param_2,int param_3)

{
  *(int **)(param_3 + 4) = param_1;
  *param_1 = param_3;
  *(int ***)(param_1 + 1) = param_2;
  *param_2 = param_1;
  return;
}



undefined4 FUN_00403500(void)

{
  char cVar1;
  int **_Memory;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  uint uVar5;
  uint uVar6;
  char **ppcVar7;
  char **ppcVar8;
  char *apcStack512 [128];
  
  if (DAT_004113a4 + 1 < 0x14) {
    DAT_004113a4 = DAT_004113a4 + 1;
    return 0;
  }
  uVar5 = 0xffffffff;
  ppcVar7 = &buf_006318c2;
  do {
    ppcVar8 = ppcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    ppcVar8 = (char **)((int)ppcVar7 + 1);
    cVar1 = *(char *)ppcVar7;
    ppcVar7 = ppcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  DAT_004113a4 = 0;
  uVar6 = uVar5 >> 2;
  ppcVar7 = (char **)((int)ppcVar8 - uVar5);
  ppcVar8 = apcStack512;
  while (uVar6 != 0) {
    uVar6 = uVar6 - 1;
    *ppcVar8 = *ppcVar7;
    ppcVar7 = ppcVar7 + 1;
    ppcVar8 = ppcVar8 + 1;
  }
  uVar5 = uVar5 & 3;
  while (uVar5 != 0) {
    uVar5 = uVar5 - 1;
    *(undefined *)ppcVar8 = *(undefined *)ppcVar7;
    ppcVar7 = (char **)((int)ppcVar7 + 1);
    ppcVar8 = (char **)((int)ppcVar8 + 1);
  }
  string_color((char *)apcStack512);
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  _Memory = (int **)0x0;
  ppiVar4 = *(int ***)PTR_LOOP_0040d688;
  ppiVar3 = (int **)PTR_LOOP_0040d688;
  while (ppiVar2 = ppiVar4, ppiVar3 != (int **)&PTR_LOOP_0040d688) {
    FUN_00403600((int *)ppiVar3);
    *(int ***)ppiVar3 = _Memory;
    _Memory = ppiVar3;
    ppiVar4 = (int **)*ppiVar2;
    ppiVar3 = ppiVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  while (_Memory != (int **)0x0) {
    ppiVar3 = (int **)*_Memory;
    FUN_00403450(4,_Memory[2],s__c8_D2GS____No_commercial_purpos_0040ddd8);
    FUN_00403450(4,_Memory[2],apcStack512);
    FUN_00403450(4,_Memory[2],world_event_message);
    free(_Memory);
    _Memory = ppiVar3;
  }
  return 0;
}



undefined4 FUN_0040351f(void)

{
  char cVar1;
  int **_Memory;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  uint uVar5;
  uint uVar6;
  char **ppcVar7;
  char **ppcVar8;
  
  uVar5 = 0xffffffff;
  ppcVar7 = &buf_006318c2;
  do {
    ppcVar8 = ppcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    ppcVar8 = (char **)((int)ppcVar7 + 1);
    cVar1 = *(char *)ppcVar7;
    ppcVar7 = ppcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  DAT_004113a4 = 0;
  uVar6 = uVar5 >> 2;
  ppcVar7 = (char **)((int)ppcVar8 - uVar5);
  ppcVar8 = (char **)register0x00000010;
  while (uVar6 != 0) {
    uVar6 = uVar6 - 1;
    *ppcVar8 = *ppcVar7;
    ppcVar7 = ppcVar7 + 1;
    ppcVar8 = ppcVar8 + 1;
  }
  uVar5 = uVar5 & 3;
  while (uVar5 != 0) {
    uVar5 = uVar5 - 1;
    *(undefined *)ppcVar8 = *(undefined *)ppcVar7;
    ppcVar7 = (char **)((int)ppcVar7 + 1);
    ppcVar8 = (char **)((int)ppcVar8 + 1);
  }
  string_color((char *)register0x00000010);
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  _Memory = (int **)0x0;
  ppiVar4 = *(int ***)PTR_LOOP_0040d688;
  ppiVar3 = (int **)PTR_LOOP_0040d688;
  while (ppiVar2 = ppiVar4, ppiVar3 != (int **)&PTR_LOOP_0040d688) {
    FUN_00403600((int *)ppiVar3);
    *(int ***)ppiVar3 = _Memory;
    _Memory = ppiVar3;
    ppiVar4 = (int **)*ppiVar2;
    ppiVar3 = ppiVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  while (_Memory != (int **)0x0) {
    ppiVar3 = (int **)*_Memory;
    FUN_00403450(4,_Memory[2],s__c8_D2GS____No_commercial_purpos_0040ddd8);
    FUN_00403450(4,_Memory[2],register0x00000010);
    FUN_00403450(4,_Memory[2],world_event_message);
    free(_Memory);
    _Memory = ppiVar3;
  }
  return 0;
}



void __cdecl FUN_00403600(int *param_1)

{
  FUN_00403620((int *)param_1[1],*param_1);
  return;
}



void __cdecl FUN_00403620(int *param_1,int param_2)

{
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00403630(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *_Memory;
  undefined4 *puVar6;
  bool bVar7;
  time_t tVar8;
  
  if (MaxGameLife == 0) {
    return 0;
  }
  if (DAT_004113a8 + 1 < 600) {
    DAT_004113a8 = DAT_004113a8 + 1;
    return 0;
  }
  _Memory = (undefined4 *)0x0;
  DAT_004113a8 = 0;
  tVar8 = time((time_t *)0x0);
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  iVar3 = lpGameInfoHead;
  uVar5 = MaxGameLife;
  while (iVar3 != 0) {
    uVar4 = (int)tVar8 - *(int *)(iVar3 + 0x7c);
    if ((*(char *)(iVar3 + 0x73) == '\0') && (uVar5 <= uVar4)) {
      iVar1 = *(int *)(iVar3 + 0x84);
      bVar7 = DAT_0040d694 + uVar5 <= uVar4;
      while (iVar1 != 0) {
        puVar6 = (undefined4 *)malloc(0xc);
        if (puVar6 == (undefined4 *)0x0) {
          if (bVar7) {
            (*_D2GSRemoveClientFromGame)(*(undefined4 *)(iVar1 + 0x4c));
          }
          else {
            FUN_00403450(4,*(undefined4 *)(iVar1 + 0x4c),
                         PTR_s__SERVER___This_game_will_end_aft_0040d690);
          }
          D2GSEventLog(s_D2GSCheckGamelife_0040de0c,s_out_of_memory_0040d910);
          puVar6 = _Memory;
        }
        else {
          uVar2 = *(undefined4 *)(iVar1 + 0x4c);
          *(undefined4 **)puVar6 = _Memory;
          puVar6[2] = uVar2;
          puVar6[1] = (uint)bVar7;
        }
        iVar1 = *(int *)(iVar1 + 0x5c);
        uVar5 = MaxGameLife;
        _Memory = puVar6;
      }
    }
    iVar3 = *(int *)(iVar3 + 0x8c);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  while (_Memory != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)*_Memory;
    if (_Memory[1] == 0) {
      FUN_00403450(4,_Memory[2],PTR_s__SERVER___This_game_will_end_aft_0040d690);
    }
    else {
      (*_D2GSRemoveClientFromGame)(_Memory[2]);
    }
    free(_Memory);
    _Memory = puVar6;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 D2GSCheckGameLife(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_res0;
  uint uVar4;
  uint uVar5;
  undefined4 *_Memory;
  undefined4 *puVar6;
  bool bVar7;
  time_t tVar8;
  
  _Memory = (undefined4 *)0x0;
  DAT_004113a8 = 0;
  tVar8 = time((time_t *)0x0);
  local_res0 = (int)tVar8;
  EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
  iVar3 = lpGameInfoHead;
  uVar5 = MaxGameLife;
  while (iVar3 != 0) {
    uVar4 = local_res0 - *(int *)(iVar3 + 0x7c);
    if ((*(char *)(iVar3 + 0x73) == '\0') && (uVar5 <= uVar4)) {
      iVar1 = *(int *)(iVar3 + 0x84);
      bVar7 = DAT_0040d694 + uVar5 <= uVar4;
      while (iVar1 != 0) {
        puVar6 = (undefined4 *)malloc(0xc);
        if (puVar6 == (undefined4 *)0x0) {
          if (bVar7) {
            (*_D2GSRemoveClientFromGame)(*(undefined4 *)(iVar1 + 0x4c));
          }
          else {
            FUN_00403450(4,*(undefined4 *)(iVar1 + 0x4c),
                         PTR_s__SERVER___This_game_will_end_aft_0040d690);
          }
          D2GSEventLog(s_D2GSCheckGamelife_0040de0c,s_out_of_memory_0040d910);
          puVar6 = _Memory;
        }
        else {
          uVar2 = *(undefined4 *)(iVar1 + 0x4c);
          *(undefined4 **)puVar6 = _Memory;
          puVar6[2] = uVar2;
          puVar6[1] = (uint)bVar7;
        }
        iVar1 = *(int *)(iVar1 + 0x5c);
        uVar5 = MaxGameLife;
        _Memory = puVar6;
      }
    }
    iVar3 = *(int *)(iVar3 + 0x8c);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  while (_Memory != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)*_Memory;
    if (_Memory[1] == 0) {
      FUN_00403450(4,_Memory[2],PTR_s__SERVER___This_game_will_end_aft_0040d690);
    }
    else {
      (*_D2GSRemoveClientFromGame)(_Memory[2]);
    }
    free(_Memory);
    _Memory = puVar6;
  }
  return 0;
}



undefined4 FUN_00403780(void)

{
  DAT_004113ac = DAT_004113ac + 1;
  if (0x13 < DAT_004113ac) {
    DAT_004113ac = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
    FUN_0040baf0();
    LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  }
  return 0;
}



// lpStartAddress parameter of CreateThread
// 

undefined4 SaveAllGamesThread(void)

{
  D2GSEventLog(s_SaveAllGamesThread_0040de54,s_Calling_D2GSEndAllGames___0040de68);
  (*D2GSEndAllGames)();
  D2GSEventLog(s_SaveAllGamesThread_0040de54,s_Waiting_for_all_games_to_be_save_0040de30);
  while (lpGameInfoHead != 0) {
    Sleep(1);
  }
  D2GSEventLog(s_SaveAllGamesThread_0040de54,s_All_games_saved_0040de20);
  return 0;
}



int __cdecl SaveAllGames(DWORD param_1)

{
  HANDLE hHandle;
  DWORD DVar1;
  DWORD local_4;
  
  if (D2GSEndAllGames == 0) {
    return 0;
  }
  hHandle = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,SaveAllGamesThread,(LPVOID)0x0,0,&local_4);
  DVar1 = WaitForSingleObject(hHandle,param_1);
  if (DVar1 == 0x102) {
    TerminateThread(hHandle,1);
    CloseHandle(hHandle);
    D2GSEventLog(s_SaveAllGames_0040de84,s_SaveAllGamesThread_timetout_0040de94);
    return 0;
  }
  CloseHandle(hHandle);
  return 1;
}



void FUN_004038a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 6;
  puVar2 = DAT_004113a0;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void __cdecl FUN_004038c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_1 % 3) * 8;
  *(int *)(iVar1 + DAT_004113a0) = *(int *)(iVar1 + DAT_004113a0) + param_2;
  *(int *)(iVar1 + 4 + DAT_004113a0) = *(int *)(iVar1 + 4 + DAT_004113a0) + param_3;
  return;
}



uint FUN_00403900(void)

{
  return (uint)(lpGameInfoHead != 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void D2GEReloadConfig(void)

{
  int *piVar1;
  char path [259];
  undefined local_1;
  
  _snprintf(path,0x103,s__s__s_0040def4,&_Str_006316a0,&DAT_00631ac2);
  local_1 = 0;
  (*(code *)D2GSLoadConfig)(path);
  piVar1 = (int *)(*_D2GSInitConfig)();
  if (*piVar1 != 0) {
    _snprintf(world_event_message,0xff,(char *)&_Format_0040deb0,piVar1 + 8);
    DAT_00631ac1 = 0;
  }
  return;
}



int D2GEStartup(void)

{
  int iVar1;
  HANDLE hEvent;
  DWORD dwWait;
  DWORD dwThreadId;
  
  iVar1 = D2GEThreadInit();
  if (iVar1 == 0) {
    D2GSEventLog(s_D2GEStartup_0040df40,s_Failed_to_Initialize_Server_0040df4c);
    return 0;
  }
  hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  if (hEvent != (HANDLE)0x0) {
    ghServerThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,D2GEThread,hEvent,0,&dwThreadId);
    if (ghServerThread == (HANDLE)0x0) {
      dwWait = GetLastError();
      D2GSEventLog(s_D2GEStartup_0040df40,s_Can_t_CreateThread_D2GEThread__C_0040df14,dwWait);
      CloseHandle(hEvent);
      return 0;
    }
    dwWait = WaitForSingleObject(hEvent,60000);
    CloseHandle(hEvent);
    if (dwWait != 0) {
      CloseHandle(ghServerThread);
      return 0;
    }
    if (bGERunning == 0) {
      CloseHandle(ghServerThread);
      return 0;
    }
    iVar1 = CleanupRoutineInsert(D2GECleanup,s_Diablo_II_Game_Engine_0040defc);
    if (iVar1 != 0) {
      return 1;
    }
    D2GECleanup();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int D2GECleanup(void)

{
  (*D2GSEndAllGames)();
  Sleep(1000);
  (*(code *)D2GSReserved4)();
  D2GSINFO_00631c20.bStop = 1;
  if (ghServerThread != (HANDLE)0x0) {
    WaitForSingleObject(ghServerThread,5000);
    CloseHandle(ghServerThread);
    ghServerThread = (HANDLE)0x0;
    D2GSStart = 0;
    _D2GSSendDatabaseCharacter = 0;
    _D2GSRemoveClientFromGame = 0;
    D2GSNewEmptyGame = (undefined *)0x0;
    D2GSEndAllGames = (code *)0x0;
    _D2GSSendClientChatMessage = 0;
    _D2GSSetTickCount = 0;
    D2GSSetACData = (undefined *)0x0;
    D2GSReserved3 = (undefined *)0x0;
    D2GSLoadConfig = (undefined *)0x0;
    D2GSReserved4 = (undefined *)0x0;
    _D2GSInitConfig = 0;
    _DAT_004113e4 = 0;
    DAT_004113e8 = 0;
  }
  return 1;
}



int D2GEThreadInit(void)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  D2GSINFO *pDVar5;
  
  BVar1 = D2GSGetInterface();
  if (BVar1 == 0) {
    D2GSEventLog(s_D2GSThread_0040dfa0,s_Failed_to_Get_Server_Interface_0040dfac);
    return 0;
  }
  iVar2 = 0xd;
  puVar3 = (undefined4 *)&DAT_0040df68;
  puVar4 = &DAT_00631cc0;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
  iVar2 = 0x28;
  pDVar5 = &D2GSINFO_00631c20;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    pDVar5->field_0x0 = (LPCSTR)0x0;
    pDVar5 = (D2GSINFO *)&pDVar5->dwLibVersion;
  }
  D2GSINFO_00631c20.field_0x0 = (LPCSTR)&DAT_00631cc0;
  D2GSINFO_00631c20.dwLibVersion = 0x10a0304;
  D2GSINFO_00631c20.field_0xc = DAT_0063180c;
  D2GSINFO_00631c20.field_0x10 = DAT_00631814;
  D2GSINFO_00631c20.field_0x18 = D2GSEventLog;
  D2GSINFO_00631c20.fpErrorHandle = D2GSErrorHandle;
  D2GSINFO_00631c20.fpCallback = EventCallbackTableInit();
  D2GSINFO_00631c20.field_0x24 = DAT_00631810;
  D2GSINFO_00631c20.field_0x28 = DAT_0063183c;
  D2GSINFO_00631c20.field_0x2c = DAT_00631840;
  D2GSINFO_00631c20.field_0x30 = DAT_00631830;
  D2GSINFO_00631c20.field_0x34 = DAT_0063185c;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL D2GSGetInterface(void)

{
  D2GSINTERFACE *lpD2GSInterface;
  
  lpD2GSInterface = QueryInterface();
  if (lpD2GSInterface == (D2GSINTERFACE *)0x0) {
    return 0;
  }
  D2GSStart = lpD2GSInterface->D2GSStart;
  _D2GSSendDatabaseCharacter = lpD2GSInterface->D2GSSendDatabaseCharacter;
  _D2GSRemoveClientFromGame = lpD2GSInterface->D2GSRemoveClientFromGame;
  D2GSNewEmptyGame = (undefined *)lpD2GSInterface->D2GSNewEmptyGame;
  D2GSEndAllGames = lpD2GSInterface->D2GSEndAllGames;
  _D2GSSendClientChatMessage = lpD2GSInterface->D2GSSendClientChatMessage;
  _D2GSSetTickCount = lpD2GSInterface->D2GSSetTickCount;
  D2GSSetACData = (undefined *)lpD2GSInterface->D2GSSetACData;
  D2GSReserved3 = (undefined *)lpD2GSInterface->Reserved3;
  D2GSLoadConfig = (undefined *)lpD2GSInterface->D2GSLoadConfig;
  D2GSReserved4 = (undefined *)lpD2GSInterface->Reserved4;
  _D2GSInitConfig = lpD2GSInterface->D2GSInitConfig;
  D2GSReserved2 = lpD2GSInterface->Reserved2;
  return 1;
}



undefined4 D2GSErrorHandle(void)

{
  EnableGSLog = 1;
  D2GSEventLog(s_D2GSErrorHandle_0040dfcc,s_Error_occur__exiting____0040dfdc);
  EnableGSLog = 0;
  FUN_00406c40();
  FUN_00406f50(0);
  return 0;
}



// lpStartAddress parameter of CreateThread
// 

DWORD D2GEThread(HANDLE param_1)

{
  DWORD DVar1;
  HANDLE local_4;
  undefined4 unaff_ESI;
  char *fmt;
  DWORD local_c;
  HANDLE local_8;
  HANDLE hEvent;
  
  hEvent = param_1;
  if (param_1 == (HANDLE)0x0) {
    return 0;
  }
  bGERunning = 0;
  D2GSINFO_00631c20.bStop = 0;
  D2GSINFO_00631c20.hEventInited = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (D2GSINFO_00631c20.hEventInited == (HANDLE)0x0) {
    DVar1 = GetLastError();
    D2GSEventLog(s_D2GEThread_0040e108,s_Error_in_CreateEvent__Code___lu_0040e114,DVar1);
    SetEvent(hEvent);
    return 0;
  }
  local_8 = D2GSINFO_00631c20.hEventInited;
  local_4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,D2GSStart,&D2GSINFO_00631c20,0,
                         (LPDWORD)&param_1);
  if (local_4 == (HANDLE)0x0) {
    DVar1 = GetLastError();
    D2GSEventLog(s_D2GEThread_0040e108,s_Error_Creating_Server_Thread__Co_0040e0e0,DVar1);
    CloseHandle(local_8);
    SetEvent(hEvent);
    return 0;
  }
  D2GSEventLog(s_D2GEThread_0040e108,s_Server_Thread__lu_Created_0040e0c4,param_1);
  DVar1 = WaitForMultipleObjects(2,(HANDLE *)&stack0xfffffff8,0,60000);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    fmt = s_Wait_Server_Thread_Failed__Code__0040e09c;
  }
  else {
    if (DVar1 == 0x102) {
      D2GSEventLog(s_D2GEThread_0040e108,s_Game_Server_Thread_Timedout_0040e080);
                    // WARNING: Return address prevents inlining here
      DVar1 = D2GEThread(unaff_ESI,local_c,local_8,local_4);
      return DVar1;
    }
    if (DVar1 == 1) {
      DVar1 = local_c;
      GetExitCodeThread(local_4,(LPDWORD)&stack0xfffffff4);
      fmt = s_Game_Server_Thread_Exit_with__d_0040e060;
    }
    else {
      if (DVar1 == 0) {
        D2GSEventLog(s_D2GEThread_0040e108,s_Game_Server_Thread_Start_Success_0040e038);
        hThread = local_4;
        bGERunning = 1;
        hEvent = hThread;
        SetThreadAffinityMask(hThread,MultiCPUMask);
                    // WARNING: Return address prevents inlining here
        DVar1 = D2GEThread(unaff_ESI,local_c,local_8,hEvent);
        return DVar1;
      }
      fmt = s_Wait_Server_Thread_Returned__d_0040e018;
    }
  }
  D2GSEventLog(s_D2GEThread_0040e108,fmt,DVar1);
  SetEvent(hEvent);
  WaitForSingleObject(local_4,0xffffffff);
  bGERunning = 0;
  CloseHandle(local_8);
  CloseHandle(local_4);
  hThread = (HANDLE)0x0;
  D2GSEventLog(s_D2GEThread_0040e108,s_Game_Engine_thread_terminated_0040dff8);
  return 1;
}



// WARNING: This is an inlined function

undefined4 D2GEThread(undefined4 param_1,undefined4 param_2,HANDLE param_3,HANDLE param_4)

{
  HANDLE unaff_ESI;
  HANDLE unaff_EDI;
  
  SetEvent(unaff_ESI);
  WaitForSingleObject(param_4,0xffffffff);
  bGERunning = unaff_EDI;
  CloseHandle(param_3);
  CloseHandle(param_4);
  hThread = unaff_EDI;
  D2GSEventLog(s_D2GEThread_0040e108,s_Game_Engine_thread_terminated_0040dff8);
  return 1;
}



int D2GSEventLogInitialize(void)

{
  eventstrm = fopen(s_d2gs_log_0040e14c,(char *)&_Mode_0040e158);
  gestrm = fopen(s_d2ge_log_0040e140,(char *)&_Mode_0040e158);
  hexstrm = fopen(s_debug_log_0040e134,(char *)&_Mode_0040e158);
  if (((hexstrm != (FILE *)0x0) && (eventstrm != (FILE *)0x0)) && (gestrm != (FILE *)0x0)) {
    return 1;
  }
  return 0;
}



void FUN_00403f00(void)

{
  if (eventstrm != (FILE *)0x0) {
    fclose(eventstrm);
  }
  if (gestrm != (FILE *)0x0) {
    fclose(gestrm);
  }
  eventstrm = (FILE *)0x0;
  gestrm = (FILE *)0x0;
  return;
}



void __cdecl D2GSEventLog(char *module,char *fmt,...)

{
  char *_Format;
  undefined local_44 [2];
  uint local_42;
  ushort local_3e;
  ushort uStack60;
  ushort local_3a;
  ushort uStack56;
  ushort local_36;
  char local_30 [48];
  
  if (eventstrm != (FILE *)0x0) {
    GetLocalTime((LPSYSTEMTIME)local_44);
    sprintf(local_30,s__02d__02d__02d__02d__02d__03d_0040e1a4,local_42 & 0xffff,(uint)local_3e,
            (uint)uStack60,(uint)local_3a,(uint)uStack56,(uint)local_36);
    if (module == (char *)0x0) {
      if (EnableGSLog != 0) {
        _Format = s__s_eventlog__got_NULL_module_0040e184;
LAB_00403fcd:
        fprintf(eventstrm,_Format,local_30);
        fflush(eventstrm);
        return;
      }
    }
    else {
      if (fmt == (char *)0x0) {
        if (EnableGSLog != 0) {
          _Format = s__s_eventlog__got_NULL_fmt_0040e168;
          goto LAB_00403fcd;
        }
      }
      else {
        if (EnableGSLog != 0) {
          fprintf(eventstrm,s__s__s__0040e160,local_30,module);
          vfprintf(eventstrm,fmt,&stack0x0000000c);
          fprintf(eventstrm,(char *)&_Format_0040e15c);
          fflush(eventstrm);
        }
      }
    }
  }
  return;
}



void __cdecl D2GSEventLog(char *module,char *param_2,...)

{
  char *_Format;
  SYSTEMTIME st;
  char time_string [48];
  
  if ((eventstrm != 0) && (gestrm != (FILE *)0x0)) {
    GetLocalTime((LPSYSTEMTIME)&st);
    sprintf(time_string,s__02d__02d__02d__02d__02d__03d_0040e1a4,st._2_4_ & 0xffff,(uint)st.wDay,
            (uint)st.wHour,(uint)st.wMinute,(uint)st.wSecond,(uint)st.wMilliseconds);
    if (module == (char *)0x0) {
      _Format = s__s_eventlog__got_NULL_module_0040e184;
    }
    else {
      if (param_2 != (char *)0x0) {
        fprintf(gestrm,s__s_____s__0040e1c4,time_string,module);
        vfprintf(gestrm,param_2,&stack0x0000000c);
        fprintf(gestrm,(char *)&_Format_0040e15c);
        fflush(gestrm);
        return;
      }
      _Format = s__s_eventlog__got_NULL_fmt_0040e168;
    }
    fprintf(gestrm,_Format,time_string);
    fflush(gestrm);
    return;
  }
  return;
}



void __cdecl LogAP(LPCSTR lpModule,LPCSTR lpFormat,va_list ap)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char **ppcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char **ppcVar11;
  SYSTEMTIME st;
  char msg [1024];
  char tmp [1024];
  
  if (((DAT_0063181c != 0) && (lpModule != (LPCSTR)0x0)) && (lpFormat != (LPCSTR)0x0)) {
    GetLocalTime((LPSYSTEMTIME)&st);
    wsprintfA(msg,s__02d__02d__02d__02d__02d__03d_0040e1a4,st._2_4_ & 0xffff,(uint)st.wDay,
              (uint)st.wHour,(uint)st.wMinute,(uint)st.wSecond,(uint)st.wMilliseconds);
    vsprintf(tmp,lpFormat,ap);
    uVar2 = 0xffffffff;
    pcVar9 = tmp;
    do {
      pcVar10 = pcVar9;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar9 = msg;
    do {
      pcVar7 = pcVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = uVar2 >> 2;
    puVar5 = (undefined4 *)(pcVar10 + -uVar2);
    puVar8 = (undefined4 *)(pcVar7 + -1);
    while (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar2 = uVar2 & 3;
    while (uVar2 != 0) {
      uVar2 = uVar2 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar2 = 0xffffffff;
    ppcVar6 = &_Format_0040e15c;
    do {
      ppcVar11 = ppcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      ppcVar11 = (char **)((int)ppcVar6 + 1);
      cVar1 = *(char *)ppcVar6;
      ppcVar6 = ppcVar11;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar9 = msg;
    do {
      pcVar10 = pcVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = uVar2 >> 2;
    ppcVar6 = (char **)((int)ppcVar11 - uVar2);
    ppcVar11 = (char **)(pcVar10 + -1);
    while (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      *ppcVar11 = *ppcVar6;
      ppcVar6 = ppcVar6 + 1;
      ppcVar11 = ppcVar11 + 1;
    }
    uVar2 = uVar2 & 3;
    while (uVar2 != 0) {
      uVar2 = uVar2 - 1;
      *(undefined *)ppcVar11 = *(undefined *)ppcVar6;
      ppcVar6 = (char **)((int)ppcVar6 + 1);
      ppcVar11 = (char **)((int)ppcVar11 + 1);
    }
    fprintf(gestrm,(char *)&_Format_0040d5b4,msg);
    fflush(gestrm);
  }
  return;
}



void __cdecl D2GSHandleS2SPacket(D2GSPACKET *lpPacket)

{
  ushort uVar1;
  
  if (lpPacket != (D2GSPACKET *)0x0) {
    if (lpPacket->datalen == *(ushort *)&lpPacket->field_0x4) {
      uVar1 = *(ushort *)lpPacket->data;
      if (uVar1 < 0x36) {
        if (*(code **)(&DAT_0040e2a4 + (uint)uVar1 * 8) != (code *)0x0) {
          if ((uint)*(ushort *)&lpPacket->field_0x4 < *(uint *)(&DAT_0040e2a0 + (uint)uVar1 * 8)) {
            return;
          }
          (**(code **)(&DAT_0040e2a4 + (uint)uVar1 * 8))((uint)lpPacket->peer,&lpPacket->field_0x4);
          return;
        }
      }
      D2GSEventLog(s_D2GSHandleS2SPacket_0040e450,s_No_packet_handler_found_for_type_0040e464,
                   (uint)uVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404350(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 10;
  puVar2 = &realmname;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_00631c00 = 0;
  DAT_00631c04 = 0;
  return;
}



void __cdecl D2GSActive(int flag)

{
  if (flag == 0) {
    DAT_00631838 = flag;
  }
  DAT_00631c04 = flag;
  return;
}



undefined4 FUN_00404390(void)

{
  return DAT_00631c04;
}



DWORD D2GSGetSequence(void)

{
  sequenceno = sequenceno + 1;
  return sequenceno;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl D2GSSendClassToD2CS(undefined param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  
  uVar1 = 0x4004;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar1 = uVar1 - 0x1000;
    } while (0xfff < uVar1);
  }
  puVar2 = (undefined2 *)((undefined *)register0x00000010 + -uVar1);
  *(undefined4 *)(puVar2 + -2) = 0x4044ea;
  *puVar2 = 2;
  *(undefined2 **)(puVar2 + -2) = puVar2;
  puVar2[1] = 1;
  *(undefined *)(puVar2 + 2) = 100;
  *(undefined4 *)(puVar2 + -4) = 0x404507;
  D2GSNetSendPacket(*(D2GSPACKET **)(puVar2 + -2));
  *(undefined4 *)(puVar2 + -4) = 0x40e4a0;
  *(undefined4 *)(puVar2 + -6) = 0x40e48c;
  *(undefined4 *)(puVar2 + -8) = 0x404516;
  D2GSEventLog(*(char **)(puVar2 + -6),*(char **)(puVar2 + -4));
  return;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl D2GSSendClassToD2DBS(undefined param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  
  uVar1 = 0x4004;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar1 = uVar1 - 0x1000;
    } while (0xfff < uVar1);
  }
  puVar2 = (undefined2 *)((undefined *)register0x00000010 + -uVar1);
  *(undefined4 *)(puVar2 + -2) = 0x40452a;
  *puVar2 = 4;
  *(undefined2 **)(puVar2 + -2) = puVar2;
  puVar2[1] = 1;
  *(undefined *)(puVar2 + 2) = 0x65;
  *(undefined4 *)(puVar2 + -4) = 0x404547;
  D2GSNetSendPacket(*(D2GSPACKET **)(puVar2 + -2));
  *(undefined4 *)(puVar2 + -4) = 0x40e4e0;
  *(undefined4 *)(puVar2 + -6) = 0x40e4c8;
  *(undefined4 *)(puVar2 + -8) = 0x404556;
  D2GSEventLog(*(char **)(puVar2 + -6),*(char **)(puVar2 + -4));
  return;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl D2GSSetD2CSMaxGameNumber(DWORD param_1)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *puVar5;
  
  uVar1 = 0x4004;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar1 = uVar1 - 0x1000;
    } while (0xfff < uVar1);
  }
  puVar4 = (undefined4 *)((undefined *)register0x00000010 + -uVar1);
  puVar4[-1] = 0x40493a;
  puVar4[-1] = 0x40493f;
  iVar2 = FUN_00404390(*(undefined *)(puVar4 + -1));
  if (iVar2 != 0) {
    puVar4[-1] = unaff_ESI;
    puVar4[-2] = unaff_EDI;
    uVar1 = DAT_00631830;
    if ((uint)puVar4[0x1002] < DAT_00631830) {
      uVar1 = puVar4[0x1002];
    }
    iVar2 = 0x1001;
    puVar5 = puVar4;
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)((int)puVar4 + 6) = 0x12;
    *(undefined2 *)(puVar4 + 1) = 0x10;
    puVar4[-3] = 0x40497b;
    DVar3 = D2GSGetSequence(*(undefined *)(puVar4 + -3));
    puVar4[2] = DVar3;
    *(undefined4 **)(puVar4 + -3) = puVar4;
    puVar4[3] = uVar1;
    puVar4[4] = 0;
    *(undefined2 *)((int)puVar4 + 2) = 0x10;
    *(undefined2 *)puVar4 = 2;
    puVar4[-4] = 0x4049a1;
    D2GSNetSendPacket((D2GSPACKET *)puVar4[-3]);
    puVar4[-4] = uVar1;
    puVar4[-5] = 0x40e60c;
    puVar4[-6] = 0x40e5f0;
    puVar4[-7] = 0x4049b1;
    D2GSEventLog((char *)puVar4[-6],(char *)puVar4[-5]);
  }
  return;
}



undefined4 __cdecl
D2GSCBFindPlayerToken(byte *param_1,int param_2,short param_3,char *param_4,undefined4 *param_5)

{
  D2CHARINFO *lpCharInfo;
  D2GAMEINFO *lpGameInfo;
  int iVar1;
  char local_10 [16];
  
  if (((param_1 != (byte *)0x0) && (param_4 != (char *)0x0)) && (param_5 != (undefined4 *)0x0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&csGameList);
    lpCharInfo = D2GSFindPendingCharByCharName(param_1);
    if (lpCharInfo != (D2CHARINFO *)0x0) {
      if (lpCharInfo->token == param_2) {
        lpGameInfo = D2GSFindGameInfoByGameId(param_3);
        if (lpGameInfo == (D2GAMEINFO *)0x0) {
          D2GSEventLog(s_D2GSCBFindPlayerToken_0040e948,s_Bad_GameId__u__for_char__s___s__0040e928,
                       (uint)(ushort)param_3,param_1,lpCharInfo);
          D2GSDeletePendingChar(lpCharInfo);
        }
        else {
          if (lpGameInfo == (D2GAMEINFO *)lpCharInfo->lpGameInfo) {
            strncpy(param_4,(char *)lpCharInfo,0xf);
            param_4[0xf] = '\0';
            *param_5 = 1;
            strncpy(local_10,(char *)lpCharInfo->RealmName,0xf);
            local_10[15] = '\0';
            D2GSDeletePendingChar(lpCharInfo);
            iVar1 = D2GSInsertCharIntoGameInfo
                              (lpGameInfo,param_2,(uchar *)param_4,param_1,local_10,0,0,0);
            if (iVar1 == 0) {
              FUN_004038c0((uint)lpGameInfo->field_0x72,0,1);
              D2GSEventLog(s_D2GSCBFindPlayerToken_0040e948,
                           s_Found_token_of__s___s__for_game___0040e88c,param_1,param_4,lpGameInfo,
                           (uint)lpGameInfo[1].GameId);
              LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
              return 1;
            }
            D2GSEventLog(s_D2GSCBFindPlayerToken_0040e948,
                         s_failed_insert_into_char_list_for_0040e8b8,param_1,param_4,lpGameInfo,
                         (uint)lpGameInfo[1].GameId,iVar1);
          }
          else {
            D2GSEventLog(s_D2GSCBFindPlayerToken_0040e948,
                         s_Game_0x_lx_not_match_0x_lx_for_c_0040e8fc,lpGameInfo,
                         (D2GAMEINFO *)lpCharInfo->lpGameInfo,param_1,lpCharInfo);
            D2GSDeletePendingChar(lpCharInfo);
          }
        }
      }
      else {
        D2GSEventLog(s_D2GSCBFindPlayerToken_0040e948,s_Bad_Token_for__s___s__0040e960,param_1,
                     lpCharInfo);
        D2GSDeletePendingChar(lpCharInfo);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&csGameList);
  }
  return 0;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl
D2GSCBEnterGame(undefined4 param_1,undefined RealmName,uchar *AcctName,undefined4 param_4,
               undefined4 param_5,char *expansion,undefined param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined2 param_11,short param_12,
               undefined4 param_13,undefined4 param_14,uint param_15,undefined4 param_16,
               uint param_17)

{
  char cVar1;
  uint uVar2;
  D2CHARINFO *lpChar;
  D2GAMEINFO *lpGame;
  D2CHARINFO *pDVar3;
  char *pcVar4;
  DWORD DVar5;
  ushort uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  undefined4 unaff_EBX;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar13;
  undefined4 unaff_EDI;
  char **ppcVar14;
  undefined4 *puVar15;
  char *pcVar16;
  time_t tVar17;
  uchar *lpCharName;
  WORD wGameId;
  uchar *unknown;
  WORD wCharClass;
  DWORD dwCharLevel;
  char *RealmName1;
  
  uVar2 = 0x4030;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar2 = uVar2 - 0x1000;
    } while (0xfff < uVar2);
  }
  puVar10 = (undefined *)register0x00000010 + -uVar2;
  *(undefined4 *)(puVar10 + -4) = 0x40531a;
  *(undefined4 *)(puVar10 + -4) = unaff_EBX;
  pcVar16 = *(char **)(puVar10 + 0x4038);
  *(undefined4 *)(puVar10 + -8) = unaff_EBP;
  *(undefined4 *)(puVar10 + -0xc) = unaff_ESI;
  *(undefined4 *)(puVar10 + -0x10) = unaff_EDI;
  if (pcVar16 != (char *)0x0) {
    *(undefined4 *)(puVar10 + 0x1c) = 0;
    *(undefined4 *)(puVar10 + 0x20) = 0;
    *(undefined4 *)(puVar10 + 8) = 0;
    *(undefined4 *)(puVar10 + 0x24) = 0;
    *(undefined4 *)(puVar10 + 0xc) = 0;
    *(undefined4 *)(puVar10 + 0x28) = 0;
    *(undefined4 *)(puVar10 + 0x10) = 0;
    *(undefined4 *)(puVar10 + -0x14) = 0x6317c0;
    *(undefined4 *)(puVar10 + 0x14) = 0;
    *(undefined4 *)(puVar10 + 8) = s_unknown_0040ea0c._0_4_;
    *(undefined4 *)(puVar10 + 0xc) = s_unknown_0040ea0c._4_4_;
    *(undefined4 *)(puVar10 + 4) = 0;
    puVar11 = puVar10 + -0x18;
    *(undefined4 *)(puVar10 + -0x18) = 0x405375;
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(puVar10 + -0x14));
    *(char **)(puVar11 + -4) = pcVar16;
    *(undefined4 *)(puVar11 + -8) = 0x40537b;
    lpChar = D2GSFindPendingCharByCharName(*(uchar **)(puVar11 + -4));
    if (lpChar != (D2CHARINFO *)0x0) {
      *(D2CHARINFO **)(puVar11 + -4) = lpChar;
      *(undefined4 *)(puVar11 + -8) = 0x405388;
      D2GSDeletePendingChar(*(D2CHARINFO **)(puVar11 + -4));
    }
    uVar2 = *(uint *)(puVar11 + 0x4044);
    *(undefined4 *)(puVar11 + 0x10) = 0;
    *(uint *)(puVar11 + -4) = uVar2;
    *(undefined4 *)(puVar11 + -8) = 0x40539c;
    lpGame = D2GSFindGameInfoByGameId(*(WORD *)(puVar11 + -4));
    if (lpGame == (D2GAMEINFO *)0x0) {
      *(uint *)(puVar11 + -4) = uVar2 & 0xffff;
      *(char **)(puVar11 + -8) = pcVar16;
      *(undefined4 *)(puVar11 + -0xc) = 0x40e978;
      *(undefined4 *)(puVar11 + -0x10) = 0x40e9d4;
      *(undefined4 *)(puVar11 + -0x14) = 0x405623;
      D2GSEventLog(*(char **)(puVar11 + -0x10),*(char **)(puVar11 + -0xc));
    }
    else {
      *(char **)(puVar11 + -4) = pcVar16;
      *(D2GAMEINFO **)(puVar11 + -8) = lpGame;
      *(undefined4 *)(puVar11 + -0xc) = 0x4053b0;
      pDVar3 = D2GSFindCharInGameByCharName
                         (*(D2GAMEINFO **)(puVar11 + -8),*(uchar **)(puVar11 + -4));
      *(D2CHARINFO **)(puVar11 + 0x10) = pDVar3;
      if (pDVar3 == (D2CHARINFO *)0x0) {
        *(undefined4 *)(puVar11 + -4) = 1;
        *(undefined4 *)(puVar11 + -8) = *(undefined4 *)(puVar11 + 0x404c);
        *(undefined4 *)(puVar11 + -0xc) = *(undefined4 *)(puVar11 + 0x4050);
        *(undefined **)(puVar11 + -0x10) = puVar11 + 0x18;
        *(char **)(puVar11 + -0x14) = pcVar16;
        *(undefined **)(puVar11 + -0x18) = puVar11 + 0x2c;
        *(undefined4 *)(puVar11 + -0x1c) = 0xffffffff;
        *(D2GAMEINFO **)(puVar11 + -0x20) = lpGame;
        *(undefined4 *)(puVar11 + -0x24) = 0x405449;
        D2GSInsertCharIntoGameInfo
                  (*(D2GAMEINFO **)(puVar11 + -0x20),*(DWORD *)(puVar11 + -0x1c),
                   *(uchar **)(puVar11 + -0x18),*(uchar **)(puVar11 + -0x14),
                   *(char **)(puVar11 + -0x10),*(DWORD *)(puVar11 + -0xc),*(WORD *)(puVar11 + -8),
                   *(WORD *)(puVar11 + -4));
        *(uint *)(puVar11 + -0x24) = uVar2 & 0xffff;
        *(D2GAMEINFO **)(puVar11 + -0x28) = lpGame;
        *(char **)(puVar11 + -0x2c) = pcVar16;
        *(undefined4 *)(puVar11 + -0x30) = 0x40e9e4;
        *(undefined4 *)(puVar11 + -0x34) = 0x40e9d4;
        *(undefined4 *)(puVar11 + -0x38) = 0x405463;
        D2GSEventLog(*(char **)(puVar11 + -0x34),*(char **)(puVar11 + -0x30));
      }
      else {
        *(undefined4 *)(puVar11 + -4) = 0;
        *(undefined4 *)(puVar11 + 0x2c) = *(undefined4 *)pDVar3->AcctName;
        *(undefined4 *)(puVar11 + 0x30) = *(undefined4 *)(pDVar3->AcctName + 4);
        *(undefined4 *)(puVar11 + 0x34) = *(undefined4 *)(pDVar3->AcctName + 8);
        *(undefined4 *)(puVar11 + 0x38) = *(undefined4 *)(pDVar3->AcctName + 0xc);
        *(undefined4 *)(puVar11 + 0x18) = *(undefined4 *)pDVar3->RealmName;
        *(undefined4 *)(puVar11 + 0x1c) = *(undefined4 *)(pDVar3->RealmName + 4);
        *(undefined4 *)(puVar11 + 0x20) = *(undefined4 *)(pDVar3->RealmName + 8);
        uVar6 = *(ushort *)(puVar11 + 0x404c);
        *(undefined4 *)(puVar11 + 0x24) = *(undefined4 *)(pDVar3->RealmName + 0xc);
        pDVar3->CharLevel = *(uint *)(puVar11 + 0x4050);
        pDVar3->CharClass = uVar6;
        pDVar3->EnterGame = 1;
        *(undefined4 *)(puVar11 + -8) = 0x40541c;
        tVar17 = time(*(time_t **)(puVar11 + -4));
        pDVar3->EnterTime = (DWORD)tVar17;
      }
      cVar1 = lpGame->ladder;
      *(undefined4 *)(puVar11 + 0x14) = 1;
      pcVar7 = s_ladder_0040da5c;
      if (cVar1 == '\0') {
        pcVar7 = s_non_ladder_0040da50;
      }
      pcVar4 = s_hardcore_0040e748;
      if (lpGame->hardcore == '\0') {
        pcVar4 = s_softcore_0040e73c;
      }
      cVar1 = lpGame->expansion;
      *(undefined4 *)(puVar11 + 0x28) = 0x40da44;
      if (cVar1 == '\0') {
        *(undefined4 *)(puVar11 + 0x28) = 0x40da3c;
      }
      *(char **)(puVar11 + -4) = pcVar7;
      *(char **)(puVar11 + -8) = pcVar4;
      *(char **)(puVar11 + -0xc) =
           s_normal_0040e1d0 + (int)((longlong)(ulonglong)lpGame->field_0x72 % 3) * 0x20;
      *(undefined4 *)(puVar11 + -0x10) = *(undefined4 *)(puVar11 + 0x28);
      *(uint *)(puVar11 + -0x14) = uVar2 & 0xffff;
      *(D2GAMEINFO **)(puVar11 + -0x18) = lpGame;
      *(undefined **)(puVar11 + -0x1c) = puVar11 + 0x18;
      *(undefined ***)(puVar11 + -0x20) =
           &PTR_DAT_0040e230 +
           (int)((longlong)((ulonglong)*(uint *)(puVar11 + 0x404c) & 0xffffffff0000ffff) % 7) * 4;
      *(undefined4 *)(puVar11 + -0x24) = *(undefined4 *)(puVar11 + 0x4050);
      *(undefined **)(puVar11 + -0x28) = puVar11 + 0x2c;
      *(char **)(puVar11 + -0x2c) = pcVar16;
      *(undefined4 *)(puVar11 + -0x30) = 0x40e998;
      *(undefined4 *)(puVar11 + -0x34) = 0x40e9d4;
      *(undefined4 *)(puVar11 + -0x38) = 0x40550d;
      D2GSEventLog(*(char **)(puVar11 + -0x34),*(char **)(puVar11 + -0x30));
      if (pDVar3 != (D2CHARINFO *)0x0) {
        iVar8 = -1;
        ppcVar14 = &buf_006318c2;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          cVar1 = *(char *)ppcVar14;
          ppcVar14 = (char **)((int)ppcVar14 + 1);
        } while (cVar1 != '\0');
        if (iVar8 != -2) {
          *(undefined4 *)(puVar11 + -4) = *(undefined4 *)(*(int *)(puVar11 + 0x10) + 0x4c);
          *(undefined4 *)(puVar11 + -8) = 0x405532;
          D2GSMOTDAdd(*(DWORD *)(puVar11 + -4));
        }
      }
    }
    if ((MaxPreferUsers != 0) && (*(int *)(puVar11 + 0x10) != 0)) {
      *(undefined4 *)(puVar11 + -4) = 0x40554b;
      FUN_00406870(puVar11[-4]);
    }
    *(undefined4 *)(puVar11 + -4) = 0x6317c0;
    puVar12 = puVar11 + -8;
    *(undefined4 *)(puVar11 + -8) = 0x405556;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar11 + -4));
    if (*(int *)(puVar12 + 0x14) != 0) {
      iVar8 = 0x1001;
      puVar13 = (undefined4 *)(puVar12 + 0x3c);
      while (iVar8 != 0) {
        iVar8 = iVar8 + -1;
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      iVar8 = -1;
      pcVar7 = pcVar16;
      do {
        uVar6 = (ushort)iVar8;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        uVar6 = (ushort)iVar8;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      *(undefined2 *)(puVar12 + 0x42) = 0x22;
      *(ushort *)(puVar12 + 0x40) = ~uVar6 + 0x18;
      *(undefined4 *)(puVar12 + -4) = 0x40558c;
      DVar5 = D2GSGetSequence(puVar12[-4]);
      *(DWORD *)(puVar12 + 0x44) = DVar5;
      *(undefined4 *)(puVar12 + 0x50) = *(undefined4 *)(puVar12 + 0x4050);
      *(uint *)(puVar12 + 0x54) = *(uint *)(puVar12 + 0x404c) & 0xffff;
      uVar9 = 0xffffffff;
      pcVar7 = pcVar16;
      do {
        pcVar4 = pcVar7;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar4 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar4;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      *(undefined4 *)(puVar12 + 0x48) = 1;
      *(uint *)(puVar12 + 0x4c) = uVar2 & 0xffff;
      uVar2 = uVar9 >> 2;
      puVar13 = (undefined4 *)(pcVar4 + -uVar9);
      puVar15 = (undefined4 *)(puVar12 + 0x58);
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *puVar15 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      }
      uVar9 = uVar9 & 3;
      while (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        *(undefined *)puVar15 = *(undefined *)puVar13;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      iVar8 = -1;
      do {
        uVar6 = (ushort)iVar8;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        uVar6 = (ushort)iVar8;
        cVar1 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      } while (cVar1 != '\0');
      *(undefined2 *)(puVar12 + 0x3c) = 2;
      *(ushort *)(puVar12 + 0x3e) = ~uVar6 + 0x18;
      *(undefined **)(puVar12 + -4) = puVar12 + 0x3c;
      *(undefined4 *)(puVar12 + -8) = 0x4055fe;
      D2GSNetSendPacket(*(D2GSPACKET **)(puVar12 + -4));
    }
  }
  return;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl
D2GSCBLeaveGame(undefined *param_1,WORD param_2,WORD param_3,DWORD param_4,DWORD param_5,
               DWORD param_6,WORD param_7,LPCSTR param_8,LPCSTR param_9,BOOL param_10,DWORD param_11
               ,DWORD param_12,LPCSTR param_13,DWORD param_14,DWORD param_15)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  D2GAMEINFO *pDVar4;
  D2CHARINFO *pDVar5;
  char *pcVar6;
  DWORD DVar7;
  ushort uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined4 unaff_EBX;
  undefined *puVar14;
  undefined *puVar15;
  undefined4 unaff_EBP;
  char *pcVar16;
  undefined4 unaff_ESI;
  undefined4 *puVar17;
  undefined4 unaff_EDI;
  undefined4 uVar18;
  undefined4 *puVar19;
  
  uVar3 = 0x4010;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar3 = uVar3 - 0x1000;
    } while (0xfff < uVar3);
  }
  puVar12 = (undefined *)register0x00000010 + -uVar3;
  *(undefined4 *)(puVar12 + -4) = 0x40563a;
  *(undefined4 *)(puVar12 + -4) = unaff_EBX;
  *(undefined4 *)(puVar12 + -8) = unaff_EBP;
  *(undefined4 *)(puVar12 + -0xc) = unaff_ESI;
  *(undefined4 *)(puVar12 + -0x10) = unaff_EDI;
  *(undefined4 *)(puVar12 + -0x14) = 0x6317c0;
  puVar14 = puVar12 + -0x18;
  *(undefined4 *)(puVar12 + -0x18) = 0x405649;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(puVar12 + -0x14));
  uVar3 = *(uint *)(puVar14 + 0x4028);
  *(uint *)(puVar14 + -4) = uVar3;
  *(undefined4 *)(puVar14 + 0x18) = 0;
  *(undefined4 *)(puVar14 + 0x10) = 0;
  *(undefined4 *)(puVar14 + 0x14) = 0;
  *(undefined4 *)(puVar14 + -8) = 0x405664;
  pDVar4 = D2GSFindGameInfoByGameId(*(WORD *)(puVar14 + -4));
  if (pDVar4 == (D2GAMEINFO *)0x0) {
    uVar18 = *(undefined4 *)(puVar14 + 0x4054);
    pcVar16 = *(char **)(puVar14 + 0x4040);
    *(uint *)(puVar14 + -4) = uVar3 & 0xffff;
    *(undefined4 *)(puVar14 + -8) = uVar18;
    *(char **)(puVar14 + -0xc) = pcVar16;
    *(undefined4 *)(puVar14 + -0x10) = 0x40ea14;
    *(undefined4 *)(puVar14 + -0x14) = 0x40ea60;
    *(undefined4 *)(puVar14 + -0x18) = 0x405794;
    D2GSEventLog(*(char **)(puVar14 + -0x14),*(char **)(puVar14 + -0x10));
  }
  else {
    pcVar16 = *(char **)(puVar14 + 0x4040);
    *(char **)(puVar14 + -4) = pcVar16;
    *(D2GAMEINFO **)(puVar14 + -8) = pDVar4;
    *(undefined4 *)(puVar14 + -0xc) = 0x40567f;
    pDVar5 = D2GSFindCharInGameByCharName(*(D2GAMEINFO **)(puVar14 + -8),*(uchar **)(puVar14 + -4));
    *(D2CHARINFO **)(puVar14 + 0x14) = pDVar5;
    if (pDVar5 == (D2CHARINFO *)0x0) {
      uVar18 = *(undefined4 *)(puVar14 + 0x4054);
      *(uint *)(puVar14 + -4) = uVar3 & 0xffff;
      *(D2GAMEINFO **)(puVar14 + -8) = pDVar4;
      *(undefined4 *)(puVar14 + -0xc) = uVar18;
      *(char **)(puVar14 + -0x10) = pcVar16;
      *(undefined4 *)(puVar14 + -0x14) = 0x40ea38;
      *(undefined4 *)(puVar14 + -0x18) = 0x40ea60;
      *(undefined4 *)(puVar14 + -0x1c) = 0x405769;
      D2GSEventLog(*(char **)(puVar14 + -0x18),*(char **)(puVar14 + -0x14));
    }
    else {
      pcVar13 = s_ladder_0040da5c;
      *(uint *)(puVar14 + 0x10) = (uint)pDVar5->EnterGame;
      cVar1 = pDVar4->ladder;
      *(uint *)(puVar14 + 0x18) = (uint)pDVar5->CharLockStatus;
      if (cVar1 == '\0') {
        pcVar13 = s_non_ladder_0040da50;
      }
      pcVar6 = s_hardcore_0040e748;
      if (pDVar4->hardcore == '\0') {
        pcVar6 = s_softcore_0040e73c;
      }
      pcVar9 = s_exp_0040da44;
      if (pDVar4->expansion == '\0') {
        pcVar9 = s_classic_0040da3c;
      }
      *(char **)(puVar14 + -4) = pcVar13;
      *(char **)(puVar14 + -8) = pcVar6;
      uVar18 = *(undefined4 *)(puVar14 + 0x4054);
      *(char **)(puVar14 + -0xc) =
           s_normal_0040e1d0 + (int)((longlong)(ulonglong)pDVar4->field_0x72 % 3) * 0x20;
      *(char **)(puVar14 + -0x10) = pcVar9;
      *(uint *)(puVar14 + -0x14) = uVar3 & 0xffff;
      *(D2GAMEINFO **)(puVar14 + -0x18) = pDVar4;
      *(undefined ***)(puVar14 + -0x1c) =
           &PTR_DAT_0040e230 +
           (int)((longlong)((ulonglong)*(uint *)(puVar14 + 0x402c) & 0xffffffff0000ffff) % 7) * 4;
      *(undefined4 *)(puVar14 + -0x20) = *(undefined4 *)(puVar14 + 0x4030);
      *(undefined4 *)(puVar14 + -0x24) = uVar18;
      *(char **)(puVar14 + -0x28) = pcVar16;
      *(undefined4 *)(puVar14 + -0x2c) = 0x40ea70;
      *(undefined4 *)(puVar14 + -0x30) = 0x40ea60;
      *(undefined4 *)(puVar14 + -0x34) = 0x405735;
      D2GSEventLog(*(char **)(puVar14 + -0x30),*(char **)(puVar14 + -0x2c));
      *(undefined4 *)(puVar14 + -0x34) = 0xffffffff;
      bVar2 = pDVar4->field_0x72;
      *(undefined4 *)(puVar14 + -0x38) = 0;
      *(uint *)(puVar14 + -0x3c) = (uint)bVar2;
      *(undefined4 *)(puVar14 + -0x40) = 0x405744;
      FUN_004038c0(*(int *)(puVar14 + -0x3c),*(int *)(puVar14 + -0x38),*(int *)(puVar14 + -0x34));
    }
  }
  if ((*(int *)(puVar14 + 0x4048) != 0) && (*(int *)(puVar14 + 0x10) != 0)) {
    *(undefined4 *)(puVar14 + -4) = *(undefined4 *)(puVar14 + 0x4044);
    *(undefined4 *)(puVar14 + -8) = *(undefined4 *)(puVar14 + 0x403c);
    *(undefined4 *)(puVar14 + -0xc) = *(undefined4 *)(puVar14 + 0x4034);
    *(undefined4 *)(puVar14 + -0x10) = *(undefined4 *)(puVar14 + 0x4030);
    *(undefined4 *)(puVar14 + -0x14) = *(undefined4 *)(puVar14 + 0x402c);
    *(char **)(puVar14 + -0x18) = pcVar16;
    *(undefined4 *)(puVar14 + -0x1c) = uVar18;
    *(undefined4 *)(puVar14 + -0x20) = 0x4057d9;
    D2GSWriteCharInfoFile
              (*(undefined4 *)(puVar14 + -0x1c),*(undefined4 *)(puVar14 + -0x18),
               *(undefined4 *)(puVar14 + -0x14),*(undefined4 *)(puVar14 + -0x10),
               *(int *)(puVar14 + -0xc),*(undefined4 *)(puVar14 + -8),*(int *)(puVar14 + -4));
  }
  if ((pDVar4 != (D2GAMEINFO *)0x0) && (*(int *)(puVar14 + 0x14) != 0)) {
    *(int *)(puVar14 + -4) = *(int *)(puVar14 + 0x14);
    *(D2GAMEINFO **)(puVar14 + -8) = pDVar4;
    *(undefined4 *)(puVar14 + -0xc) = 0x4057ef;
    D2GSDeleteCharFromGameInfo(*(D2GAMEINFO **)(puVar14 + -8),*(D2CHARINFO **)(puVar14 + -4));
    if (MaxPreferUsers != 0) {
      *(undefined4 *)(puVar14 + -4) = 0x405800;
      FUN_00406870(puVar14[-4]);
    }
  }
  *(undefined4 *)(puVar14 + -4) = 0x6317c0;
  puVar15 = puVar14 + -8;
  *(undefined4 *)(puVar14 + -8) = 0x40580b;
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar14 + -4));
  if (*(int *)(puVar15 + 0x18) != 0) {
    *(undefined4 *)(puVar15 + -4) = 0;
    *(undefined4 *)(puVar15 + -8) = 0x631be0;
    *(char **)(puVar15 + -0xc) = pcVar16;
    *(undefined4 *)(puVar15 + -0x10) = uVar18;
    *(undefined4 *)(puVar15 + -0x14) = 0x405821;
    D2GSSetCharLockStatus
              (*(LPCSTR *)(puVar15 + -0x10),*(LPCSTR *)(puVar15 + -0xc),*(uchar **)(puVar15 + -8),
               *(DWORD *)(puVar15 + -4));
  }
  if (*(int *)(puVar15 + 0x10) != 0) {
    iVar10 = 0x1001;
    puVar17 = (undefined4 *)(puVar15 + 0x1c);
    while (iVar10 != 0) {
      iVar10 = iVar10 + -1;
      *puVar17 = 0;
      puVar17 = puVar17 + 1;
    }
    iVar10 = -1;
    pcVar13 = pcVar16;
    do {
      uVar8 = (ushort)iVar10;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      uVar8 = (ushort)iVar10;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    *(undefined2 *)(puVar15 + 0x22) = 0x22;
    *(ushort *)(puVar15 + 0x20) = ~uVar8 + 0x18;
    *(undefined4 *)(puVar15 + -4) = 0x40585a;
    DVar7 = D2GSGetSequence(puVar15[-4]);
    *(DWORD *)(puVar15 + 0x24) = DVar7;
    *(undefined4 *)(puVar15 + 0x30) = *(undefined4 *)(puVar15 + 0x4030);
    *(uint *)(puVar15 + 0x34) = *(uint *)(puVar15 + 0x402c) & 0xffff;
    uVar11 = 0xffffffff;
    *(uint *)(puVar15 + 0x2c) = uVar3 & 0xffff;
    pcVar13 = pcVar16;
    do {
      pcVar6 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar6 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar6;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    uVar3 = uVar11 >> 2;
    *(undefined4 *)(puVar15 + 0x28) = 2;
    puVar17 = (undefined4 *)(pcVar6 + -uVar11);
    puVar19 = (undefined4 *)(puVar15 + 0x38);
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      *puVar19 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    }
    uVar11 = uVar11 & 3;
    while (uVar11 != 0) {
      uVar11 = uVar11 - 1;
      *(undefined *)puVar19 = *(undefined *)puVar17;
      puVar17 = (undefined4 *)((int)puVar17 + 1);
      puVar19 = (undefined4 *)((int)puVar19 + 1);
    }
    iVar10 = -1;
    do {
      uVar8 = (ushort)iVar10;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      uVar8 = (ushort)iVar10;
      cVar1 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar1 != '\0');
    *(undefined2 *)(puVar15 + 0x1c) = 2;
    *(ushort *)(puVar15 + 0x1e) = ~uVar8 + 0x18;
    *(undefined **)(puVar15 + -4) = puVar15 + 0x1c;
    *(undefined4 *)(puVar15 + -8) = 0x4058cb;
    D2GSNetSendPacket(*(D2GSPACKET **)(puVar15 + -4));
  }
  return;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl D2GSCBCloseGame(WORD wGameId,DWORD param_2,DWORD param_3)

{
  byte bVar1;
  uint uVar2;
  D2GAMEINFO *lpGameInfo;
  char *pcVar1;
  DWORD DVar3;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar4;
  undefined4 unaff_EBX;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *puVar5;
  D2GSPACKET packet;
  uint in_stack_00004008;
  
  uVar2 = 0x4004;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar2 = uVar2 - 0x1000;
    } while (0xfff < uVar2);
  }
  puVar4 = (undefined *)register0x00000010 + -uVar2;
  *(undefined4 *)(puVar4 + -4) = 0x4058ea;
  *(undefined4 *)(puVar4 + -4) = unaff_EBX;
  *(undefined4 *)(puVar4 + -8) = unaff_ESI;
  *(undefined4 *)(puVar4 + -0xc) = unaff_EDI;
  *(undefined4 *)(puVar4 + -0x10) = 0x6317c0;
  puVar6 = puVar4 + -0x14;
  *(undefined4 *)(puVar4 + -0x14) = 0x4058f8;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(puVar4 + -0x10));
  uVar2 = *(uint *)(puVar6 + 0x4014);
  *(uint *)(puVar6 + -4) = uVar2;
  *(undefined4 *)(puVar6 + -8) = 0x405905;
  lpGameInfo = D2GSFindGameInfoByGameId(*(WORD *)(puVar6 + -4));
  if (lpGameInfo == (D2GAMEINFO *)0x0) {
    *(uint *)(puVar6 + -4) = uVar2 & 0xffff;
    *(undefined4 *)(puVar6 + -8) = 0x40eaa8;
    *(undefined4 *)(puVar6 + -0xc) = 0x40eac4;
    *(undefined4 *)(puVar6 + -0x10) = 0x4059a2;
    D2GSEventLog(*(char **)(puVar6 + -0xc),*(char **)(puVar6 + -8));
  }
  else {
    pcVar4 = s_ladder_0040da5c;
    if (lpGameInfo->ladder == '\0') {
      pcVar4 = s_non_ladder_0040da50;
    }
    pcVar1 = s_hardcore_0040e748;
    if (lpGameInfo->hardcore == '\0') {
      pcVar1 = s_softcore_0040e73c;
    }
    pcVar2 = s_exp_0040da44;
    if (lpGameInfo->expansion == '\0') {
      pcVar2 = s_classic_0040da3c;
    }
    *(char **)(puVar6 + -4) = pcVar4;
    *(char **)(puVar6 + -8) = pcVar1;
    *(char **)(puVar6 + -0xc) =
         s_normal_0040e1d0 + (int)((longlong)(ulonglong)lpGameInfo->field_0x72 % 3) * 0x20;
    *(char **)(puVar6 + -0x10) = pcVar2;
    *(uint *)(puVar6 + -0x14) = uVar2 & 0xffff;
    *(D2GAMEINFO **)(puVar6 + -0x18) = lpGameInfo;
    *(undefined4 *)(puVar6 + -0x1c) = 0x40ead4;
    *(undefined4 *)(puVar6 + -0x20) = 0x40eac4;
    *(undefined4 *)(puVar6 + -0x24) = 0x405972;
    D2GSEventLog(*(char **)(puVar6 + -0x20),*(char **)(puVar6 + -0x1c));
    *(undefined4 *)(puVar6 + -0x24) = 0;
    bVar1 = lpGameInfo->field_0x72;
    *(undefined4 *)(puVar6 + -0x28) = 0xffffffff;
    *(uint *)(puVar6 + -0x2c) = (uint)bVar1;
    *(undefined4 *)(puVar6 + -0x30) = 0x405981;
    FUN_004038c0(*(int *)(puVar6 + -0x2c),*(int *)(puVar6 + -0x28),*(int *)(puVar6 + -0x24));
    *(D2GAMEINFO **)(puVar6 + -0x30) = lpGameInfo;
    *(undefined4 *)(puVar6 + -0x34) = 0x405987;
    D2GSGameListDelete(*(void **)(puVar6 + -0x30));
  }
  *(undefined4 *)(puVar6 + -4) = 0x6317c0;
  puVar7 = puVar6 + -8;
  *(undefined4 *)(puVar6 + -8) = 0x4059b0;
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar6 + -4));
  iVar3 = 0x1001;
  puVar5 = (undefined4 *)(puVar7 + 0xc);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)(puVar7 + 0x12) = 0x23;
  *(undefined2 *)(puVar7 + 0x10) = 0xc;
  *(undefined4 *)(puVar7 + -4) = 0x4059d3;
  DVar3 = D2GSGetSequence(puVar7[-4]);
  *(DWORD *)(puVar7 + 0x14) = DVar3;
  *(undefined **)(puVar7 + -4) = puVar7 + 0xc;
  *(uint *)(puVar7 + 0x18) = uVar2 & 0xffff;
  *(undefined2 *)(puVar7 + 0xe) = 0xc;
  *(undefined2 *)(puVar7 + 0xc) = 2;
  *(undefined4 *)(puVar7 + -8) = 0x4059f1;
  D2GSNetSendPacket(*(D2GSPACKET **)(puVar7 + -4));
  return;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl
D2GSCBUpdateGameInformation
          (undefined2 param_1,short param_2,undefined4 param_3,undefined4 param_4,uint param_5,
          undefined4 param_6,uint param_7)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  D2GAMEINFO *pDVar4;
  D2CHARINFO *pDVar5;
  DWORD DVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  undefined4 unaff_EBX;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar14;
  undefined4 unaff_EDI;
  char *pcVar15;
  undefined4 *puVar16;
  char *pcVar17;
  
  uVar3 = 0x4008;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar3 = uVar3 - 0x1000;
    } while (0xfff < uVar3);
  }
  puVar11 = (undefined *)register0x00000010 + -uVar3;
  *(undefined4 *)(puVar11 + -4) = 0x405a0a;
  *(undefined4 *)(puVar11 + -4) = unaff_EBX;
  *(undefined4 *)(puVar11 + -8) = unaff_EBP;
  *(undefined4 *)(puVar11 + -0xc) = unaff_ESI;
  *(undefined4 *)(puVar11 + -0x10) = unaff_EDI;
  *(undefined4 *)(puVar11 + -0x14) = 0x6317c0;
  puVar12 = puVar11 + -0x18;
  *(undefined4 *)(puVar11 + -0x18) = 0x405a19;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(puVar11 + -0x14));
  uVar3 = *(uint *)(puVar12 + 0x401c);
  *(uint *)(puVar12 + -4) = uVar3;
  *(undefined4 *)(puVar12 + -8) = 0x405a26;
  pDVar4 = D2GSFindGameInfoByGameId(*(WORD *)(puVar12 + -4));
  uVar7 = *(uint *)(puVar12 + 0x4024);
  pcVar2 = *(char **)(puVar12 + 0x4020);
  if (pDVar4 != (D2GAMEINFO *)0x0) {
    *(char **)(puVar12 + -4) = pcVar2;
    *(D2GAMEINFO **)(puVar12 + -8) = pDVar4;
    *(undefined4 *)(puVar12 + -0xc) = 0x405a42;
    pDVar5 = D2GSFindCharInGameByCharName(*(D2GAMEINFO **)(puVar12 + -8),*(uchar **)(puVar12 + -4));
    if (pDVar5 != (D2CHARINFO *)0x0) {
      uVar10 = *(uint *)(puVar12 + 0x4028);
      pDVar5->CharClass = (ushort)uVar7;
      pDVar5->CharLevel = uVar10;
    }
  }
  *(undefined4 *)(puVar12 + -4) = 0x6317c0;
  puVar13 = puVar12 + -8;
  *(undefined4 *)(puVar12 + -8) = 0x405a62;
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar12 + -4));
  iVar9 = 0x1001;
  puVar14 = (undefined4 *)(puVar13 + 0x14);
  while (iVar9 != 0) {
    iVar9 = iVar9 + -1;
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  iVar9 = -1;
  pcVar17 = pcVar2;
  do {
    uVar8 = (ushort)iVar9;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    uVar8 = (ushort)iVar9;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(puVar13 + 0x1a) = 0x22;
  *(ushort *)(puVar13 + 0x18) = ~uVar8 + 0x18;
  *(undefined4 *)(puVar13 + -4) = 0x405a8c;
  DVar6 = D2GSGetSequence(puVar13[-4]);
  *(DWORD *)(puVar13 + 0x1c) = DVar6;
  uVar7 = uVar7 & 0xffff;
  *(uint *)(puVar13 + 0x10) = uVar7;
  *(uint *)(puVar13 + 0x2c) = uVar7;
  uVar7 = 0xffffffff;
  uVar3 = uVar3 & 0xffff;
  pcVar17 = pcVar2;
  do {
    pcVar15 = pcVar17;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  *(undefined4 *)(puVar13 + 0x28) = *(undefined4 *)(puVar13 + 0x4028);
  uVar10 = uVar7 >> 2;
  *(undefined4 *)(puVar13 + 0x20) = 0;
  *(uint *)(puVar13 + 0x24) = uVar3;
  puVar14 = (undefined4 *)(pcVar15 + -uVar7);
  puVar16 = (undefined4 *)(puVar13 + 0x30);
  while (uVar10 != 0) {
    uVar10 = uVar10 - 1;
    *puVar16 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar16 = puVar16 + 1;
  }
  uVar7 = uVar7 & 3;
  while (uVar7 != 0) {
    uVar7 = uVar7 - 1;
    *(undefined *)puVar16 = *(undefined *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  iVar9 = -1;
  pcVar17 = pcVar2;
  do {
    uVar8 = (ushort)iVar9;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    uVar8 = (ushort)iVar9;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(puVar13 + 0x14) = 2;
  *(ushort *)(puVar13 + 0x16) = ~uVar8 + 0x18;
  *(undefined **)(puVar13 + -4) = puVar13 + 0x14;
  *(undefined4 *)(puVar13 + -8) = 0x405b03;
  D2GSNetSendPacket(*(D2GSPACKET **)(puVar13 + -4));
  *(uint *)(puVar13 + -8) = uVar3;
  *(undefined ***)(puVar13 + -0xc) = &PTR_DAT_0040e230 + (*(int *)(puVar13 + 0x10) % 7) * 4;
  *(undefined4 *)(puVar13 + -0x10) = *(undefined4 *)(puVar13 + 0x4028);
  *(char **)(puVar13 + -0x14) = pcVar2;
  *(undefined4 *)(puVar13 + -0x18) = 0x40eb14;
  *(undefined4 *)(puVar13 + -0x1c) = 0x40eaf8;
  *(undefined4 *)(puVar13 + -0x20) = 0x405b32;
  D2GSEventLog(*(char **)(puVar13 + -0x1c),*(char **)(puVar13 + -0x18));
  return;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl
D2GSCBGetDatabaseCharacter(void *param_1,LPCSTR param_2,short param_3,DWORD param_4,LPCSTR param_5)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  short sVar5;
  uint uVar6;
  DWORD DVar7;
  int iVar8;
  void *pvVar9;
  BOOL BVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  undefined *puVar15;
  undefined4 unaff_EBX;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar19;
  undefined4 unaff_EDI;
  char *pcVar20;
  char *pcVar21;
  undefined4 *puVar22;
  
  uVar6 = 0x400c;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar6 = uVar6 - 0x1000;
    } while (0xfff < uVar6);
  }
  puVar15 = (undefined *)register0x00000010 + -uVar6;
  *(undefined4 *)(puVar15 + -4) = 0x405b4a;
  *(undefined4 *)(puVar15 + -4) = unaff_EBX;
  *(undefined4 *)(puVar15 + -8) = unaff_EBP;
  *(undefined4 *)(puVar15 + -0xc) = unaff_ESI;
  *(undefined4 *)(puVar15 + -0x10) = unaff_EDI;
  *(undefined4 *)(puVar15 + -0x14) = 0x6317c0;
  puVar16 = puVar15 + -0x18;
  *(undefined4 *)(puVar15 + -0x18) = 0x405b59;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(puVar15 + -0x14));
  *(undefined4 *)(puVar16 + -4) = 0x405b5e;
  DVar7 = D2GSGetSequence(puVar16[-4]);
  uVar2 = *(undefined4 *)(puVar16 + 0x4028);
  pcVar3 = *(char **)(puVar16 + 0x4024);
  pcVar4 = *(char **)(puVar16 + 0x402c);
  *(DWORD *)(puVar16 + -4) = DVar7;
  *(undefined4 *)(puVar16 + -8) = uVar2;
  *(char **)(puVar16 + -0xc) = pcVar3;
  *(char **)(puVar16 + -0x10) = pcVar4;
  *(DWORD *)(puVar16 + 0x14) = DVar7;
  *(undefined4 *)(puVar16 + -0x14) = 0x405b80;
  iVar8 = FUN_00402720(*(char **)(puVar16 + -0x10),*(char **)(puVar16 + -0xc),
                       *(undefined4 *)(puVar16 + -8),*(undefined4 *)(puVar16 + -4));
  if (iVar8 == 0) {
    *(undefined4 *)(puVar16 + -4) = 2;
    *(char **)(puVar16 + -8) = pcVar3;
    *(undefined4 *)(puVar16 + -0xc) = 0x405b9b;
    pvVar9 = charlist_getdata(*(uchar **)(puVar16 + -8),*(int *)(puVar16 + -4));
    *(undefined4 *)(puVar16 + -0xc) = 1;
    *(char **)(puVar16 + -0x10) = pcVar3;
    *(void **)(puVar16 + 0x10) = pvVar9;
    *(undefined4 *)(puVar16 + -0x14) = 0x405ba7;
    pvVar9 = charlist_getdata(*(uchar **)(puVar16 + -0x10),*(int *)(puVar16 + -0xc));
    if ((pvVar9 != (void *)0x0) && (*(int *)(puVar16 + 0x10) != 0)) {
      *(undefined4 *)(puVar16 + -4) = 0x60;
      *(void **)(puVar16 + -8) = pvVar9;
      puVar17 = puVar16 + -0xc;
      *(undefined4 *)(puVar16 + -0xc) = 0x405bc9;
      BVar10 = IsBadReadPtr(*(void **)(puVar16 + -8),*(UINT_PTR *)(puVar16 + -4));
      puVar16 = puVar17;
      if (BVar10 == 0) {
        *(undefined4 *)(puVar17 + -4) = 0x90;
        *(undefined4 *)(puVar17 + -8) = *(undefined4 *)(puVar17 + 0x10);
        puVar16 = puVar17 + -0xc;
        *(undefined4 *)(puVar17 + -0xc) = 0x405be1;
        BVar10 = IsBadReadPtr(*(void **)(puVar17 + -8),*(UINT_PTR *)(puVar17 + -4));
        if (((BVar10 == 0) && (*(int *)((int)pvVar9 + 0x54) == *(int *)(puVar16 + 0x10))) &&
           (*(short *)((int)pvVar9 + 0x50) == *(short *)(*(int *)(puVar16 + 0x10) + 0x76))) {
          *(undefined4 *)(puVar16 + -4) = 0x6317c0;
          *(undefined4 *)((int)pvVar9 + 0x4c) = uVar2;
          puVar18 = puVar16 + -8;
          *(undefined4 *)(puVar16 + -8) = 0x405c14;
          LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar16 + -4));
          iVar8 = 0x1001;
          puVar19 = (undefined4 *)(puVar18 + 0x18);
          while (iVar8 != 0) {
            iVar8 = iVar8 + -1;
            *puVar19 = 0;
            puVar19 = puVar19 + 1;
          }
          uVar6 = 0xffffffff;
          pcVar21 = pcVar4;
          do {
            pcVar20 = pcVar21;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar20 = pcVar21 + 1;
            cVar1 = *pcVar21;
            pcVar21 = pcVar20;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          uVar14 = uVar6 >> 2;
          puVar19 = (undefined4 *)(pcVar20 + -uVar6);
          puVar22 = (undefined4 *)(puVar18 + 0x26);
          while (uVar14 != 0) {
            uVar14 = uVar14 - 1;
            *puVar22 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar22 = puVar22 + 1;
          }
          uVar6 = uVar6 & 3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            *(undefined *)puVar22 = *(undefined *)puVar19;
            puVar19 = (undefined4 *)((int)puVar19 + 1);
            puVar22 = (undefined4 *)((int)puVar22 + 1);
          }
          iVar8 = -1;
          pcVar21 = pcVar4;
          do {
            uVar11 = (ushort)iVar8;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            uVar11 = (ushort)iVar8;
            cVar1 = *pcVar21;
            pcVar21 = pcVar21 + 1;
          } while (cVar1 != '\0');
          uVar6 = 0xffffffff;
          pcVar21 = pcVar4;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar21;
            pcVar21 = pcVar21 + 1;
          } while (cVar1 != '\0');
          *(undefined **)(puVar18 + 0x10) = puVar18 + ~uVar6 + 0x26;
          uVar6 = 0xffffffff;
          pcVar21 = pcVar3;
          do {
            pcVar20 = pcVar21;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar20 = pcVar21 + 1;
            cVar1 = *pcVar21;
            pcVar21 = pcVar20;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          uVar14 = uVar6 >> 2;
          puVar19 = (undefined4 *)(pcVar20 + -uVar6);
          puVar22 = *(undefined4 **)(puVar18 + 0x10);
          while (uVar14 != 0) {
            uVar14 = uVar14 - 1;
            *puVar22 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar22 = puVar22 + 1;
          }
          uVar6 = uVar6 & 3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            *(undefined *)puVar22 = *(undefined *)puVar19;
            puVar19 = (undefined4 *)((int)puVar19 + 1);
            puVar22 = (undefined4 *)((int)puVar22 + 1);
          }
          iVar8 = -1;
          pcVar21 = pcVar3;
          do {
            uVar12 = (ushort)iVar8;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            uVar12 = (ushort)iVar8;
            cVar1 = *pcVar21;
            pcVar21 = pcVar21 + 1;
          } while (cVar1 != '\0');
          uVar6 = 0xffffffff;
          pcVar21 = pcVar3;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar21;
            pcVar21 = pcVar21 + 1;
          } while (cVar1 != '\0');
          uVar14 = 0xffffffff;
          *(uint *)(puVar18 + 0x10) = ~uVar6 + *(int *)(puVar18 + 0x10);
          puVar19 = &realmname;
          do {
            puVar22 = puVar19;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            puVar22 = (undefined4 *)((int)puVar19 + 1);
            cVar1 = *(char *)puVar19;
            puVar19 = puVar22;
          } while (cVar1 != '\0');
          uVar14 = ~uVar14;
          uVar6 = uVar14 >> 2;
          puVar19 = (undefined4 *)((int)puVar22 - uVar14);
          puVar22 = *(undefined4 **)(puVar18 + 0x10);
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            *puVar22 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar22 = puVar22 + 1;
          }
          uVar14 = uVar14 & 3;
          while (uVar14 != 0) {
            uVar14 = uVar14 - 1;
            *(undefined *)puVar22 = *(undefined *)puVar19;
            puVar19 = (undefined4 *)((int)puVar19 + 1);
            puVar22 = (undefined4 *)((int)puVar22 + 1);
          }
          iVar8 = -1;
          puVar19 = &realmname;
          do {
            uVar13 = (ushort)iVar8;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            uVar13 = (ushort)iVar8;
            cVar1 = *(char *)puVar19;
            puVar19 = (undefined4 *)((int)puVar19 + 1);
          } while (cVar1 != '\0');
          *(undefined2 *)(puVar18 + 0x24) = 1;
          *(undefined2 *)(puVar18 + 0x1e) = 0x31;
          *(undefined2 *)(puVar18 + 0x18) = 4;
          sVar5 = ~uVar11 + ~uVar12 + ~uVar13 + 10;
          *(short *)(puVar18 + 0x1c) = sVar5;
          *(undefined **)(puVar18 + -4) = puVar18 + 0x18;
          *(undefined4 *)(puVar18 + 0x20) = *(undefined4 *)(puVar18 + 0x14);
          *(short *)(puVar18 + 0x1a) = sVar5;
          *(undefined4 *)(puVar18 + -8) = 0x405d12;
          D2GSNetSendPacket(*(D2GSPACKET **)(puVar18 + -4));
          *(char **)(puVar18 + -8) = pcVar4;
          *(char **)(puVar18 + -0xc) = pcVar3;
          *(undefined4 *)(puVar18 + -0x10) = 0x40ebac;
          *(undefined4 *)(puVar18 + -0x14) = 0x40eb90;
          *(undefined4 *)(puVar18 + -0x18) = 0x405d23;
          D2GSEventLog(*(char **)(puVar18 + -0x14),*(char **)(puVar18 + -0x10));
          return;
        }
      }
    }
    *(char **)(puVar16 + -4) = pcVar4;
    *(char **)(puVar16 + -8) = pcVar3;
    *(undefined4 *)(puVar16 + -0xc) = 0x40eb48;
  }
  else {
    *(char **)(puVar16 + -4) = pcVar4;
    *(char **)(puVar16 + -8) = pcVar3;
    *(undefined4 *)(puVar16 + -0xc) = 0x40ebd8;
  }
  *(undefined4 *)(puVar16 + -0x10) = 0x40eb90;
  *(undefined4 *)(puVar16 + -0x14) = 0x405d42;
  D2GSEventLog(*(char **)(puVar16 + -0x10),*(char **)(puVar16 + -0xc));
  *(undefined4 *)(puVar16 + -4) = 1;
  *(undefined4 *)(puVar16 + -8) = 0;
  *(undefined4 *)(puVar16 + -0xc) = 0;
  *(undefined4 *)(puVar16 + -0x10) = 1;
  *(undefined4 *)(puVar16 + -0x14) = 0;
  *(undefined4 *)(puVar16 + -0x18) = 0;
  *(undefined4 *)(puVar16 + -0x1c) = 0;
  *(undefined4 *)(puVar16 + -0x20) = uVar2;
  *(undefined4 *)(puVar16 + -0x24) = 0x405d5a;
  (*_D2GSSendDatabaseCharacter)();
  return;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl
D2GSCBSaveDatabaseCharacter
          (undefined4 param_1,undefined2 param_2,short param_3,undefined4 param_4,undefined2 param_5
          )

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  short sVar11;
  undefined4 unaff_ESI;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 unaff_EDI;
  char *pcVar14;
  int *piVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 *puVar18;
  
  uVar4 = 0x400c;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar4 = uVar4 - 0x1000;
    } while (0xfff < uVar4);
  }
  piVar10 = (int *)((undefined *)register0x00000010 + -uVar4);
  piVar10[-1] = 0x405d7a;
  piVar10[-1] = unaff_EBX;
  piVar10[-2] = unaff_EBP;
  piVar10[-3] = unaff_ESI;
  piVar10[-4] = unaff_EDI;
  pcVar2 = (char *)piVar10[0x1006];
  iVar6 = 0x1001;
  piVar12 = piVar10 + 2;
  while (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar14 = pcVar2;
  do {
    pcVar17 = pcVar14;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar17 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar17;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  uVar7 = uVar4 >> 2;
  pcVar14 = (char *)piVar10[0x1005];
  piVar12 = (int *)(pcVar17 + -uVar4);
  piVar15 = piVar10 + 6;
  while (uVar7 != 0) {
    uVar7 = uVar7 - 1;
    *piVar15 = *piVar12;
    piVar12 = piVar12 + 1;
    piVar15 = piVar15 + 1;
  }
  uVar4 = uVar4 & 3;
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    *(undefined *)piVar15 = *(undefined *)piVar12;
    piVar12 = (int *)((int)piVar12 + 1);
    piVar15 = (int *)((int)piVar15 + 1);
  }
  uVar4 = 0xffffffff;
  pcVar17 = pcVar2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0xffffffff;
  pcVar17 = pcVar2;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar1 != '\0');
  *piVar10 = (int)piVar10 + ~uVar7 + 0x18;
  uVar7 = 0xffffffff;
  pcVar17 = pcVar14;
  do {
    pcVar16 = pcVar17;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar16 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar16;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  uVar8 = uVar7 >> 2;
  puVar13 = (undefined4 *)(pcVar16 + -uVar7);
  puVar18 = (undefined4 *)*piVar10;
  while (uVar8 != 0) {
    uVar8 = uVar8 - 1;
    *puVar18 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar7 = uVar7 & 3;
  while (uVar7 != 0) {
    uVar7 = uVar7 - 1;
    *(undefined *)puVar18 = *(undefined *)puVar13;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
    puVar18 = (undefined4 *)((int)puVar18 + 1);
  }
  uVar7 = 0xffffffff;
  pcVar17 = pcVar14;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar1 != '\0');
  uVar8 = 0xffffffff;
  pcVar17 = pcVar14;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar1 != '\0');
  *piVar10 = *piVar10 + ~uVar8;
  uVar8 = 0xffffffff;
  puVar13 = &realmname;
  do {
    puVar18 = puVar13;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    puVar18 = (undefined4 *)((int)puVar13 + 1);
    cVar1 = *(char *)puVar13;
    puVar13 = puVar18;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  uVar9 = uVar8 >> 2;
  puVar13 = (undefined4 *)((int)puVar18 - uVar8);
  puVar18 = (undefined4 *)*piVar10;
  while (uVar9 != 0) {
    uVar9 = uVar9 - 1;
    *puVar18 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar8 = uVar8 & 3;
  while (uVar8 != 0) {
    uVar8 = uVar8 - 1;
    *(undefined *)puVar18 = *(undefined *)puVar13;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
    puVar18 = (undefined4 *)((int)puVar18 + 1);
  }
  uVar8 = 0xffffffff;
  puVar13 = &realmname;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *(char *)puVar13;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  } while (cVar1 != '\0');
  iVar6 = piVar10[0x1008];
  piVar10[1] = ~uVar4 + ~uVar7 + ~uVar8 + 0xc;
  uVar4 = 0xffffffff;
  puVar13 = &realmname;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *(char *)puVar13;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  } while (cVar1 != '\0');
  uVar7 = iVar6 - 2U >> 2;
  puVar13 = (undefined4 *)(piVar10[0x1007] + 2);
  puVar18 = (undefined4 *)(~uVar4 + *piVar10);
  while (uVar7 != 0) {
    uVar7 = uVar7 - 1;
    *puVar18 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar18 = puVar18 + 1;
  }
  iVar3 = piVar10[0x1008];
  uVar4 = iVar6 - 2U & 3;
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    *(undefined *)puVar18 = *(undefined *)puVar13;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
    puVar18 = (undefined4 *)((int)puVar18 + 1);
  }
  *(undefined2 *)(piVar10 + 5) = 1;
  *(undefined2 *)((int)piVar10 + 0xe) = 0x30;
  sVar11 = (short)piVar10[1] + -2 + (short)iVar3;
  *(short *)((int)piVar10 + 0x16) = (short)iVar3 + -2;
  *(short *)(piVar10 + 3) = sVar11;
  piVar10[-5] = 0x405ec5;
  DVar5 = D2GSGetSequence(*(undefined *)(piVar10 + -5));
  piVar10[4] = DVar5;
  *(int **)(piVar10 + -5) = piVar10 + 2;
  *(short *)((int)piVar10 + 10) = sVar11;
  *(undefined2 *)(piVar10 + 2) = 4;
  piVar10[-6] = 0x405edf;
  D2GSNetSendPacket((D2GSPACKET *)piVar10[-5]);
  *(char **)(piVar10 + -6) = pcVar2;
  *(char **)(piVar10 + -7) = pcVar14;
  piVar10[-8] = 0x40ec20;
  piVar10[-9] = 0x40ec04;
  piVar10[-10] = 0x405ef0;
  D2GSEventLog((char *)piVar10[-9],(char *)piVar10[-8]);
  return;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl
D2GSWriteCharInfoFile
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,int param_7)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  void *pvVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 unaff_EDI;
  int *piVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 *puVar19;
  time_t tVar20;
  
  uVar5 = 0x40cc;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar5 = uVar5 - 0x1000;
    } while (0xfff < uVar5);
  }
  piVar12 = (int *)((undefined *)register0x00000010 + -uVar5);
  piVar12[-1] = 0x405f0a;
  piVar12[-1] = unaff_EBX;
  pcVar2 = (char *)piVar12[0x1035];
  piVar12[-2] = unaff_EBP;
  piVar12[-3] = unaff_ESI;
  piVar12[-4] = unaff_EDI;
  piVar12[-5] = 1;
  *(char **)(piVar12 + -6) = pcVar2;
  piVar12[-7] = 0x405f1d;
  pvVar6 = charlist_getdata((uchar *)piVar12[-6],piVar12[-5]);
  if (pvVar6 == (void *)0x0) {
    piVar12[-5] = piVar12[0x1034];
    *(char **)(piVar12 + -6) = pcVar2;
    piVar12[-7] = 0x40ecc0;
  }
  else {
    iVar10 = *(int *)((int)pvVar6 + 0x48);
    iVar3 = *(int *)((int)pvVar6 + 0x44);
    iVar8 = 0x30;
    piVar12[-5] = 0;
    piVar15 = piVar12 + 2;
    while (iVar8 != 0) {
      iVar8 = iVar8 + -1;
      *piVar15 = 0;
      piVar15 = piVar15 + 1;
    }
    piVar12[-6] = 0x405f51;
    tVar20 = time((time_t *)piVar12[-5]);
    piVar12[5] = (int)tVar20;
    pcVar4 = (char *)piVar12[0x1034];
    piVar12[-6] = 0xf;
    piVar12[7] = piVar12[7] + ((int)tVar20 - iVar3);
    piVar12[4] = iVar10;
    *(char **)(piVar12 + -7) = pcVar4;
    *(int **)(piVar12 + -8) = piVar12 + 0x12;
    piVar12[2] = 0x12345678;
    piVar12[3] = 0x10000;
    piVar12[-9] = 0x405f8c;
    strncpy((char *)piVar12[-8],(char *)piVar12[-7],piVar12[-6]);
    piVar12[-9] = 0xf;
    *(char **)(piVar12 + -10) = pcVar2;
    *(int **)(piVar12 + -0xb) = piVar12 + 0xe;
    piVar12[-0xc] = 0x405f96;
    strncpy((char *)piVar12[-0xb],(char *)piVar12[-10],piVar12[-9]);
    uVar5 = 0xffffffff;
    puVar14 = &realmname;
    do {
      puVar19 = puVar14;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      puVar19 = (undefined4 *)((int)puVar14 + 1);
      cVar1 = *(char *)puVar14;
      puVar14 = puVar19;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar10 = piVar12[0x1037];
    uVar9 = uVar5 >> 2;
    piVar15 = (int *)((int)puVar19 - uVar5);
    piVar13 = piVar12 + 0x16;
    while (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      *piVar13 = *piVar15;
      piVar15 = piVar15 + 1;
      piVar13 = piVar13 + 1;
    }
    uVar9 = piVar12[0x1036];
    uVar5 = uVar5 & 3;
    while (uVar5 != 0) {
      uVar5 = uVar5 - 1;
      *(undefined *)piVar13 = *(undefined *)piVar15;
      piVar15 = (int *)((int)piVar15 + 1);
      piVar13 = (int *)((int)piVar13 + 1);
    }
    piVar12[0x30] = iVar10;
    piVar15 = (int *)piVar12[0x103a];
    piVar12[0x2e] = piVar12[0x1038];
    piVar12[0x31] = uVar9 & 0xffff;
    piVar12[0x2f] = piVar12[0x1039] & 0xffff;
    uVar5 = 0xffffffff;
    piVar13 = piVar15;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)piVar13;
      piVar13 = (int *)((int)piVar13 + 1);
    } while (cVar1 != '\0');
    if (~uVar5 < 0x23) {
      uVar5 = 0xffffffff;
      piVar13 = piVar15;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *(char *)piVar13;
        piVar13 = (int *)((int)piVar13 + 1);
      } while (cVar1 != '\0');
      uVar9 = ~uVar5 >> 2;
      piVar13 = piVar12 + 0x1e;
      while (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        *piVar13 = *piVar15;
        piVar15 = piVar15 + 1;
        piVar13 = piVar13 + 1;
      }
      uVar5 = ~uVar5 & 3;
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        *(undefined *)piVar13 = *(undefined *)piVar15;
        piVar15 = (int *)((int)piVar15 + 1);
        piVar13 = (int *)((int)piVar13 + 1);
      }
    }
    else {
      iVar10 = 8;
      piVar13 = piVar15;
      piVar16 = piVar12 + 0x1e;
      while (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        *piVar16 = *piVar13;
        piVar13 = piVar13 + 1;
        piVar16 = piVar16 + 1;
      }
      *(undefined2 *)piVar16 = *(undefined2 *)piVar13;
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *(char *)piVar15;
        piVar15 = (int *)((int)piVar15 + 1);
      } while (cVar1 != '\0');
      piVar12[-5] = ~uVar5;
      *(char **)(piVar12 + -6) = pcVar4;
      *(char **)(piVar12 + -7) = pcVar2;
      piVar12[-8] = 0x40ec94;
      piVar12[-9] = 0x40ec7c;
      piVar12[-10] = 0x406046;
      D2GSEventLog((char *)piVar12[-9],(char *)piVar12[-8]);
    }
    if (((*(byte *)((int)piVar12 + 0x91) != 0) && (*(byte *)((int)piVar12 + 0x91) < 100)) &&
       ((*(uint *)((int)piVar12 + 0x85) & 0xff) - 1 == (piVar12[0x1036] & 0xffU))) {
      iVar10 = 0x1001;
      piVar15 = piVar12 + 0x32;
      while (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        *piVar15 = 0;
        piVar15 = piVar15 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar18 = pcVar4;
      do {
        pcVar17 = pcVar18;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar17 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar17;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      uVar9 = uVar5 >> 2;
      piVar15 = (int *)(pcVar17 + -uVar5);
      piVar13 = piVar12 + 0x36;
      while (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        *piVar13 = *piVar15;
        piVar15 = piVar15 + 1;
        piVar13 = piVar13 + 1;
      }
      uVar5 = uVar5 & 3;
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        *(undefined *)piVar13 = *(undefined *)piVar15;
        piVar15 = (int *)((int)piVar15 + 1);
        piVar13 = (int *)((int)piVar13 + 1);
      }
      uVar5 = 0xffffffff;
      pcVar18 = pcVar4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      } while (cVar1 != '\0');
      uVar9 = 0xffffffff;
      pcVar18 = pcVar4;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      } while (cVar1 != '\0');
      piVar12[1] = (int)piVar12 + ~uVar9 + 0xd8;
      uVar9 = 0xffffffff;
      pcVar18 = pcVar2;
      do {
        pcVar17 = pcVar18;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar17 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar17;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      uVar11 = uVar9 >> 2;
      puVar14 = (undefined4 *)(pcVar17 + -uVar9);
      puVar19 = (undefined4 *)piVar12[1];
      while (uVar11 != 0) {
        uVar11 = uVar11 - 1;
        *puVar19 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar19 = puVar19 + 1;
      }
      uVar9 = uVar9 & 3;
      while (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        *(undefined *)puVar19 = *(undefined *)puVar14;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
      uVar9 = 0xffffffff;
      pcVar18 = pcVar2;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      } while (cVar1 != '\0');
      iVar10 = piVar12[1];
      *piVar12 = ~uVar5 + ~uVar9 + 0xc;
      uVar5 = 0xffffffff;
      pcVar18 = pcVar2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      } while (cVar1 != '\0');
      uVar9 = 0xffffffff;
      puVar14 = &realmname;
      do {
        puVar19 = puVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        puVar19 = (undefined4 *)((int)puVar14 + 1);
        cVar1 = *(char *)puVar14;
        puVar14 = puVar19;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      uVar11 = uVar9 >> 2;
      puVar14 = (undefined4 *)((int)puVar19 - uVar9);
      puVar19 = (undefined4 *)(iVar10 + ~uVar5);
      while (uVar11 != 0) {
        uVar11 = uVar11 - 1;
        *puVar19 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar19 = puVar19 + 1;
      }
      uVar9 = uVar9 & 3;
      while (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        *(undefined *)puVar19 = *(undefined *)puVar14;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
      uVar9 = 0xffffffff;
      puVar14 = &realmname;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *(char *)puVar14;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      } while (cVar1 != '\0');
      *piVar12 = *piVar12 + ~uVar9;
      uVar9 = 0xffffffff;
      puVar14 = &realmname;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *(char *)puVar14;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      } while (cVar1 != '\0');
      iVar3 = *piVar12;
      *piVar12 = iVar3 + 0xc0;
      iVar8 = 0x30;
      piVar15 = piVar12 + 2;
      piVar13 = (int *)(~uVar9 + (int)(undefined4 *)(iVar10 + ~uVar5));
      while (iVar8 != 0) {
        iVar8 = iVar8 + -1;
        *piVar13 = *piVar15;
        piVar15 = piVar15 + 1;
        piVar13 = piVar13 + 1;
      }
      *(undefined2 *)(piVar12 + 0x35) = 2;
      *(undefined2 *)((int)piVar12 + 0xd6) = 0xc0;
      *(undefined2 *)((int)piVar12 + 0xce) = 0x30;
      *(short *)(piVar12 + 0x33) = (short)(iVar3 + 0xc0);
      piVar12[-5] = 0x4061d6;
      DVar7 = D2GSGetSequence(*(undefined *)(piVar12 + -5));
      piVar12[0x34] = DVar7;
      *(undefined2 *)((int)piVar12 + 0xca) = *(undefined2 *)piVar12;
      *(int **)(piVar12 + -5) = piVar12 + 0x32;
      *(undefined2 *)(piVar12 + 0x32) = 4;
      piVar12[-6] = 0x406201;
      D2GSNetSendPacket((D2GSPACKET *)piVar12[-5]);
      *(char **)(piVar12 + -6) = pcVar4;
      *(char **)(piVar12 + -7) = pcVar2;
      piVar12[-8] = 0x40ec5c;
      piVar12[-9] = 0x40ec7c;
      piVar12[-10] = 0x406212;
      D2GSEventLog((char *)piVar12[-9],(char *)piVar12[-8]);
      return;
    }
    *(char **)(piVar12 + -5) = pcVar4;
    *(char **)(piVar12 + -6) = pcVar2;
    piVar12[-7] = 0x40ec3c;
  }
  piVar12[-8] = 0x40ec7c;
  piVar12[-9] = 0x406231;
  D2GSEventLog((char *)piVar12[-8],(char *)piVar12[-7]);
  return;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl
D2GSUpdateCharacterLadder
          (short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
          ,undefined2 param_6)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  void *pvVar4;
  DWORD DVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  short sVar12;
  undefined4 unaff_ESI;
  undefined4 *puVar13;
  undefined4 unaff_EDI;
  char *pcVar14;
  char *pcVar15;
  undefined4 *puVar16;
  
  uVar3 = 0x4004;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar3 = uVar3 - 0x1000;
    } while (0xfff < uVar3);
  }
  puVar11 = (undefined4 *)((undefined *)register0x00000010 + -uVar3);
  puVar11[-1] = 0x40624a;
  puVar11[-1] = unaff_EBX;
  pcVar2 = (char *)puVar11[0x1002];
  puVar11[-2] = 1;
  *(char **)(puVar11 + -3) = pcVar2;
  puVar11[-4] = 0x40625a;
  pvVar4 = charlist_getdata((uchar *)puVar11[-3],puVar11[-2]);
  if (pvVar4 == (void *)0x0) {
    *(char **)(puVar11 + -2) = pcVar2;
    puVar11[-3] = 0x40ed14;
    puVar11[-4] = 0x40ecf8;
    puVar11[-5] = 0x406271;
    D2GSEventLog((char *)puVar11[-4],(char *)puVar11[-3]);
    return;
  }
  if (*(short *)((int)pvVar4 + 0x3e) != 0) {
    puVar11[-2] = unaff_EBP;
    puVar11[-3] = unaff_ESI;
    puVar11[-4] = unaff_EDI;
    iVar8 = 0x1001;
    puVar13 = puVar11;
    while (iVar8 != 0) {
      iVar8 = iVar8 + -1;
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar15 = pcVar2;
    do {
      pcVar14 = pcVar15;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar14 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar14;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    uVar9 = uVar3 >> 2;
    puVar13 = (undefined4 *)(pcVar14 + -uVar3);
    puVar16 = puVar11 + 7;
    while (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      *puVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    }
    uVar3 = uVar3 & 3;
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      *(undefined *)puVar16 = *(undefined *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }
    iVar8 = -1;
    pcVar15 = pcVar2;
    do {
      uVar6 = (ushort)iVar8;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      uVar6 = (ushort)iVar8;
      cVar1 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar1 != '\0');
    uVar3 = 0xffffffff;
    pcVar15 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar1 != '\0');
    uVar9 = 0xffffffff;
    puVar13 = &realmname;
    do {
      puVar16 = puVar13;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      puVar16 = (undefined4 *)((int)puVar13 + 1);
      cVar1 = *(char *)puVar13;
      puVar13 = puVar16;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    uVar10 = uVar9 >> 2;
    puVar13 = (undefined4 *)((int)puVar16 - uVar9);
    puVar16 = (undefined4 *)((int)puVar11 + ~uVar3 + 0x1c);
    while (uVar10 != 0) {
      uVar10 = uVar10 - 1;
      *puVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    }
    uVar9 = uVar9 & 3;
    while (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      *(undefined *)puVar16 = *(undefined *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }
    iVar8 = -1;
    puVar13 = &realmname;
    do {
      uVar7 = (ushort)iVar8;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      uVar7 = (ushort)iVar8;
      cVar1 = *(char *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    } while (cVar1 != '\0');
    puVar11[5] = puVar11[0x1006];
    *(undefined2 *)((int)puVar11 + 6) = 0x32;
    sVar12 = ~uVar6 + ~uVar7 + 0x18;
    puVar11[3] = puVar11[0x1004];
    puVar11[4] = puVar11[0x1005];
    *(undefined2 *)(puVar11 + 6) = *(undefined2 *)(puVar11 + 0x1003);
    *(undefined2 *)((int)puVar11 + 0x1a) = *(undefined2 *)(puVar11 + 0x1007);
    *(short *)(puVar11 + 1) = sVar12;
    puVar11[-5] = 0x406356;
    DVar5 = D2GSGetSequence(*(undefined *)(puVar11 + -5));
    puVar11[2] = DVar5;
    *(undefined4 **)(puVar11 + -5) = puVar11;
    *(short *)((int)puVar11 + 2) = sVar12;
    *(undefined2 *)puVar11 = 4;
    puVar11[-6] = 0x406370;
    D2GSNetSendPacket((D2GSPACKET *)puVar11[-5]);
    puVar11[-6] = 0x631be0;
    *(char **)(puVar11 + -7) = pcVar2;
    puVar11[-8] = 0x40ece0;
    puVar11[-9] = 0x40ecf8;
    puVar11[-10] = 0x406385;
    D2GSEventLog((char *)puVar11[-9],(char *)puVar11[-8]);
  }
  return;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack

void __cdecl
D2GSSetCharLockStatus(LPCSTR lpAccountName,LPCSTR lpCharName,uchar *param_3,DWORD param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  DWORD DVar4;
  char *pcVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  short sVar12;
  undefined4 unaff_ESI;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 unaff_EDI;
  char *pcVar15;
  int *piVar16;
  char *pcVar17;
  undefined4 *puVar18;
  
  uVar3 = 0x4008;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar3 = uVar3 - 0x1000;
    } while (0xfff < uVar3);
  }
  piVar11 = (int *)((undefined *)register0x00000010 + -uVar3);
  piVar11[-1] = 0x4066fa;
  piVar11[-1] = unaff_EBX;
  piVar11[-2] = unaff_EBP;
  piVar11[-3] = unaff_ESI;
  piVar11[-4] = unaff_EDI;
  pcVar2 = (char *)piVar11[0x1003];
  iVar9 = 0x1001;
  piVar13 = piVar11;
  while (piVar13 = piVar13 + 1, iVar9 != 0) {
    iVar9 = iVar9 + -1;
    *piVar13 = 0;
  }
  uVar3 = 0xffffffff;
  pcVar15 = pcVar2;
  do {
    pcVar5 = pcVar15;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  uVar10 = uVar3 >> 2;
  pcVar15 = (char *)piVar11[0x1004];
  piVar13 = (int *)(pcVar5 + -uVar3);
  piVar16 = piVar11 + 5;
  while (uVar10 != 0) {
    uVar10 = uVar10 - 1;
    *piVar16 = *piVar13;
    piVar13 = piVar13 + 1;
    piVar16 = piVar16 + 1;
  }
  uVar3 = uVar3 & 3;
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    *(undefined *)piVar16 = *(undefined *)piVar13;
    piVar13 = (int *)((int)piVar13 + 1);
    piVar16 = (int *)((int)piVar16 + 1);
  }
  iVar9 = -1;
  pcVar5 = pcVar2;
  do {
    uVar6 = (ushort)iVar9;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    uVar6 = (ushort)iVar9;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar5 = pcVar2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  *piVar11 = (int)piVar11 + ~uVar3 + 0x14;
  uVar3 = 0xffffffff;
  pcVar5 = pcVar15;
  do {
    pcVar17 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar17 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar17;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  uVar10 = uVar3 >> 2;
  puVar14 = (undefined4 *)(pcVar17 + -uVar3);
  puVar18 = (undefined4 *)*piVar11;
  while (uVar10 != 0) {
    uVar10 = uVar10 - 1;
    *puVar18 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar3 = uVar3 & 3;
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    *(undefined *)puVar18 = *(undefined *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar18 = (undefined4 *)((int)puVar18 + 1);
  }
  iVar9 = -1;
  pcVar5 = pcVar15;
  do {
    uVar7 = (ushort)iVar9;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    uVar7 = (ushort)iVar9;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar5 = pcVar15;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar10 = 0xffffffff;
  *piVar11 = ~uVar3 + *piVar11;
  pcVar5 = (char *)piVar11[0x1005];
  do {
    pcVar17 = pcVar5;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar17 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar17;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  uVar3 = uVar10 >> 2;
  puVar14 = (undefined4 *)(pcVar17 + -uVar10);
  puVar18 = (undefined4 *)*piVar11;
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    *puVar18 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar10 = uVar10 & 3;
  while (uVar10 != 0) {
    uVar10 = uVar10 - 1;
    *(undefined *)puVar18 = *(undefined *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar18 = (undefined4 *)((int)puVar18 + 1);
  }
  iVar9 = -1;
  pcVar5 = (char *)piVar11[0x1005];
  do {
    uVar8 = (ushort)iVar9;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    uVar8 = (ushort)iVar9;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar9 = piVar11[0x1006];
  *(undefined2 *)((int)piVar11 + 10) = 0x33;
  piVar11[4] = iVar9;
  sVar12 = ~uVar6 + ~uVar7 + ~uVar8 + 0xc;
  *(short *)(piVar11 + 2) = sVar12;
  piVar11[-5] = 0x4067f9;
  DVar4 = D2GSGetSequence(*(undefined *)(piVar11 + -5));
  piVar11[3] = DVar4;
  *(int **)(piVar11 + -5) = piVar11 + 1;
  *(short *)((int)piVar11 + 6) = sVar12;
  *(undefined2 *)(piVar11 + 1) = 4;
  piVar11[-6] = 0x406813;
  D2GSNetSendPacket((D2GSPACKET *)piVar11[-5]);
  pcVar5 = s_LOCKED_0040eed0;
  if (iVar9 == 0) {
    pcVar5 = s_UNLOCKED_0040eec4;
  }
  piVar11[-5] = piVar11[0x1005];
  *(char **)(piVar11 + -6) = pcVar2;
  *(char **)(piVar11 + -7) = pcVar15;
  *(char **)(piVar11 + -8) = pcVar5;
  piVar11[-9] = 0x40ee98;
  piVar11[-10] = 0x40ee80;
  piVar11[-0xb] = 0x40683e;
  D2GSEventLog((char *)piVar11[-10],(char *)piVar11[-9]);
  return;
}



void __cdecl D2GSUnlockChar(LPCSTR lpAccountName,LPCSTR lpCharName)

{
  D2GSSetCharLockStatus(lpAccountName,lpCharName,(uchar *)&realmname,0);
  return;
}



void FUN_00406870(void)

{
  uint local_8;
  int local_4;
  
  if (MaxPreferUsers != 0) {
    FUN_00402120(&local_4,(int *)&local_8);
    if (local_8 < MaxPreferUsers) {
      if (((MaxPreferUsers < 10) || (local_8 < MaxPreferUsers - 8)) && (DAT_00631838 != MaxGames)) {
        D2GSSetD2CSMaxGameNumber(MaxGames);
      }
    }
    else {
      if (DAT_00631838 != 0) {
        D2GSSetD2CSMaxGameNumber(0);
        return;
      }
    }
  }
  return;
}



int main(HINSTANCE param_1,HINSTANCE param_2,LPCSTR param_3,int param_4)

{
  int iVar1;
  DWORD DVar2;
  char *fmt;
  
  DAT_00411420 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00411400);
  iVar1 = D2GSEventLogInitialize();
  if (iVar1 != 0) {
    SetConsoleCtrlHandler(ControlHandler,1);
    iVar1 = FUN_00406b80();
    if (iVar1 == 0) {
      hStopEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,s_D2GSERVER_WHO_STOP_ME_0040f02c);
      if (hStopEvent == (HANDLE)0x0) {
        fmt = s_failed_create_stop_event_object_0040f00c;
      }
      else {
        iVar1 = D2GSVarsInitialize();
        if (iVar1 == 0) {
          fmt = s_Failed_initialize_global_variabl_0040efe8;
        }
        else {
          iVar1 = D2GSReadConfig();
          if (iVar1 == 0) {
            fmt = s_Failed_getting_configurations_fr_0040efbc;
          }
          else {
            iVar1 = D2GEStartup();
            if (iVar1 == 0) {
              D2GSEventLog(s_main_0040ef94,s_Failed_startup_the_D2GameEngine_0040ef9c);
              D2GSEventLog(s_main_0040ef94,s_Please_enable_GELog__and_see_the_0040ef68);
              DoCleanup();
              return -1;
            }
            iVar1 = D2GSNetInitialize();
            if (iVar1 == 0) {
              fmt = s_Failed_Startup_Net_Connector_0040ef48;
            }
            else {
              iVar1 = D2GSAdminInitialize();
              if (iVar1 == 0) {
                fmt = s_Failed_Startup_Administration_Co_0040ef20;
              }
              else {
                watchdog_init();
                iVar1 = D2GSTimerInitialize();
                if (iVar1 != 0) {
                  D2GSEventLog(s_main_0040ef94,s_Entering_Main_Server_Loop_0040eeec);
                  do {
                    DVar2 = WaitForSingleObject(hStopEvent,1000);
                  } while (DVar2 != 0);
                  D2GSSetD2CSMaxGameNumber(0);
                  D2GSActive(0);
                  EnableGSLog = 1;
                  D2GSEventLog(s_main_0040ef94,s_I_am_going_to_stop_0040eed8);
                  EnableGSLog = 1;
                  SaveAllGames(5000);
                  EnableGSLog = 0;
                  Sleep(3000);
                  FUN_00406f50(0);
                  return 0;
                }
                fmt = s_Failed_Startup_Timer_0040ef08;
              }
            }
          }
        }
      }
    }
    else {
      fmt = s_Seems_another_server_is_running_0040f044;
    }
    D2GSEventLog(s_main_0040ef94,fmt);
    DoCleanup();
  }
  return -1;
}



int __cdecl CleanupRoutineInsert(void *param_1,char *param_2)

{
  undefined4 *_Dest;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  _Dest = (undefined4 *)malloc(0x48);
  if (_Dest != (undefined4 *)0x0) {
    iVar1 = 0x12;
    puVar2 = _Dest;
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if (param_2 == (char *)0x0) {
      param_2 = s_unknown_0040ea0c;
    }
    strncpy((char *)_Dest,param_2,0x3f);
    *(void **)(_Dest + 0x10) = param_1;
    *(undefined4 **)(_Dest + 0x11) = DAT_00411420;
    DAT_00411420 = _Dest;
    return 1;
  }
  D2GSEventLog(s_CleanupRoutineInsert_0040f064,s_Can_t_alloc_memory_0040f07c);
  return 0;
}



int DoCleanup(void)

{
  void *pvVar1;
  void *_Memory;
  
  _Memory = (void *)DAT_00411420;
  if (DAT_00411420 != 0) {
    do {
      D2GSEventLog(s_DoCleanup_0040f0a0,s_Calling_cleanup_routine___s__0040f0ac,_Memory);
      (**(code **)((int)_Memory + 0x40))();
      pvVar1 = *(void **)((int)_Memory + 0x44);
      free(_Memory);
      _Memory = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  DAT_00411420 = 0;
  D2GSEventLog(s_DoCleanup_0040f0a0,s_Cleanup_done__0040f090);
  FUN_00403f00();
  if (DAT_00411418 != (HANDLE)0x0) {
    CloseHandle(DAT_00411418);
  }
  if (hStopEvent != (HANDLE)0x0) {
    CloseHandle(hStopEvent);
  }
  return 1;
}



undefined4 FUN_00406b80(void)

{
  HANDLE hObject;
  DWORD DVar1;
  int iVar2;
  
  DAT_00411418 = (HANDLE)0x0;
  hObject = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,s_DIABLO_II_CLOSE_GAME_SERVER_0040f0dc);
  if (hObject != (HANDLE)0x0) {
    DVar1 = GetLastError();
    if (DVar1 != 0xb7) {
      iVar2 = CleanupRoutineInsert(&LAB_00406be0,s_Server_Mutex_0040f0cc);
      if (iVar2 != 0) {
        DAT_00411418 = hObject;
        return 0;
      }
    }
    CloseHandle(hObject);
  }
  return 1;
}



// HandlerRoutine parameter of SetConsoleCtrlHandler
// 

undefined4 ControlHandler(uint param_1)

{
  if (param_1 < 2) {
    D2GSEventLog(s_ControlHandler_0040f0f8,s_CTRL_BREAK_or_CTRL_C_event_caugh_0040f108);
    DoCleanup();
    FUN_00406f50(0);
    return 1;
  }
  return 0;
}



void FUN_00406c40(void)

{
  if (DAT_00411418 != (HANDLE)0x0) {
    CloseHandle(DAT_00411418);
  }
  DAT_00411418 = (HANDLE)0x0;
  return;
}



undefined4 __cdecl D2GSShutdown(undefined4 param_1,DWORD dwSecondsRemaining)

{
  DWORD dwTickCount;
  
  D2GSSetD2CSMaxGameNumber(0);
  D2GSActive(0);
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00411400);
  dwTickCount = GetTickCount();
  DAT_00411424 = param_1;
  DAT_00411428 = dwTickCount + dwSecondsRemaining * 1000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00411400);
  switch(param_1) {
  case 1:
  case 3:
    D2GSEventLog(s_D2GSShutdown_0040f148,s_Restart_GS_in__lu_seconds_0040f158,dwSecondsRemaining);
    return 0;
  case 2:
  case 4:
    D2GSEventLog(s_D2GSShutdown_0040f148,s_Shutdown_GS_in__lu_seconds_0040f12c,dwSecondsRemaining);
  }
  return 0;
}



undefined4 D2GSShutdownTimer(void)

{
  DWORD DVar1;
  uint uVar2;
  char *_Format;
  char local_100 [256];
  
  if (DAT_0041142c + 1 < 10) {
    DAT_0041142c = DAT_0041142c + 1;
    return 0;
  }
  DAT_0041142c = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00411400);
  if ((0 < DAT_00411424) && (DAT_00411424 < 5)) {
    DVar1 = GetTickCount();
    if (DAT_00411428 < DVar1) {
      EnableGSLog = 1;
      SaveAllGames(5000);
      Sleep(3000);
      switch(DAT_00411424) {
      case 1:
        EnableGSLog = 1;
        D2GSEventLog(s_D2GSShutdownTimer_0040f25c,s_Restart_GS_now_0040f270);
        FUN_00403f00();
        EnableGSLog = 0;
        FUN_00406c40();
        FUN_00406f50(0);
      case 3:
        EnableGSLog = 1;
        D2GSEventLog(s_D2GSShutdownTimer_0040f25c,s_D2CS_Restart_GS_now_0040f248);
        FUN_00403f00();
        EnableGSLog = 0;
        FUN_00406c40();
        FUN_00406f50(0);
      case 2:
        EnableGSLog = 1;
        D2GSEventLog(s_D2GSShutdownTimer_0040f25c,s_Shutdown_GS_now_0040f238);
        FUN_00403f00();
        EnableGSLog = 0;
        FUN_00406c40();
        FUN_00406f50(1);
      case 4:
        EnableGSLog = 1;
        D2GSEventLog(s_D2GSShutdownTimer_0040f25c,s_D2CS_Shutdown_GS_now_0040f220);
        FUN_00403f00();
        EnableGSLog = 0;
        FUN_00406c40();
        FUN_00406f50(1);
      }
    }
    uVar2 = (DAT_00411428 - DVar1) / 1000;
    if (uVar2 % 0xf == 0) {
      switch(DAT_00411424) {
      case 1:
        _Format = s_The_game_server_will_restart_in___0040f1a4;
        break;
      case 2:
        _Format = s_The_game_server_will_shutdown_in_0040f174;
        break;
      case 3:
        _Format = s_The_realm_will_restart_in__lu_se_0040f1d0;
        break;
      case 4:
        _Format = s_The_realm_will_shutdown_in__lu_s_0040f1f8;
        break;
      default:
        local_100[0] = '\0';
        goto switchD_00406e7f_caseD_4;
      }
      sprintf(local_100,_Format,uVar2);
      if (local_100[0] != '\0') {
        chat_message_announce_all(4,local_100);
      }
    }
  }
switchD_00406e7f_caseD_4:
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00411400);
  return 0;
}



undefined4 FUN_00406f20(void)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00411400);
  uVar1 = DAT_00411424;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00411400);
  return uVar1;
}



void __cdecl FUN_00406f50(UINT param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00403900();
  if (uVar1 != 0) {
    SaveAllGames(5000);
    Sleep(3000);
  }
  if ((bGERunning != 0) && (D2GSReserved4 != (undefined *)0x0)) {
    (*(code *)D2GSReserved4)();
  }
  ExitProcess(param_1);
  return;
}



int D2GSNetInitialize(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD local_194;
  WSADATA local_190;
  
  FUN_00404350();
  InitializeCriticalSection((LPCRITICAL_SECTION)&csNet);
  hStopEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  if (hStopEvent == (HANDLE)0x0) {
    DVar1 = GetLastError();
    D2GSEventLog(s_D2GSNetInitialize_0040f2fc,s_Failed_in_creating_event_object__0040f310,DVar1);
    return 0;
  }
  NRBInitialize((undefined4 *)&DAT_005114c0,1);
  NRBInitialize((undefined4 *)&DAT_00621508,3);
  FUN_00408010((undefined4 *)&nsbCS,2);
  FUN_00408010((undefined4 *)&DAT_004114a8,4);
  iVar2 = 0x1e;
  puVar3 = &DAT_00411430;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_00411430 = GetTickCount();
  DAT_0041146c = DAT_00411430;
  iVar2 = WSAStartup(2,(LPWSADATA)&local_190);
  if (iVar2 != 0) {
    D2GSEventLog(s_D2GSNetInitialize_0040f2fc,s_Error_in_initializing_Winsock_DL_0040f2d8);
    return 0;
  }
  D2GSResetGameList();
  DAT_0063151c = WSACreateEvent();
  DAT_00631520 = WSACreateEvent();
  if ((DAT_0063151c != (HANDLE)0x0) && (DAT_00631520 != (HANDLE)0x0)) {
    DAT_00631530 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                                (LPTHREAD_START_ROUTINE)&lpStartAddress_00407630,(LPVOID)0x0,0,
                                &local_194);
    if (DAT_00631530 == (HANDLE)0x0) {
      DVar1 = GetLastError();
      D2GSEventLog(s_D2NetInitialize_0040f298,s_Can_t_CreateThread_D2GSNetProces_0040f2a8,DVar1);
    }
    else {
      iVar2 = CleanupRoutineInsert(FUN_00407110,s_D2GS_Network_0040f288);
      if (iVar2 != 0) {
        return 1;
      }
    }
    FUN_00407110();
  }
  return 0;
}



undefined4 FUN_00407110(void)

{
  if (hStopEvent != (HANDLE)0x0) {
    SetEvent(hStopEvent);
    if (DAT_00631530 != (HANDLE)0x0) {
      WaitForSingleObject(DAT_00631530,0xffffffff);
      CloseHandle(DAT_00631530);
      DAT_00631530 = (HANDLE)0x0;
    }
    if (bConnectedToCS != 0) {
      CloseConnectionToD2CS();
    }
    if (DAT_0063151c != 0) {
      WSACloseEvent(DAT_0063151c);
    }
    if (DAT_00631520 != 0) {
      WSACloseEvent(DAT_00631520);
    }
    CloseHandle(hStopEvent);
    hStopEvent = (HANDLE)0x0;
  }
  WSACleanup();
  DeleteCriticalSection((LPCRITICAL_SECTION)&csNet);
  return 1;
}



DWORD D2GSConnectToD2xS(SOCKET flag)

{
  ushort uVar1;
  HANDLE hConnEvent;
  int iVar2;
  DWORD DVar3;
  SOCKET sock;
  char *pcVar4;
  undefined4 unaff_EDI;
  undefined uVar5;
  undefined4 keepalive;
  int bufsize;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  HANDLE local_3c;
  HANDLE local_38;
  byte abStack44 [20];
  int iStack24;
  
  if (bConnectedToCS != 0) {
    CloseConnectionToD2CS();
  }
  hConnEvent = WSACreateEvent();
  if (hConnEvent == (HANDLE)0x0) {
    iVar2 = WSAGetLastError();
    D2GSEventLog(s_D2GSConnectToD2xS_0040f474,s_Can_t_WSACreateEvent__Code___d_0040f488,iVar2);
    return 0;
  }
  DVar3 = WaitForSingleObject(hStopEvent,0);
  sock = flag;
  while ((DVar3 != 0 && (sock = WSASocketA(2,1,0,0,0,0), sock == 0xffffffff))) {
    iVar2 = WSAGetLastError();
    D2GSEventLog(s_D2GSConnectToD2xS_0040f474,s_Can_t_create_new_socket__Code____0040f450,iVar2);
    Sleep(1000);
    DVar3 = WaitForSingleObject(hStopEvent,0);
  }
  keepalive = 1;
  setsockopt(sock,0xffff,8,(char *)&keepalive,4);
  bufsize = 0x8000;
  setsockopt(sock,0xffff,0x1001,(char *)&bufsize,4);
  DVar3 = WaitForSingleObject(hStopEvent,0);
  do {
    if (DVar3 == 0) {
LAB_00407506:
      DVar3 = WaitForSingleObject(hStopEvent,0);
      if ((DVar3 == 0) &&
         (D2GSEventLog(s_D2GSConnectToD2xS_0040f474,s_Cancel_connecting_to_D2CS_0040f33c),
         sock != 0xffffffff)) {
        CloseConnectionToD2CS();
      }
      WSACloseEvent(hConnEvent);
      return 1;
    }
    iVar2 = WSAEventSelect(sock,hConnEvent,0x10);
    if (iVar2 == 0) {
      local_44 = 0;
      local_40 = 0;
      if (flag == 1) {
        local_48 = DAT_00631800;
        uVar1 = DAT_00631808;
      }
      else {
        local_48 = DAT_00631804;
        uVar1 = DAT_0063180a;
      }
      local_4c = (uint)uVar1 << 0x10 | 2;
      iVar2 = WSAConnect(sock,&local_4c,0x10,0,0,0,0);
      if ((iVar2 == 0) || (iVar2 = WSAGetLastError(), iVar2 == 0x2733)) {
        DVar3 = WaitForSingleObject(hStopEvent,0);
        while (DVar3 != 0) {
          local_3c = hStopEvent;
          local_38 = hConnEvent;
          iVar2 = WSAWaitForMultipleEvents(2,&local_3c,0,0xffffffff,0);
          if (iVar2 != 0x102) {
            if (iVar2 == 0) break;
            if (iVar2 == 1) {
              iVar2 = WSAEnumNetworkEvents(sock,hConnEvent,abStack44);
              uVar5 = (undefined)unaff_EDI;
              if (iVar2 == 0) {
                if (((abStack44[0] & 0x10) != 0) && (iStack24 == 0)) {
                  if (flag == 1) {
                    bConnectedToCS = 1;
                    DAT_0040f280 = sock;
                    goto LAB_004074a2;
                  }
                  bConnectedToDBS = 1;
                  DAT_0040f284 = sock;
                }
              }
              else {
                iVar2 = WSAGetLastError();
                D2GSEventLog(s_D2GSConnectToD2xS_0040f474,
                             s_Failed_in_WSAEnumNetworkEvents__C_0040f3c0,iVar2);
              }
              break;
            }
          }
          DVar3 = WaitForSingleObject(hStopEvent,0);
        }
        uVar5 = (undefined)unaff_EDI;
        if (flag == 1) {
          if (bConnectedToCS != 0) {
LAB_004074a2:
            D2GSEventLog(s_D2GSConnectToD2xS_0040f474,s_Connected_to_D2CS_Successfully_0040f378);
            WSAEventSelect(sock,hConnEvent,0);
            D2GSSendClassToD2CS(uVar5);
            D2GSSendNetData(&nsbCS);
            goto LAB_00407506;
          }
          pcVar4 = &DAT_0040f414;
        }
        else {
          if (bConnectedToDBS != 0) {
            D2GSEventLog(s_D2GSConnectToD2xS_0040f474,s_Connected_to_D2DBS_Successfully_0040f358);
            WSAEventSelect(sock,hConnEvent,0);
            D2GSSendClassToD2DBS(uVar5);
            D2GSSendNetData(&DAT_004114a8);
            goto LAB_00407506;
          }
          pcVar4 = s_D2DBS_0040f40c;
        }
        D2GSEventLog(s_D2GSConnectToD2xS_0040f474,s_Failed_connecting_to__s__wait_to_0040f398,pcVar4
                    );
        WaitForSingleObject(hStopEvent,DAT_00631848 * 100);
      }
      else {
        pcVar4 = &DAT_0040f414;
        if (flag != 1) {
          pcVar4 = s_D2DBS_0040f40c;
        }
        iVar2 = WSAGetLastError();
        D2GSEventLog(s_D2GSConnectToD2xS_0040f474,s_Can_t_connect_to__s__Code___d_0040f3ec,pcVar4,
                     iVar2);
        Sleep(1000);
      }
    }
    else {
      iVar2 = WSAGetLastError();
      D2GSEventLog(s_D2GSConnectToD2xS_0040f474,s_Failed_in_WSAEventSelect_when_co_0040f41c,iVar2);
      Sleep(1000);
    }
    DVar3 = WaitForSingleObject(hStopEvent,0);
  } while( true );
}



void CloseConnectionToD2CS(void)

{
  if (DAT_0040f280 != 0) {
    shutdown(DAT_0040f280,2);
    closesocket(DAT_0040f280);
  }
  DAT_0040f280 = 0xffffffff;
  bConnectedToCS = 0;
  D2GSActive(0);
  (*D2GSEndAllGames)();
  NRBInitialize((undefined4 *)&DAT_005114c0,1);
  FUN_00408010((undefined4 *)&nsbCS,2);
  D2GSEventLog(s_CloseConnectionToD2CS_0040f4a8,s_Close_Connection_to_D2CS_0040f4c0);
  return;
}



void CloseConnectionToD2DBS(void)

{
  CloseConnectionToD2CS();
  Sleep(5000);
  if (DAT_0040f284 != 0) {
    shutdown(DAT_0040f284,2);
    closesocket(DAT_0040f284);
  }
  DAT_0040f284 = 0xffffffff;
  bConnectedToDBS = 0;
  NRBInitialize((undefined4 *)&DAT_00621508,3);
  FUN_00408010((undefined4 *)&DAT_004114a8,4);
  D2GSEventLog(s_CloseConnectionToD2DBS_0040f4dc,s_Close_Connection_to_D2DBS_0040f4f4);
  return;
}



undefined4
D2GSNetProcessor(undefined4 param_1,undefined4 param_2,undefined4 param_3,HANDLE param_4,
                HANDLE param_5,undefined4 param_6,undefined8 param_7)

{
  HANDLE hObject;
  DWORD DVar1;
  undefined4 uVar2;
  int iVar3;
  code *unaff_EBX;
  code *unaff_EBP;
  int unaff_retaddr;
  
code_r0x004076ff:
  uVar2 = (*unaff_EBP)();
  D2GSEventLog(s_D2GSNetProcessor_0040f510,s_Can_t_CreateThread_D2GSConnectTo_0040f524,uVar2);
  (*unaff_EBX)(1000);
LAB_0040764a:
  if (bConnectedToDBS == 0) {
    hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,D2GSConnectToD2xS,(LPVOID)0x2,0,&param_6);
    if (hObject == (HANDLE)0x0) goto code_r0x004076ff;
    param_4 = hStopEvent;
    DVar1 = WaitForMultipleObjects(2,&param_4,0,0xffffffff);
    CloseHandle(hObject);
    if (DVar1 == 0) {
      return 0;
    }
    if (bConnectedToDBS == 0) {
      WaitForSingleObject(hStopEvent,DAT_00631848 * 100);
      goto LAB_0040764a;
    }
  }
  if (bConnectedToCS == 0) {
    FUN_004038a0();
    hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,D2GSConnectToD2xS,(LPVOID)0x1,0,&param_6);
    if (hObject == (HANDLE)0x0) goto code_r0x004076ff;
    param_4 = hStopEvent;
    DVar1 = WaitForMultipleObjects(2,&param_4,0,0xffffffff);
    CloseHandle(hObject);
    if (DVar1 == 0) {
      return 0;
    }
    if (bConnectedToCS == 0) {
      WaitForSingleObject(hStopEvent,DAT_00631848 * 100);
    }
  }
  else {
    iVar3 = D2GSNetRecvPacket(unaff_retaddr,param_1);
    if (iVar3 == 0) {
      while (iVar3 = FUN_00407f90((undefined2 *)&DAT_005114c0,(undefined4 *)&param_7), iVar3 == 0) {
        DAT_00411434 = DAT_00411434 + 1;
        DAT_0041143c = DAT_0041143c + (param_7._2_4_ & 0xffff);
        D2GSHandleS2SPacket((D2GSPACKET *)&param_7);
      }
      while (iVar3 = FUN_00407f90((undefined2 *)&DAT_00621508,(undefined4 *)&param_7), iVar3 == 0) {
        DAT_00411470 = DAT_00411470 + 1;
        DAT_00411478 = DAT_00411478 + (param_7._2_4_ & 0xffff);
        D2GSHandleS2SPacket((D2GSPACKET *)&param_7);
      }
    }
    else {
      if (true) {
        switch(iVar3) {
        case 1:
        case 0x81:
          (*unaff_EBX)(1000);
          break;
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
          CloseConnectionToD2DBS();
        }
      }
    }
    D2GSSendNetData(&nsbCS);
    D2GSSendNetData(&DAT_004114a8);
    DVar1 = WaitForSingleObject(hStopEvent,0);
    if (DVar1 == 0) {
      return 1;
    }
  }
  goto LAB_0040764a;
}



// WARNING: Inlined function: FUN_0040bbd0
// WARNING: Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl D2GSNetRecvPacket(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined4 unaff_ESI;
  undefined4 uVar17;
  
  uVar2 = 0x203c;
  if (true) {
    do {
      register0x00000010 = (BADSPACEBASE *)((undefined *)register0x00000010 + -0x1000);
      uVar2 = uVar2 - 0x1000;
    } while (0xfff < uVar2);
  }
  puVar4 = (undefined *)register0x00000010 + -uVar2;
  *(undefined4 *)(puVar4 + -4) = 0x40792a;
  *(undefined4 *)(puVar4 + -4) = unaff_ESI;
  if (bConnectedToCS == 0) {
    return 0x13;
  }
  *(undefined4 *)(puVar4 + -8) = 0x23;
  *(undefined4 *)(puVar4 + -0xc) = DAT_0063151c;
  *(undefined4 *)(puVar4 + -0x10) = DAT_0040f280;
  puVar5 = puVar4 + -0x14;
  *(undefined4 *)(puVar4 + -0x14) = 0x407958;
  iVar3 = WSAEventSelect();
  if (iVar3 == 0) {
    *(undefined4 *)(puVar5 + -4) = 0x23;
    *(undefined4 *)(puVar5 + -8) = DAT_00631520;
    *(undefined4 *)(puVar5 + -0xc) = DAT_0040f284;
    puVar6 = puVar5 + -0x10;
    *(undefined4 *)(puVar5 + -0x10) = 0x407993;
    iVar3 = WSAEventSelect();
    if (iVar3 == 0) {
      *(undefined4 *)(puVar6 + 4) = hStopEvent;
      *(undefined4 *)(puVar6 + -4) = 0;
      *(undefined4 *)(puVar6 + -8) = 100;
      *(undefined4 *)(puVar6 + -0xc) = 0;
      *(undefined **)(puVar6 + -0x10) = puVar6 + 4;
      *(undefined4 *)(puVar6 + -0x14) = 3;
      *(undefined4 *)(puVar6 + 8) = DAT_0063151c;
      *(undefined4 *)(puVar6 + 0xc) = DAT_00631520;
      uVar17 = 1;
      puVar8 = puVar6 + -0x18;
      *(undefined4 *)(puVar6 + -0x18) = 0x4079da;
      iVar3 = WSAWaitForMultipleEvents();
      if (iVar3 == 0x102) {
        return 0xff;
      }
      if (iVar3 == 0) {
        return 1;
      }
      if (iVar3 == 0xc0) {
        return 1;
      }
      if (iVar3 == 1) {
        *(undefined **)(puVar8 + -4) = puVar8 + 0x14;
        *(undefined4 *)(puVar8 + -8) = DAT_0063151c;
        *(undefined4 *)(puVar8 + -0xc) = DAT_0040f280;
        puVar9 = puVar8 + -0x10;
        *(undefined4 *)(puVar8 + -0x10) = 0x407a1e;
        iVar3 = WSAEnumNetworkEvents();
        if (iVar3 != 0) {
          puVar10 = puVar9 + -4;
          *(undefined4 *)(puVar9 + -4) = 0x407a28;
          iVar3 = WSAGetLastError(puVar9[-4]);
          *(int *)(puVar10 + -4) = iVar3;
          *(undefined4 *)(puVar10 + -8) = 0x40f3c0;
          *(undefined4 *)(puVar10 + -0xc) = 0x40f654;
          *(undefined4 *)(puVar10 + -0x10) = 0x407a38;
          D2GSEventLog(*(char **)(puVar10 + -0xc),*(char **)(puVar10 + -8));
          return 0x12;
        }
        bVar1 = puVar9[0x14];
        if ((bVar1 & 0x20) != 0) {
          return 0x13;
        }
        if ((bVar1 & 2) != 0) {
          if (*(int *)(puVar9 + 0x1c) != 0) {
            return 0x13;
          }
          *(undefined4 *)(puVar9 + -4) = 0x40f604;
          *(undefined4 *)(puVar9 + -8) = 0x40f654;
          _DAT_00521504 = 1;
          *(undefined4 *)(puVar9 + -0xc) = 0x407a8f;
          D2GSEventLog(*(char **)(puVar9 + -8),*(char **)(puVar9 + -4));
          bVar1 = puVar9[0x14];
          uVar17 = 0;
        }
        if ((bVar1 & 1) != 0) {
          if (*(int *)(puVar9 + 0x18) != 0) {
            return 0x13;
          }
          *(undefined4 *)(puVar9 + -4) = 0;
          *(undefined4 *)(puVar9 + -8) = 0x2000;
          *(undefined **)(puVar9 + -0xc) = puVar9 + 0x40;
          *(undefined4 *)(puVar9 + -0x10) = DAT_0040f280;
          puVar11 = puVar9 + -0x14;
          *(undefined4 *)(puVar9 + -0x14) = 0x407acd;
          iVar3 = recv(*(SOCKET *)(puVar9 + -0x10),*(char **)(puVar9 + -0xc),*(int *)(puVar9 + -8),
                       *(int *)(puVar9 + -4));
          if (-1 < iVar3) {
            if (iVar3 != 0) {
              *(int *)(puVar11 + -4) = iVar3;
              *(undefined **)(puVar11 + -8) = puVar11 + 0x40;
              *(undefined4 *)(puVar11 + -0xc) = 0x5114c0;
              *(undefined4 *)(puVar11 + -0x10) = 0x407b16;
              NRBAddNewData(*(int *)(puVar11 + -0xc),*(undefined4 **)(puVar11 + -8),
                            *(uint *)(puVar11 + -4));
              return 0;
            }
            return 0x13;
          }
          puVar12 = puVar11 + -4;
          *(undefined4 *)(puVar11 + -4) = 0x407ad7;
          iVar3 = WSAGetLastError(puVar11[-4]);
          *(int *)(puVar12 + -4) = iVar3;
          *(undefined4 *)(puVar12 + -8) = 0x40f5d4;
          *(undefined4 *)(puVar12 + -0xc) = 0x40f654;
          *(undefined4 *)(puVar12 + -0x10) = 0x407ae7;
          D2GSEventLog(*(char **)(puVar12 + -0xc),*(char **)(puVar12 + -8));
          return 0x14;
        }
      }
      else {
        if (iVar3 != 2) {
          *(int *)(puVar8 + -4) = iVar3;
          *(undefined4 *)(puVar8 + -8) = 0x40f554;
          *(undefined4 *)(puVar8 + -0xc) = 0x40f654;
          *(undefined4 *)(puVar8 + -0x10) = 0x407c59;
          D2GSEventLog(*(char **)(puVar8 + -0xc),*(char **)(puVar8 + -8));
          return 0x11;
        }
        *(undefined **)(puVar8 + -4) = puVar8 + 0x14;
        *(undefined4 *)(puVar8 + -8) = DAT_00631520;
        *(undefined4 *)(puVar8 + -0xc) = DAT_0040f284;
        puVar13 = puVar8 + -0x10;
        *(undefined4 *)(puVar8 + -0x10) = 0x407b46;
        iVar3 = WSAEnumNetworkEvents();
        if (iVar3 != 0) {
          puVar14 = puVar13 + -4;
          *(undefined4 *)(puVar13 + -4) = 0x407b50;
          iVar3 = WSAGetLastError(puVar13[-4]);
          *(int *)(puVar14 + -4) = iVar3;
          *(undefined4 *)(puVar14 + -8) = 0x40f3c0;
          *(undefined4 *)(puVar14 + -0xc) = 0x40f654;
          *(undefined4 *)(puVar14 + -0x10) = 0x407b60;
          D2GSEventLog(*(char **)(puVar14 + -0xc),*(char **)(puVar14 + -8));
          return 0x32;
        }
        bVar1 = puVar13[0x14];
        if ((bVar1 & 0x20) != 0) {
          return 0x33;
        }
        if ((bVar1 & 2) != 0) {
          if (*(int *)(puVar13 + 0x1c) != 0) {
            return 0x13;
          }
          *(undefined4 *)(puVar13 + -4) = 0x40f5b8;
          *(undefined4 *)(puVar13 + -8) = 0x40f654;
          _DAT_00521504 = 1;
          *(undefined4 *)(puVar13 + -0xc) = 0x407bb7;
          D2GSEventLog(*(char **)(puVar13 + -8),*(char **)(puVar13 + -4));
          bVar1 = puVar13[0x14];
          uVar17 = 0;
        }
        if ((bVar1 & 1) != 0) {
          if (*(int *)(puVar13 + 0x18) != 0) {
            return 0x33;
          }
          *(undefined4 *)(puVar13 + -4) = 0;
          *(undefined4 *)(puVar13 + -8) = 0x2000;
          *(undefined **)(puVar13 + -0xc) = puVar13 + 0x40;
          *(undefined4 *)(puVar13 + -0x10) = DAT_0040f284;
          puVar15 = puVar13 + -0x14;
          *(undefined4 *)(puVar13 + -0x14) = 0x407bf1;
          iVar3 = recv(*(SOCKET *)(puVar13 + -0x10),*(char **)(puVar13 + -0xc),
                       *(int *)(puVar13 + -8),*(int *)(puVar13 + -4));
          if (iVar3 < 0) {
            puVar16 = puVar15 + -4;
            *(undefined4 *)(puVar15 + -4) = 0x407bfb;
            iVar3 = WSAGetLastError(puVar15[-4]);
            *(int *)(puVar16 + -4) = iVar3;
            *(undefined4 *)(puVar16 + -8) = 0x40f588;
            *(undefined4 *)(puVar16 + -0xc) = 0x40f654;
            *(undefined4 *)(puVar16 + -0x10) = 0x407c0b;
            D2GSEventLog(*(char **)(puVar16 + -0xc),*(char **)(puVar16 + -8));
            return 0x34;
          }
          if (iVar3 == 0) {
            return 0x33;
          }
          *(int *)(puVar15 + -4) = iVar3;
          *(undefined **)(puVar15 + -8) = puVar15 + 0x40;
          *(undefined4 *)(puVar15 + -0xc) = 0x621508;
          *(undefined4 *)(puVar15 + -0x10) = 0x407c3a;
          NRBAddNewData(*(int *)(puVar15 + -0xc),*(undefined4 **)(puVar15 + -8),
                        *(uint *)(puVar15 + -4));
          uVar17 = 0;
        }
      }
      return uVar17;
    }
    puVar7 = puVar6 + -4;
    *(undefined4 *)(puVar6 + -4) = 0x40799d;
    iVar3 = WSAGetLastError(puVar6[-4]);
    *(int *)(puVar7 + -4) = iVar3;
    *(undefined4 *)(puVar7 + -8) = 0x40f620;
  }
  else {
    puVar7 = puVar5 + -4;
    *(undefined4 *)(puVar5 + -4) = 0x407962;
    iVar3 = WSAGetLastError(puVar5[-4]);
    *(int *)(puVar7 + -4) = iVar3;
    *(undefined4 *)(puVar7 + -8) = 0x40f668;
  }
  *(undefined4 *)(puVar7 + -0xc) = 0x40f654;
  *(undefined4 *)(puVar7 + -0x10) = 0x407972;
  D2GSEventLog(*(char **)(puVar7 + -0xc),*(char **)(puVar7 + -8));
  return 1;
}



int __cdecl D2GSSendNetData(void *param_1)

{
  void *lpnsr;
  void *datalen;
  int iVar1;
  SOCKET s;
  undefined **ppuVar2;
  char *local_4;
  
  lpnsr = param_1;
  if (*(int *)((int)param_1 + 0xc) == 0) {
    return -1;
  }
  s = DAT_0040f280;
  if (*(short *)param_1 != 2) {
    s = DAT_0040f284;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&csNet);
  FUN_00408160((int)lpnsr,&local_4,&param_1);
  if (param_1 != (void *)0x0) {
    datalen = (void *)send(s,local_4,(int)param_1,0);
    if ((int)datalen < 1) {
      iVar1 = WSAGetLastError();
      if (iVar1 == 0x2733) {
        ppuVar2 = (undefined **)&DAT_0040f704;
        if (*(short *)lpnsr != 2) {
          ppuVar2 = &PTR_DAT_0040f700;
        }
        iVar1 = WSAGetLastError();
        D2GSEventLog(s_D2GSSendNetData_0040f6d8,s_socket_of__s_block___u_0040f6e8,ppuVar2,iVar1);
        *(undefined4 *)((int)lpnsr + 0x14) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&csNet);
        return 0;
      }
      iVar1 = WSAGetLastError();
      D2GSEventLog(s_D2GSSendNetData_0040f6d8,s_send_failed__code___u_0040f6c0,iVar1);
      LeaveCriticalSection((LPCRITICAL_SECTION)&csNet);
      return -1;
    }
    if (datalen != param_1) {
      NSBRemoveData((undefined *)lpnsr,(uint)datalen);
      ppuVar2 = (undefined **)&DAT_0040f704;
      if (*(short *)lpnsr != 2) {
        ppuVar2 = &PTR_DAT_0040f700;
      }
      D2GSEventLog(s_D2GSSendNetData_0040f6d8,s_socket_of__s__data_partial_sende_0040f69c,ppuVar2);
      LeaveCriticalSection((LPCRITICAL_SECTION)&csNet);
      return 0;
    }
    NSBRemoveData((undefined *)lpnsr,(uint)param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&csNet);
  return 0;
}



int __cdecl D2GSNetSendPacket(D2GSPACKET *lpPacket)

{
  int iVar1;
  
  if (lpPacket != (D2GSPACKET *)0x0) {
    if (lpPacket->datalen == 0) {
      return 0;
    }
    if (lpPacket->peer == 2) {
      if (bConnectedToCS == 0) {
        return 0x13;
      }
      iVar1 = NSBAppendData(&nsbCS,lpPacket);
      if (iVar1 == 0) {
        DAT_00411438 = DAT_00411438 + 1;
        DAT_00411440 = DAT_00411440 + (uint)lpPacket->datalen;
        D2GSSendNetData(&nsbCS);
        return 0;
      }
    }
    else {
      if (lpPacket->peer != 4) {
        return 2;
      }
    }
    if (bConnectedToDBS == 0) {
      return 0x33;
    }
    iVar1 = NSBAppendData(&DAT_004114a8,lpPacket);
    if (iVar1 == 0) {
      DAT_00411474 = DAT_00411474 + 1;
      DAT_0041147c = DAT_0041147c + (uint)lpPacket->datalen;
      D2GSSendNetData(&DAT_004114a8);
      return 0;
    }
  }
  return 2;
}



void __cdecl NRBInitialize(undefined4 *param_1,ushort peer)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = 0x4005;
    puVar2 = param_1;
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1[3] = 0;
    *(undefined4 **)(param_1 + 1) = param_1 + 5;
    *(undefined4 **)(param_1 + 2) = param_1 + 5;
    param_1[4] = 0x10000;
    *(ushort *)param_1 = peer;
  }
  return;
}



void __cdecl NRBAddNewData(int param_1,undefined4 *param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) &&
     (uVar3 = *(uint *)(param_1 + 0xc), uVar3 < 0x10001)) {
    if ((*(uint *)(param_1 + 0x10) < param_3) &&
       ((undefined4 *)((int)*(undefined4 **)(param_1 + 4) - param_1) != (undefined4 *)0x14)) {
      if (uVar3 != 0) {
        uVar2 = uVar3 >> 2;
        puVar4 = *(undefined4 **)(param_1 + 4);
        puVar5 = (undefined4 *)(param_1 + 0x14);
        while (uVar2 != 0) {
          uVar2 = uVar2 - 1;
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        uVar3 = uVar3 & 3;
        while (uVar3 != 0) {
          uVar3 = uVar3 - 1;
          *(undefined *)puVar5 = *(undefined *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
      *(int *)(param_1 + 4) = param_1 + 0x14;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc) + 0x14 + param_1;
      *(int *)(param_1 + 0x10) = 0x10000 - *(int *)(param_1 + 0xc);
    }
    if (param_3 <= *(uint *)(param_1 + 0x10)) {
      uVar3 = param_3 >> 2;
      puVar4 = *(undefined4 **)(param_1 + 8);
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        *puVar4 = *param_2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar3 = param_3 & 3;
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        *(undefined *)puVar4 = *(undefined *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_3;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
      return;
    }
    pcVar1 = &DAT_0040f414;
    if (*(short *)param_1 != 1) {
      pcVar1 = s_D2DBS_0040f40c;
    }
    D2GSEventLog(s_NBRAddNewData_0040f708,s_____Receive_buffer_for___s__over_0040f718,pcVar1,param_3
                );
  }
  return;
}



undefined4 __cdecl FUN_00407f90(undefined2 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 == (undefined2 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    return 0x81;
  }
  if (7 < *(uint *)(param_1 + 6)) {
    uVar1 = *(ushort *)*(undefined4 **)(param_1 + 2);
    uVar2 = (uint)uVar1;
    if (uVar1 == 0) {
      return 0x50;
    }
    if (uVar2 <= *(uint *)(param_1 + 6)) {
      uVar3 = (uint)(uVar1 >> 2);
      puVar4 = *(undefined4 **)(param_1 + 2);
      puVar5 = param_2;
      while (puVar5 = puVar5 + 1, uVar3 != 0) {
        uVar3 = uVar3 - 1;
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
      }
      uVar3 = uVar2 & 3;
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        *(undefined *)puVar5 = *(undefined *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      *(ushort *)((int)param_2 + 2) = uVar1;
      *(undefined2 *)param_2 = *param_1;
      *(uint *)(param_1 + 2) = *(int *)(param_1 + 2) + uVar2;
      *(uint *)(param_1 + 6) = *(int *)(param_1 + 6) - uVar2;
      return 0;
    }
  }
  return 0x50;
}



void __cdecl FUN_00408010(undefined4 *param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = 0x40006;
    puVar2 = param_1;
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1[3] = 0;
    *(undefined4 **)(param_1 + 1) = param_1 + 6;
    *(undefined4 **)(param_1 + 2) = param_1 + 6;
    param_1[4] = 0x100000;
    *(undefined2 *)param_1 = param_2;
    param_1[5] = 1;
  }
  return;
}



int __cdecl NSBAppendData(void *param_1,D2GSPACKET *param_2)

{
  ushort uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (((param_1 == (void *)0x0) || (param_2 == (D2GSPACKET *)0x0)) ||
     (0x100000 < *(uint *)((int)param_1 + 0xc))) {
    return -1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&csNet);
  uVar1 = param_2->datalen;
  uVar2 = (uint)uVar1;
  if (*(uint *)((int)param_1 + 0x10) < uVar2) {
    if ((undefined4 *)((int)*(undefined4 **)((int)param_1 + 4) - (int)param_1) !=
        (undefined4 *)&DAT_00000018) {
      uVar5 = *(uint *)((int)param_1 + 0xc);
      if (uVar5 != 0) {
        uVar4 = uVar5 >> 2;
        puVar6 = *(undefined4 **)((int)param_1 + 4);
        puVar7 = (undefined4 *)((int)param_1 + 0x18);
        while (uVar4 != 0) {
          uVar4 = uVar4 - 1;
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar5 = uVar5 & 3;
        while (uVar5 != 0) {
          uVar5 = uVar5 - 1;
          *(undefined *)puVar7 = *(undefined *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      *(int *)((int)param_1 + 4) = (int)param_1 + 0x18;
      *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 0xc) + 0x18 + (int)param_1;
      *(int *)((int)param_1 + 0x10) = 0x100000 - *(int *)((int)param_1 + 0xc);
    }
    if (*(uint *)((int)param_1 + 0x10) < uVar2) {
      pcVar3 = &DAT_0040f414;
      if (*(short *)param_1 != 1) {
        pcVar3 = s_D2DBS_0040f40c;
      }
      D2GSEventLog(s_NSBAddNewData_0040f74c,s_____Send_buffer_for___s__overflo_0040f75c,pcVar3);
      LeaveCriticalSection((LPCRITICAL_SECTION)&csNet);
      return -1;
    }
  }
  uVar5 = (uint)(uVar1 >> 2);
  puVar6 = *(undefined4 **)((int)param_1 + 8);
  while (param_2 = (D2GSPACKET *)&param_2->field_0x4, uVar5 != 0) {
    uVar5 = uVar5 - 1;
    *puVar6 = *(undefined4 *)param_2;
    puVar6 = puVar6 + 1;
  }
  uVar5 = uVar2 & 3;
  while (uVar5 != 0) {
    uVar5 = uVar5 - 1;
    *(undefined *)puVar6 = *(undefined *)&param_2->peer;
    param_2 = (D2GSPACKET *)((int)&param_2->peer + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + uVar2;
  *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) - uVar2;
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&csNet);
  return 0;
}



undefined4 __cdecl FUN_00408160(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == 0) {
    return 0x81;
  }
  *param_2 = *(undefined4 *)(param_1 + 4);
  *param_3 = *(undefined4 *)(param_1 + 0xc);
  return 0;
}



int __cdecl NSBRemoveData(undefined *lpnsr,uint datalen)

{
  if (lpnsr == (undefined *)0x0) {
    return 0x81;
  }
  if (*(uint *)(lpnsr + 0xc) < datalen) {
    return 0x81;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&csNet);
  *(uint *)(lpnsr + 4) = *(int *)(lpnsr + 4) + datalen;
  *(uint *)(lpnsr + 0xc) = *(int *)(lpnsr + 0xc) - datalen;
  LeaveCriticalSection((LPCRITICAL_SECTION)&csNet);
  return 0;
}



uint FUN_00408260(void)

{
  bool bVar1;
  
  bVar1 = bConnectedToCS != 0;
  if (bConnectedToDBS != 0) {
    bVar1 = (bool)(bVar1 | 2);
  }
  return (uint)bVar1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00408280(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_10;
  
  iVar1 = DAT_00411444;
  DVar4 = DAT_00411430;
  DAT_00411444 = DAT_0041143c;
  uVar5 = DAT_0041143c - iVar1;
  uVar6 = DAT_00411440 - DAT_00411448;
  DAT_00411448 = DAT_00411440;
  DVar3 = GetTickCount();
  DVar2 = DAT_0041146c;
  if (DVar3 - DVar4 != 0) {
    local_10 = (ulonglong)(DVar3 - DVar4);
    _DAT_0041144c = (double)(ulonglong)uVar5 / (double)local_10;
    _DAT_00411454 = (double)(ulonglong)uVar6 / (double)local_10;
    if (_DAT_0041145c < _DAT_0041144c) {
      _DAT_0041145c = _DAT_0041144c;
    }
    DAT_00411430 = DVar3;
    if ((double)CONCAT44(_DAT_00411468,_DAT_00411464) < _DAT_00411454) {
      local_10._0_4_ = SUB84(_DAT_00411454,0);
      local_10._4_4_ = (undefined4)((ulonglong)_DAT_00411454 >> 0x20);
      _DAT_00411464 = (undefined4)local_10;
      _DAT_00411468 = local_10._4_4_;
    }
  }
  uVar6 = DAT_00411478 - DAT_00411480;
  uVar7 = DAT_0041147c - DAT_00411484;
  DAT_00411480 = DAT_00411478;
  DAT_00411484 = DAT_0041147c;
  DVar4 = GetTickCount();
  uVar5 = DVar4 - DVar2;
  if (uVar5 != 0) {
    _DAT_00411488 = (double)(ulonglong)uVar6 / (double)(ulonglong)uVar5;
    _DAT_00411490 = (double)(ulonglong)uVar7 / (double)(ulonglong)uVar5;
    if (_DAT_00411498 < _DAT_00411488) {
      _DAT_00411498 = _DAT_00411488;
    }
    DAT_0041146c = DVar4;
    if ((double)CONCAT44(_DAT_004114a4,_DAT_004114a0) < _DAT_00411490) {
      local_10._0_4_ = SUB84(_DAT_00411490,0);
      local_10._4_4_ = (undefined4)((ulonglong)_DAT_00411490 >> 0x20);
      _DAT_004114a0 = (undefined4)local_10;
      _DAT_004114a4 = local_10._4_4_;
    }
  }
  return;
}



void __cdecl FUN_00408420(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = 0x1e;
    puVar2 = &DAT_00411430;
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}



int D2GSAdminInitialize(void)

{
  DWORD DVar1;
  int iVar2;
  time_t tVar3;
  DWORD local_4;
  
  tVar3 = time((time_t *)0x0);
  DAT_0063153c = (undefined4)tVar3;
  DAT_00631534 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  if (DAT_00631534 == (HANDLE)0x0) {
    DVar1 = GetLastError();
    D2GSEventLog(s_D2GSAdminInitialize_0040fe28,s_Failed_in_creating_event_object__0040f310,DVar1);
    return 0;
  }
  DAT_00631538 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,admin_service,(LPVOID)0x0,0,&local_4);
  if (DAT_00631538 == (HANDLE)0x0) {
    DVar1 = GetLastError();
    D2GSEventLog(s_D2GSAdminInitialize_0040fe28,s_Can_t_CreateThread_admin_service_0040fdfc,DVar1);
  }
  else {
    CloseHandle(DAT_00631538);
    DAT_00631538 = (HANDLE)0x0;
    iVar2 = CleanupRoutineInsert(FUN_00408500,s_Administrator_Console_0040fde4);
    if (iVar2 != 0) {
      return 1;
    }
  }
  FUN_00408500();
  return 0;
}



undefined4 FUN_00408500(void)

{
  if (DAT_00631534 != (HANDLE)0x0) {
    SetEvent(DAT_00631534);
    if (DAT_00631538 != (HANDLE)0x0) {
      WaitForSingleObject(DAT_00631538,0xffffffff);
      CloseHandle(DAT_00631538);
      DAT_00631538 = (HANDLE)0x0;
    }
    Sleep(1000);
    CloseHandle(DAT_00631534);
    DAT_00631534 = (HANDLE)0x0;
    return 1;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// lpStartAddress parameter of CreateThread
// 

undefined4 admin_service(void)

{
  in_addr in;
  SOCKET s;
  int iVar1;
  u_long uVar2;
  char *_Source;
  HANDLE hObject;
  size_t _Count;
  SOCKET SStack64;
  int local_3c;
  undefined4 local_38;
  DWORD DStack52;
  uint local_30;
  u_long local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack32;
  in_addr iStack28;
  undefined4 uStack24;
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  undefined4 uStack8;
  undefined4 uStack4;
  
  s = socket(2,1,0);
  local_38 = 1;
  local_3c = 4;
  setsockopt(s,0xffff,4,(char *)&local_38,4);
  local_30 = 2;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = ntohl(0);
  local_30 = local_30 & 0xffff | _d2csip << 0x10;
  iVar1 = bind(s,(sockaddr *)&local_30,0x10);
  if (iVar1 < 0) {
    closesocket(s);
    iVar1 = WSAGetLastError();
    D2GSEventLog(s_admin_service_0040fe9c,s_failed_bind_admin_socket__port___0040feac,
                 _d2csip & 0xffff,iVar1);
    return 0xffffffff;
  }
  iVar1 = listen(s,1);
  if (iVar1 != -1) {
    do {
      while( true ) {
        while( true ) {
          uStack32 = 0;
          iStack28 = (in_addr)0x0;
          uStack24 = 0;
          uStack20 = 0;
          local_3c = 0x10;
          SStack64 = accept(s,(sockaddr *)&uStack32,&local_3c);
          in = iStack28;
          uVar2 = htonl((u_long)iStack28);
          uStack16 = 0;
          _Count = 0xf;
          uStack12 = 0;
          uStack8 = 0;
          uStack4 = 0;
          _Source = inet_ntoa(in);
          strncpy((char *)&uStack16,_Source,_Count);
          if (uVar2 != 0) break;
          closesocket(SStack64);
        }
        D2GSEventLog(s_admin_service_0040fe9c,s_New_admin_request_from__s__u__0040fe4c,&uStack16,
                     SStack64);
        hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00408750,
                               &SStack64,0,&DStack52);
        if (hObject != (HANDLE)0x0) break;
        send(SStack64,s_System_error_0040fe3c,0xc,0);
        closesocket(SStack64);
      }
      CloseHandle(hObject);
    } while( true );
  }
  closesocket(s);
  iVar1 = WSAGetLastError();
  D2GSEventLog(s_admin_service_0040fe9c,s_failed_listen_admin_socket__port_0040fe6c,_d2csip & 0xffff
               ,iVar1);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 admin_service(SOCKET param_1,int param_2)

{
  in_addr in;
  int iVar1;
  u_long uVar2;
  char *_Source;
  HANDLE hObject;
  SOCKET unaff_EBX;
  undefined4 uStack00000024;
  in_addr hostlong;
  undefined4 uStack0000002c;
  undefined4 uStack00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  size_t _Count;
  
  iVar1 = listen(unaff_EBX,1);
  if (iVar1 != -1) {
    do {
      while( true ) {
        while( true ) {
          uStack00000024 = 0;
          hostlong = (in_addr)0x0;
          uStack0000002c = 0;
          uStack00000030 = 0;
          param_2 = 0x10;
          param_1 = accept(unaff_EBX,(sockaddr *)&stack0x00000024,&param_2);
          in = hostlong;
          uVar2 = htonl((u_long)hostlong);
          in_stack_00000034 = 0;
          _Count = 0xf;
          in_stack_00000038 = 0;
          in_stack_0000003c = 0;
          in_stack_00000040 = 0;
          _Source = inet_ntoa(in);
          strncpy((char *)&stack0x00000034,_Source,_Count);
          if (uVar2 != 0) break;
          closesocket(param_1);
        }
        D2GSEventLog(s_admin_service_0040fe9c,s_New_admin_request_from__s__u__0040fe4c,
                     &stack0x00000034,param_1);
        hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00408750,
                               &param_1,0,(LPDWORD)&stack0x00000010);
        if (hObject != (HANDLE)0x0) break;
        send(param_1,s_System_error_0040fe3c,0xc,0);
        closesocket(param_1);
      }
      CloseHandle(hObject);
    } while( true );
  }
  closesocket(unaff_EBX);
  iVar1 = WSAGetLastError();
  D2GSEventLog(s_admin_service_0040fe9c,s_failed_listen_admin_socket__port_0040fe6c,_d2csip & 0xffff
               ,iVar1);
  return 0xffffffff;
}



void admin_service(undefined param_1,undefined param_2,undefined param_3,SOCKET param_4,
                  undefined4 param_5,undefined param_6,undefined1 param_7,undefined param_8,
                  undefined param_9,undefined param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,undefined1 param_15)

{
  u_long uVar1;
  char *_Source;
  HANDLE hObject;
  code *unaff_EBP;
  size_t _Count;
  
  do {
    D2GSEventLog(s_admin_service_0040fe9c,s_New_admin_request_from__s__u__0040fe4c,&param_15,param_4
                );
    hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00408750,
                           &param_4,0,(LPDWORD)&param_7);
    if (hObject == (HANDLE)0x0) {
      send(param_4,s_System_error_0040fe3c,0xc,0);
      closesocket(param_4);
    }
    else {
      CloseHandle(hObject);
    }
    while( true ) {
      param_4 = (*unaff_EBP)();
      uVar1 = htonl(0);
      _Count = 0xf;
      _Source = inet_ntoa((in_addr)0x0);
      strncpy(&param_15,_Source,_Count);
      if (uVar1 != 0) break;
      closesocket(param_4);
    }
  } while( true );
}



undefined4 admin_thread(void)

{
  D2GSEventLog(s_admin_thread_0040fed8,s_admin_thread___u__terminated_0040fee8);
  return 0;
}



undefined4 __cdecl
FUN_00408d10(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  while ((*(char *)param_1 == ' ' || (*(char *)param_1 == '\t'))) {
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  cVar1 = *(char *)param_1;
  puVar4 = param_1;
  while (((cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'))) {
    cVar1 = *(char *)((int)puVar4 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if (*(char *)puVar4 == '\0') {
    *(undefined *)((int)param_2 + param_4) = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar6 = (char *)((int)puVar4 + 1);
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    uVar2 = uVar3 >> 2;
    puVar5 = (undefined4 *)(pcVar7 + -uVar3);
    puVar8 = (undefined4 *)((int)param_2 + param_4);
    while (uVar2 != 0) {
      uVar2 = uVar2 - 1;
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar3 = uVar3 & 3;
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  puVar4 = (undefined4 *)((int)puVar4 - (int)param_1);
  uVar3 = (uint)puVar4 >> 2;
  puVar5 = param_2;
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar3 = (uint)puVar4 & 3;
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    *(undefined *)puVar5 = *(undefined *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(undefined *)((int)puVar4 + (int)param_2) = 0;
  return 1;
}



uint FUN_00408db0(void)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(DAT_00631534,0);
  return (uint)(DVar1 == 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl
FUN_00408dd0(SOCKET param_1,undefined4 *param_2,int param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined2 *puVar12;
  undefined2 *local_22c;
  undefined4 *local_228;
  uint local_224;
  char local_220 [16];
  undefined2 *local_210;
  timeval local_20c;
  undefined2 local_204;
  undefined local_202;
  fd_set local_104;
  
  iVar7 = 0;
  local_224 = 0;
  iVar8 = 0;
  local_228 = param_5;
  puVar6 = param_2;
  do {
    do {
      while( true ) {
        local_104.fd_count = 1;
        local_20c.tv_sec = 1;
        local_104.fd_array[0] = param_1;
        local_20c.tv_usec = 0;
        iVar3 = select(param_1 + 1,&local_104,(fd_set *)0x0,(fd_set *)0x0,&local_20c);
        if (iVar3 < 0) {
          return -1;
        }
        if (iVar3 != 0) break;
        local_224 = local_224 + 1;
        if (DAT_0063184c <= local_224) {
          return -1;
        }
      }
      uVar4 = FUN_00408db0();
      if (uVar4 != 0) {
        return -1;
      }
      iVar3 = recv(param_1,(char *)&local_204,0x100,0);
      if (iVar3 < 1) {
        return -1;
      }
      local_210 = (undefined2 *)((int)&local_204 + iVar3);
      local_22c = &local_204;
      local_224 = 0;
      *(byte *)local_210 = 0;
    } while (local_210 <= &local_204);
    do {
      bVar2 = *(byte *)local_22c;
      if (((bVar2 == 0xd) || (bVar2 == 10)) || (bVar2 == 0)) {
        *(byte *)puVar6 = 0;
        local_202 = DAT_00410052;
        local_204 = _buf_00410050;
        if (param_4 == 0) {
          return iVar7;
        }
        uVar4 = 0xffffffff;
        puVar12 = &local_204;
        goto code_r0x00409143;
      }
      if (bVar2 == 0xff) {
        local_22c = (undefined2 *)((int)local_22c + 3);
LAB_004090f1:
        iVar8 = 0;
      }
      else {
        if ((bVar2 == 8) || (bVar2 == 0x7f)) {
          if (0 < iVar7) {
            sprintf(local_220,s__c__c_00410054,8,8);
            if (param_4 != 0) {
              uVar4 = 0xffffffff;
              pcVar11 = local_220;
              do {
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar1 != '\0');
              send(param_1,local_220,~uVar4 - 1,0);
            }
            puVar6 = (undefined4 *)((int)puVar6 + -1);
            iVar7 = iVar7 + -1;
            *(byte *)puVar6 = 0;
          }
          goto LAB_004090ec;
        }
        if ((bVar2 == 0x1b) && (iVar8 == 0)) {
          local_22c = (undefined2 *)((int)local_22c + 1);
          iVar8 = 1;
        }
        else {
          if ((bVar2 != 0x5b) || (iVar8 != 1)) {
            if ((iVar8 == 2) && ((bVar2 == 0x41 || (bVar2 == 0x42)))) {
              iVar8 = 0;
              if ((local_228 == (undefined4 *)0x0) || (param_5[2] == 0)) goto LAB_00408f01;
              if (bVar2 == 0x41) {
                local_228 = (undefined4 *)local_228[1];
              }
              else {
                local_228 = (undefined4 *)*local_228;
              }
              if (local_228 == param_5) {
                if (0 < iVar7) {
                  do {
                    sprintf(local_220,s__c__c_00410054,8,8);
                    if (param_4 != 0) {
                      uVar4 = 0xffffffff;
                      pcVar11 = local_220;
                      do {
                        if (uVar4 == 0) break;
                        uVar4 = uVar4 - 1;
                        cVar1 = *pcVar11;
                        pcVar11 = pcVar11 + 1;
                      } while (cVar1 != '\0');
                      send(param_1,local_220,~uVar4 - 1,0);
                    }
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                iVar7 = 0;
                puVar6 = param_2;
              }
              else {
                uVar4 = 0xffffffff;
                pcVar11 = (char *)local_228[3];
                do {
                  pcVar9 = pcVar11;
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  pcVar9 = pcVar11 + 1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar9;
                } while (cVar1 != '\0');
                uVar4 = ~uVar4;
                uVar5 = uVar4 >> 2;
                puVar6 = (undefined4 *)(pcVar9 + -uVar4);
                puVar10 = param_2;
                while (uVar5 != 0) {
                  uVar5 = uVar5 - 1;
                  *puVar10 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar10 = puVar10 + 1;
                }
                uVar4 = uVar4 & 3;
                while (uVar4 != 0) {
                  uVar4 = uVar4 - 1;
                  *(undefined *)puVar10 = *(undefined *)puVar6;
                  puVar6 = (undefined4 *)((int)puVar6 + 1);
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                }
                if (0 < iVar7) {
                  do {
                    sprintf(local_220,s__c__c_00410054,8,8);
                    if (param_4 != 0) {
                      uVar4 = 0xffffffff;
                      pcVar11 = local_220;
                      do {
                        if (uVar4 == 0) break;
                        uVar4 = uVar4 - 1;
                        cVar1 = *pcVar11;
                        pcVar11 = pcVar11 + 1;
                      } while (cVar1 != '\0');
                      send(param_1,local_220,~uVar4 - 1,0);
                    }
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                uVar4 = 0xffffffff;
                iVar7 = local_228[2];
                puVar6 = param_2;
                do {
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  cVar1 = *(char *)puVar6;
                  puVar6 = (undefined4 *)((int)puVar6 + 1);
                } while (cVar1 != '\0');
                puVar6 = (undefined4 *)((int)param_2 + iVar7);
                send(param_1,(char *)param_2,~uVar4 - 1,0);
              }
            }
            else {
              if ((0x1f < bVar2) && (bVar2 < 0x7f)) {
                if (param_4 != 0) {
                  send(param_1,(char *)local_22c,1,0);
                }
                if (iVar7 < param_3 + -1) {
                  *(byte *)puVar6 = *(byte *)local_22c;
                  puVar6 = (undefined4 *)((int)puVar6 + 1);
                  local_22c = (undefined2 *)((int)local_22c + 1);
                  iVar7 = iVar7 + 1;
                  goto LAB_004090f1;
                }
              }
            }
LAB_004090ec:
            local_22c = (undefined2 *)((int)local_22c + 1);
            goto LAB_004090f1;
          }
          iVar8 = 2;
LAB_00408f01:
          local_22c = (undefined2 *)((int)local_22c + 1);
        }
      }
    } while (local_22c < local_210);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar1 = *(char *)puVar12;
    puVar12 = (undefined2 *)((int)puVar12 + 1);
    if (cVar1 == '\0') break;
code_r0x00409143:
    if (uVar4 == 0) break;
  }
  send(param_1,(char *)&local_204,~uVar4 - 1,0);
  return iVar7;
}



int __cdecl FUN_00409170(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  uint local_14 [5];
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  if ((*param_1 == '\0') && (CHAR_ARRAY_00631860[0] == '\0')) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_00401000(local_14,~uVar5 - 1,(int)param_1);
  if (iVar3 != 0) {
    return -1;
  }
  pbVar4 = FUN_00401370(local_14);
  if (pbVar4 == (byte *)0x0) {
    return -1;
  }
  pcVar6 = CHAR_ARRAY_00631860;
  while( true ) {
    bVar2 = *pbVar4;
    bVar7 = bVar2 < (byte)*pcVar6;
    if (bVar2 != *pcVar6) break;
    if (bVar2 == 0) {
      return 1;
    }
    bVar2 = pbVar4[1];
    bVar7 = bVar2 < ((byte *)pcVar6)[1];
    if (bVar2 != ((byte *)pcVar6)[1]) break;
    pbVar4 = pbVar4 + 2;
    pcVar6 = (char *)((byte *)pcVar6 + 2);
    if (bVar2 == 0) {
      return 1;
    }
  }
  return (-(uint)(1 - (uint)bVar7 != (uint)(bVar7 != false)) & 0xfffffffe) + 1;
}



void __cdecl admin_getversion(SOCKET param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char local_200 [512];
  
  sprintf(local_200,s__s_s_s_s_0041005c,s__Diablo_II_Close_Game_Server_Adm_00410068,
          s_Win32_Version_004100a0,s_D2GS_Version_1_10_3_6_build_on_M_004100b0,&buf_004100e4);
  uVar2 = 0xffffffff;
  pcVar3 = local_200;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_200,~uVar2 - 1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00409290(SOCKET param_1)

{
  undefined **ppuVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  char *pcVar10;
  char *pcVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  int *local_104;
  undefined4 local_100;
  
  iVar3 = 0x40;
  puVar8 = (undefined4 *)&local_100;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar10 = s__Commands_help_004100fc;
  do {
    pcVar11 = pcVar10;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  puVar14 = &local_100;
  do {
    puVar12 = puVar14;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    puVar12 = (undefined2 *)((int)puVar14 + 1);
    cVar2 = *(char *)puVar14;
    puVar14 = puVar12;
  } while (cVar2 != '\0');
  uVar5 = uVar4 >> 2;
  puVar8 = (undefined4 *)(pcVar11 + -uVar4);
  puVar13 = (undefined4 *)((int)puVar12 + -1);
  while (uVar5 != 0) {
    uVar5 = uVar5 - 1;
    *puVar13 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar13 + 1;
  }
  uVar4 = uVar4 & 3;
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    *(undefined *)puVar13 = *(undefined *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  uVar4 = 0xffffffff;
  puVar14 = &local_100;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *(char *)puVar14;
    puVar14 = (undefined2 *)((int)puVar14 + 1);
  } while (cVar2 != '\0');
  send(param_1,(char *)&local_100,~uVar4 - 1,0);
  if (PTR_DAT_0040f780 != (undefined *)0x0) {
    ppuVar9 = &PTR_DAT_0040f780;
    ppuVar7 = &PTR_DAT_0040f78c;
    ppuVar6 = &PTR_s_Show_this_message__0040f790;
    local_104 = &DAT_0040f784;
    do {
      if (*local_104 == 0) {
        sprintf((char *)&local_100,s__s__s__s_004100ec,*ppuVar9,*ppuVar7,*ppuVar6);
        uVar4 = 0xffffffff;
        puVar14 = &local_100;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar2 = *(char *)puVar14;
          puVar14 = (undefined2 *)((int)puVar14 + 1);
        } while (cVar2 != '\0');
        send(param_1,(char *)&local_100,~uVar4 - 1,0);
      }
      ppuVar1 = ppuVar9 + 5;
      ppuVar9 = ppuVar9 + 5;
      local_104 = local_104 + 5;
      ppuVar6 = ppuVar6 + 5;
      ppuVar7 = ppuVar7 + 5;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  local_100._0_2_ = _buf_00410050;
  local_100._2_1_ = DAT_00410052;
  uVar4 = 0xffffffff;
  puVar14 = &local_100;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *(char *)puVar14;
    puVar14 = (undefined2 *)((int)puVar14 + 1);
  } while (cVar2 != '\0');
  send(param_1,(char *)&local_100,~uVar4 - 1,0);
  return;
}



void __cdecl admin_setpasswd(SOCKET param_1)

{
  char cVar1;
  BYTE BVar2;
  byte bVar3;
  int len;
  BYTE *pBVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  BYTE *pBVar9;
  bool bVar10;
  char *buf;
  int local_158;
  undefined4 local_154;
  uint local_134 [5];
  undefined4 local_120;
  undefined4 local_100 [64];
  
  send(param_1,s_Changing_login_password__00410270,0x1a,0);
  send(param_1,s_current_password__0041025c,0x12,0);
  len = FUN_00408dd0(param_1,local_100,0x100,0,(undefined4 *)0x0);
  if (-1 < len) {
    len = FUN_00409170((char *)local_100);
    if (len < 1) {
      send(param_1,s__Unauthorized_operation__00410240,0x1b,0);
      return;
    }
    local_158 = 3;
    do {
      send(param_1,s__new_password__0041022c,0x10,0);
      len = FUN_00408dd0(param_1,local_100,0x100,0,(undefined4 *)0x0);
      if (len < 0) {
        return;
      }
      len = 8;
      puVar8 = &local_154;
      while (len != 0) {
        len = len + -1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      strncpy((char *)&local_154,(char *)local_100,0x1f);
      send(param_1,s__confirm_password__00410214,0x14,0);
      len = FUN_00408dd0(param_1,local_100,0x100,0,(undefined4 *)0x0);
      if (len < 0) {
        return;
      }
      len = 8;
      puVar8 = &local_120;
      while (len != 0) {
        len = len + -1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      strncpy((char *)&local_120,(char *)local_100,0x1f);
      puVar8 = &local_120;
      puVar7 = &local_154;
      do {
        bVar3 = *(byte *)puVar7;
        bVar10 = bVar3 < *(byte *)puVar8;
        if (bVar3 != *(byte *)puVar8) {
LAB_00409506:
          len = (1 - (uint)bVar10) - (uint)(bVar10 != false);
          goto LAB_0040950b;
        }
        if (bVar3 == 0) break;
        bVar3 = *(byte *)((int)puVar7 + 1);
        bVar10 = bVar3 < *(byte *)((int)puVar8 + 1);
        if (bVar3 != *(byte *)((int)puVar8 + 1)) goto LAB_00409506;
        puVar7 = (undefined4 *)((int)puVar7 + 2);
        puVar8 = (undefined4 *)((int)puVar8 + 2);
      } while (bVar3 != 0);
      len = 0;
LAB_0040950b:
      if (len == 0) {
        if ((char)local_154 != '\0') break;
        len = 0x22;
        buf = s__Sorry__password_can_t_be_null__004101f0;
      }
      else {
        len = 0x18;
        buf = s__Password_mismatched__004101d4;
      }
      send(param_1,buf,len,0);
      local_158 = local_158 + -1;
    } while (0 < local_158);
    if (local_158 == 0) {
      send(param_1,s__Retry_for_too_many_times__sorry_004101ac,0x26,0);
      return;
    }
    send(param_1,&buf_00410050,2,0);
    uVar5 = 0xffffffff;
    puVar8 = &local_154;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (cVar1 != '\0');
    len = FUN_00401000(local_134,~uVar5 - 1,(int)&local_154);
    if (len != 0) {
      send(param_1,s_Internal_error__00410198,0x11,0);
      return;
    }
    pBVar4 = FUN_00401370(local_134);
    if (pBVar4 == (BYTE *)0x0) {
      send(param_1,s_Internal_error2__00410184,0x12,0);
      return;
    }
    len = FUN_00401ec0(s_AdminPassword_0040d2ec,pBVar4);
    if (len != 0) {
      send(param_1,s_Password_change_successfully__00410164,0x1f,0);
      uVar5 = 0xffffffff;
      do {
        pBVar9 = pBVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pBVar9 = pBVar4 + 1;
        BVar2 = *pBVar4;
        pBVar4 = pBVar9;
      } while (BVar2 != '\0');
      uVar5 = ~uVar5;
      uVar6 = uVar5 >> 2;
      puVar8 = (undefined4 *)(pBVar9 + -uVar5);
      puVar7 = (undefined4 *)CHAR_ARRAY_00631860;
      while (uVar6 != 0) {
        uVar6 = uVar6 - 1;
        *puVar7 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar5 = uVar5 & 3;
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        *(undefined *)puVar7 = *(undefined *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      D2GSEventLog(s_admin_chgpasswd_00410134,s_Password_changed_by_admin__u_00410144,param_1);
      return;
    }
    send(param_1,s_Failed_saving_new_password__00410114,0x1d,0);
  }
  return;
}



void admin_chgpsswd(void)

{
  BYTE BVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *unaff_EBP;
  undefined4 *puVar5;
  BYTE *unaff_EDI;
  BYTE *pBVar6;
  undefined4 *puVar7;
  
  iVar2 = FUN_00401ec0(s_AdminPassword_0040d2ec,unaff_EDI);
  if (iVar2 == 0) {
    (*unaff_EBP)();
    return;
  }
  (*unaff_EBP)();
  uVar3 = 0xffffffff;
  do {
    pBVar6 = unaff_EDI;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pBVar6 = unaff_EDI + 1;
    BVar1 = *unaff_EDI;
    unaff_EDI = pBVar6;
  } while (BVar1 != '\0');
  uVar3 = ~uVar3;
  uVar4 = uVar3 >> 2;
  puVar5 = (undefined4 *)(pBVar6 + -uVar3);
  puVar7 = (undefined4 *)CHAR_ARRAY_00631860;
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar3 = uVar3 & 3;
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    *(undefined *)puVar7 = *(undefined *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  D2GSEventLog(s_admin_chgpasswd_00410134,s_Password_changed_by_admin__u_00410144);
  return;
}



void __cdecl FUN_00409640(SOCKET param_1)

{
  FUN_00402c60(param_1);
  return;
}



void __cdecl FUN_00409650(SOCKET param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    iVar1 = atoi(param_2);
    if ((ushort)iVar1 == 0) {
      send(param_1,s_Invalid_game_id_0041028c,0x13,0);
      return;
    }
    FUN_00402e30(param_1,(ushort)iVar1);
  }
  return;
}



void __cdecl admin_restart(SOCKET param_1,char *param_2)

{
  int iVar1;
  DWORD dwSecondsRemaining;
  
  if (param_2 != (char *)0x0) {
    iVar1 = _stricmp(param_2,s_force_00410370);
    if (iVar1 == 0) {
      send(param_1,s_Force_restarting_Diablo_II_Close_00410340,0x2f,0);
      EnableGSLog = 1;
      D2GSEventLog(s_admin_restart_00410310,s_force_restart_d2gs_by_admin__u_00410320,param_1);
      EnableGSLog = 0;
      D2GSShutdown(1,0);
      return;
    }
    dwSecondsRemaining = atoi(param_2);
    if (dwSecondsRemaining == 0) {
      dwSecondsRemaining = 300;
    }
    send(param_1,s_Restart_Diablo_II_Close_Game_Ser_004102dc,0x32,0);
    EnableGSLog = 1;
    D2GSEventLog(s_admin_shutdown_004102a0,s_shutdown_d2gs_by_admin__u_in__lu_004102b0,param_1,
                 dwSecondsRemaining);
    EnableGSLog = 0;
    D2GSShutdown(1,dwSecondsRemaining);
  }
  return;
}



void __cdecl admin_shutdown(undefined4 param_1,SOCKET param_2)

{
  DWORD unaff_ESI;
  
  send(param_2,s_Restart_Diablo_II_Close_Game_Ser_004102dc,0x32,0);
  EnableGSLog = 1;
  D2GSEventLog(s_admin_shutdown_004102a0,s_shutdown_d2gs_by_admin__u_in__lu_004102b0,param_2);
  EnableGSLog = 0;
  D2GSShutdown(1,unaff_ESI);
  return;
}



void __cdecl admin_shutdown(SOCKET param_1,char *param_2)

{
  int iVar1;
  DWORD dwSecondsRemaining;
  
  if (param_2 != (char *)0x0) {
    iVar1 = _stricmp(param_2,s_force_00410370);
    if (iVar1 == 0) {
      send(param_1,s_Force_shutdown_Diablo_II_Close_G_004103cc,0x2d,0);
      EnableGSLog = 1;
      D2GSEventLog(s_admin_shutdown_004102a0,s_force_shutdown_d2gs_by_admin__u_004103ac,param_1);
      EnableGSLog = 0;
      D2GSShutdown(2,0);
      return;
    }
    dwSecondsRemaining = atoi(param_2);
    if (dwSecondsRemaining == 0) {
      dwSecondsRemaining = 300;
    }
    send(param_1,s_Shutdown_Diablo_II_Close_Game_Se_00410378,0x33,0);
    EnableGSLog = 1;
    D2GSEventLog(s_admin_shutdown_004102a0,s_shutdown_d2gs_by_admin__u_in__lu_004102b0,param_1,
                 dwSecondsRemaining);
    EnableGSLog = 0;
    D2GSShutdown(2,dwSecondsRemaining);
  }
  return;
}



void __cdecl admin_shutdown(undefined4 param_1,SOCKET param_2)

{
  DWORD unaff_ESI;
  
  send(param_2,s_Shutdown_Diablo_II_Close_Game_Se_00410378,0x33,0);
  EnableGSLog = 1;
  D2GSEventLog(s_admin_shutdown_004102a0,s_shutdown_d2gs_by_admin__u_in__lu_004102b0,param_2);
  EnableGSLog = 0;
  D2GSShutdown(2,unaff_ESI);
  return;
}



void __cdecl admin_uptime(SOCKET param_1)

{
  char cVar1;
  tm *_Tm;
  uint uVar2;
  char *pcVar3;
  time_t tVar4;
  int local_108;
  int local_104;
  char local_100 [256];
  
  tVar4 = time((time_t *)0x0);
  local_108 = (int)tVar4;
  local_104 = local_108 - DAT_0063153c;
  _Tm = localtime((time_t *)&DAT_0063153c);
  strftime(local_100,0x100,s_The_game_server_started_at__m__d_00410448,_Tm);
  uVar2 = 0xffffffff;
  pcVar3 = local_100;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_100,~uVar2 - 1,0);
  _Tm = gmtime((time_t *)&local_104);
  _snprintf(local_100,0x100,s_uptime__d_days__d_hours__d_minut_00410418,_Tm->tm_yday,_Tm->tm_hour,
            _Tm->tm_min,_Tm->tm_sec);
  uVar2 = 0xffffffff;
  pcVar3 = local_100;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_100,~uVar2 - 1,0);
  _Tm = localtime((time_t *)&local_108);
  strftime(local_100,0x100,s_Now_it_is__m__d__H__M__S_004103fc,_Tm);
  uVar2 = 0xffffffff;
  pcVar3 = local_100;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_100,~uVar2 - 1,0);
  send(param_1,&buf_00410050,2,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl admin_maxgame(SOCKET param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined unaff_BL;
  undefined unaff_BP;
  code *pcVar5;
  undefined unaff_SI;
  undefined unaff_DI;
  char *pcVar6;
  char local_100;
  
  if (param_2 != (char *)0x0) {
    uVar2 = atoi(param_2);
    iVar3 = FUN_00406f20();
    if ((iVar3 != 0) && (uVar2 != 0)) {
      switch(iVar3) {
      case 1:
        send(param_1,s_The_GS_is_in_restarting_progress_00410578,0x23,0);
        return;
      case 2:
        send(param_1,s_The_GS_is_in_shutting_down_progr_00410550,0x26,0);
        return;
      case 3:
        send(param_1,s_The_GS_is_in_D2CS_restarting_pro_004105c8,0x28,0);
        return;
      case 4:
        send(param_1,s_The_GS_is_in_D2CS_shutting_down_p_0041059c,0x2b,0);
        return;
      default:
        send(param_1,s_Command_failed_00410540,0xe,0);
        return;
      }
    }
    if (DAT_00631830 < uVar2) {
      sprintf(&stack0xffffff00,s_Maximum_game_number_must_be_in_r_0041050c,DAT_00631830);
      pcVar5 = send_exref;
      uVar2 = 0xffffffff;
      pcVar6 = &stack0xffffff00;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      send(param_1,&stack0xffffff00,~uVar2 - 1,0);
    }
    else {
      sprintf(&stack0xffffff00,s_Set_maximum_game_number_to__lu_004104e8,uVar2);
      pcVar5 = send_exref;
      uVar4 = 0xffffffff;
      pcVar6 = &stack0xffffff00;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      send(param_1,&stack0xffffff00,~uVar4 - 1,0);
      iVar3 = D2GSSetMaxGames(uVar2);
      if (iVar3 != 0) {
        admin_setmaxgame(s_MaxGame_set_to_registry_004104cc,unaff_DI,unaff_BP,unaff_BL,unaff_SI,
                         local_100);
        return;
      }
      sprintf(&stack0xffffff00,s_Set_registry_failed_004104b4);
      D2GSEventLog(s_admin_setmaxgame_00410474,s_Change_max_game_number_to__lu_by_00410488,uVar2,
                   param_1);
      uVar4 = 0xffffffff;
      pcVar6 = &stack0xffffff00;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      send(param_1,&stack0xffffff00,~uVar4 - 1,0);
      D2GSSetD2CSMaxGameNumber(uVar2);
    }
    (*pcVar5)(param_1,&buf_00410050,2,0);
  }
  return;
}



// WARNING: Variable defined which should be unmapped: param_1

void __cdecl
admin_setmaxgame(char *param_1,undefined param_2,undefined param_3,undefined param_4,
                undefined param_5,undefined1 param_6)

{
  char cVar1;
  int iVar2;
  code *unaff_EBP;
  DWORD unaff_ESI;
  char *pcVar3;
  char *unaff_retaddr;
  
  sprintf(unaff_retaddr,param_1);
  D2GSEventLog(s_admin_setmaxgame_00410474,s_Change_max_game_number_to__lu_by_00410488);
  iVar2 = -1;
  pcVar3 = &param_6;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  (*unaff_EBP)();
  D2GSSetD2CSMaxGameNumber(unaff_ESI);
  (*unaff_EBP)();
  return;
}



void __cdecl admin_disable(SOCKET param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    iVar1 = atoi(param_2);
    if ((short)iVar1 == 0) {
      send(param_1,s_Invalid_game_id_0041028c,0x13,0);
      return;
    }
    FUN_00403110(param_1,(short)iVar1);
  }
  return;
}



void __cdecl admin_enable(SOCKET param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    iVar1 = atoi(param_2);
    if ((short)iVar1 == 0) {
      send(param_1,s_Invalid_game_id_0041028c,0x13,0);
      return;
    }
    FUN_00403190(param_1,(short)iVar1);
  }
  return;
}



void __cdecl admin_maxlife(SOCKET param_1,char *param_2)

{
  int value;
  
  if (param_2 != (char *)0x0) {
    value = atoi(param_2);
    if (value == 0) {
      send(param_1,s_Invalid_value_00410628,0x11,0);
      return;
    }
    value = D2GSSetMaxGameLife(value);
    if (value != 0) {
      send(param_1,s_Done__0041061c,9,0);
      return;
    }
    send(param_1,s_Can_t_write_MAXGAMELIFE_to_regis_004105f4,0x25,0);
  }
  return;
}



void __cdecl admin_ver(SOCKET param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char local_400 [1024];
  
  sprintf(local_400,s_Checksum__0x_08X_004106cc,DAT_0063182c);
  uVar3 = 0xffffffff;
  pcVar2 = local_400;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_400,~uVar3 - 1,0);
  sprintf(local_400,s_D2GS_Version___s_004106b8,s_D2GS_Version_1_10_3_6_build_on_M_004100b0);
  uVar3 = 0xffffffff;
  pcVar2 = local_400;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_400,~uVar3 - 1,0);
  sprintf(local_400,s_D2GE_Version___s_004106a4,D2GSReserved2);
  uVar3 = 0xffffffff;
  pcVar2 = local_400;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_400,~uVar3 - 1,0);
  sprintf(local_400,s_Busy_sleep_time___lu_0041068c,DAT_00631840);
  uVar3 = 0xffffffff;
  pcVar2 = local_400;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_400,~uVar3 - 1,0);
  sprintf(local_400,s_Idle_sleep_time___lu_00410674,DAT_0063183c);
  uVar3 = 0xffffffff;
  pcVar2 = local_400;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_400,~uVar3 - 1,0);
  pcVar2 = s_Enable_0041066c;
  if (DAT_0063180c == 0) {
    pcVar2 = s_Disable_00410664;
  }
  sprintf(local_400,s_NT_mode___s_00410654,pcVar2);
  uVar3 = 0xffffffff;
  pcVar2 = local_400;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_400,~uVar3 - 1,0);
  pcVar2 = s_Enable_0041066c;
  if (EnableGSLog == 0) {
    pcVar2 = s_Disable_00410664;
  }
  sprintf(local_400,s_GS_log_to_file___s_0041063c,pcVar2);
  uVar3 = 0xffffffff;
  pcVar2 = local_400;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_400,~uVar3 - 1,0);
  return;
}



void __cdecl FUN_00409da0(SOCKET param_1,uchar *param_2)

{
  void *pvVar1;
  
  if ((param_2 != (uchar *)0x0) && (*param_2 != '\0')) {
    pvVar1 = charlist_getdata(param_2,1);
    if (pvVar1 == (void *)0x0) {
      send(param_1,s_char_not_found_004106f4,0x10,0);
      return;
    }
    FUN_00402e30(param_1,*(ushort *)(*(int *)((int)pvVar1 + 0x54) + 0x76));
    return;
  }
  send(param_1,s_Invalid_char_name_004106e0,0x13,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_00409e00(SOCKET param_1,uchar *param_2)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  char *pcVar4;
  SOCKET SStack20;
  
  if ((param_2 == (uchar *)0x0) || (*param_2 == '\0')) {
    send(param_1,s_Invalid_char_name_004106e0,0x13,0);
    return;
  }
  pvVar2 = charlist_getdata(param_2,1);
  if (pvVar2 == (void *)0x0) {
    send(param_1,s_char_not_found_004106f4,0x10,0);
    return;
  }
  (*_D2GSSendClientChatMessage)(*(undefined4 *)((int)pvVar2 + 0x4c));
  Sleep(1000);
  (*_D2GSRemoveClientFromGame)(*(undefined4 *)((int)pvVar2 + 0x4c));
  sprintf(&stack0xffffffa8,s_Char__s_was_kicked_out_00410708,param_2);
  uVar3 = 0xffffffff;
  pcVar4 = &stack0xffffffa8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(SStack20,&stack0xffffffa8,~uVar3 - 1,0);
  return;
}



void __cdecl admin_getstatus(SOCKET param_1)

{
  char cVar1;
  DWORD dwProcessId;
  HANDLE hProcess;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char **ppcVar6;
  ulonglong uVar7;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  int local_1ec;
  uint local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  _FILETIME local_1d8;
  _FILETIME local_1d0;
  _FILETIME local_1c8;
  _FILETIME local_1c0;
  _FILETIME local_1b8;
  _FILETIME local_1b0;
  undefined4 local_1a8 [7];
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_140;
  undefined4 local_13c;
  char local_130 [300];
  
  dwProcessId = GetCurrentProcessId();
  hProcess = OpenProcess(0x1f0fff,0,dwProcessId);
  if ((hProcess == (HANDLE)0x0) || (hProcess == (HANDLE)0xffffffff)) {
    send(param_1,s_Can_t_get_current_process_handle_0041075c,0x24,0);
  }
  else {
    sprintf(local_130,s_Setting_maximum_game___lu_00410a9c);
    uVar4 = 0xffffffff;
    pcVar5 = local_130;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_130,~uVar4 - 1,0);
    sprintf(local_130,s_Current_maximum_game___lu_00410a80);
    uVar4 = 0xffffffff;
    pcVar5 = local_130;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_130,~uVar4 - 1,0);
    FUN_00402120(&local_1e0,&local_1dc);
    sprintf(local_130,s_Current_running_game___lu_00410a64);
    uVar4 = 0xffffffff;
    pcVar5 = local_130;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_130,~uVar4 - 1,0);
    sprintf(local_130,s_Current_users_in_game___lu_00410a44);
    uVar4 = 0xffffffff;
    pcVar5 = local_130;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_130,~uVar4 - 1,0);
    sprintf(local_130,s_Maximum_prefer_users___lu_00410a28);
    uVar4 = 0xffffffff;
    pcVar5 = local_130;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_130,~uVar4 - 1,0);
    sprintf(local_130,s_Maximum_game_life___lu_seconds_00410a04);
    uVar4 = 0xffffffff;
    pcVar5 = local_130;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_130,~uVar4 - 1,0);
    FUN_00408260();
    sprintf(local_130,s_Connetion_to_D2CS___s____s_004109d8);
    uVar4 = 0xffffffff;
    pcVar5 = local_130;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_130,~uVar4 - 1,0);
    sprintf(local_130,s_Connetion_to_D2DBS__s____s_004109b8);
    uVar4 = 0xffffffff;
    pcVar5 = local_130;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_130,~uVar4 - 1,0);
    hModule = LoadLibraryA(s_Psapi_dll_004109ac);
    if (hModule == (HMODULE)0x0) {
      send(param_1,s_No_meomory_info_while_Psapi_dll_u_0041090c,0x2d,0);
    }
    else {
      pFVar2 = GetProcAddress(hModule,s_GetProcessMemoryInfo_00410994);
      if (pFVar2 != (FARPROC)0x0) {
        (*pFVar2)();
        sprintf(local_130,s_Physical_memory_usage___7_3fMB___00410968);
        uVar4 = 0xffffffff;
        pcVar5 = local_130;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        send(param_1,local_130,~uVar4 - 1,0);
        sprintf(local_130,s_Virtual_memory_usage___7_3fMB__7_0041093c);
        uVar4 = 0xffffffff;
        pcVar5 = local_130;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        send(param_1,local_130,~uVar4 - 1,0);
      }
      FreeLibrary(hModule);
    }
    QueryPerformanceFrequency((LARGE_INTEGER *)&local_1f8);
    if ((local_1f8 | local_1f4) != 0) {
      QueryPerformanceCounter((LARGE_INTEGER *)&local_1e8);
      GetProcessTimes(hProcess,(LPFILETIME)&local_1b0,(LPFILETIME)&local_1b8,(LPFILETIME)&local_1c8,
                      (LPFILETIME)&local_1c0);
      Sleep(100);
      QueryPerformanceCounter((LARGE_INTEGER *)&local_1f0);
      GetProcessTimes(hProcess,(LPFILETIME)&local_1b0,(LPFILETIME)&local_1b8,(LPFILETIME)&local_1d8,
                      (LPFILETIME)&local_1d0);
      uVar7 = __allmul(local_1d8.dwLowDateTime - local_1c8.dwLowDateTime,
                       (local_1d8.dwHighDateTime - local_1c8.dwHighDateTime) -
                       (uint)(local_1d8.dwLowDateTime < local_1c8.dwLowDateTime),local_1f8,local_1f4
                      );
      __alldiv((uint)uVar7,(uint)(uVar7 >> 0x20),local_1f0 - local_1e8,
               (local_1ec - local_1e4) - (uint)(local_1f0 < local_1e8));
      sprintf(local_130,s_Kernel_CPU_usage___6_2f___004108f0);
      uVar4 = 0xffffffff;
      pcVar5 = local_130;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      send(param_1,local_130,~uVar4 - 1,0);
      uVar7 = __allmul(local_1d0.dwLowDateTime - local_1c0.dwLowDateTime,
                       (local_1d0.dwHighDateTime - local_1c0.dwHighDateTime) -
                       (uint)(local_1d0.dwLowDateTime < local_1c0.dwLowDateTime),local_1f8,local_1f4
                      );
      __alldiv((uint)uVar7,(uint)(uVar7 >> 0x20),local_1f0 - local_1e8,
               (local_1ec - local_1e4) - (uint)(local_1f0 < local_1e8));
      sprintf(local_130,s_User_CPU_usage___6_2f___004108d4);
      uVar4 = 0xffffffff;
      pcVar5 = local_130;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      send(param_1,local_130,~uVar4 - 1,0);
      send(param_1,&buf_00410050,2,0);
      FUN_00408420(local_1a8);
      send(param_1,s_Game_Server_Net_Statistic___rate_0041089c,0x34,0);
      send(param_1,s__RecvPkts_RecvBytes_SendPkts_Sen_00410864,0x37,0);
      sprintf(local_130,s_D2CS__10lu__10lu__10lu__10lu_00410840);
      uVar4 = 0xffffffff;
      pcVar5 = local_130;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      send(param_1,local_130,~uVar4 - 1,0);
      sprintf(local_130,s_D2DBS__10lu__10lu__10lu__10lu_0041081c);
      uVar4 = 0xffffffff;
      pcVar5 = local_130;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      send(param_1,local_130,~uVar4 - 1,0);
      send(param_1,s__RecvRate_PeakRecvRate_SendRate_P_004107e4,0x37,0);
      sprintf(local_130,s_D2CS__10_3f__12_3f__10_3f__12_3f_004107c0,local_18c,local_188,local_17c,
              local_178);
      uVar4 = 0xffffffff;
      pcVar5 = local_130;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      send(param_1,local_130,~uVar4 - 1,0);
      sprintf(local_130,s_D2DBS__10_3f__12_3f__10_3f__12_3_0041079c,local_150,local_14c,local_140,
              local_13c);
      uVar4 = 0xffffffff;
      pcVar5 = local_130;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      send(param_1,local_130,~uVar4 - 1,0);
      send(param_1,&buf_00410050,2,0);
      send(param_1,s_Message_of_the_day__00410784,0x15,0);
      uVar4 = 0xffffffff;
      ppcVar6 = &buf_006318c2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *(char *)ppcVar6;
        ppcVar6 = (char **)((int)ppcVar6 + 1);
      } while (cVar1 != '\0');
      send(param_1,(char *)&buf_006318c2,~uVar4 - 1,0);
      send(param_1,(char *)&buf_004100e4,4,0);
      CloseHandle(hProcess);
      iVar3 = FUN_00406f20();
      if (iVar3 != 0) {
        switch(iVar3) {
        case 1:
          send(param_1,s_The_GS_is_in_restarting_progress_00410578,0x23,0);
          return;
        case 2:
          send(param_1,s_The_GS_is_in_shutting_down_progr_00410550,0x26,0);
          return;
        case 3:
          send(param_1,s_The_GS_is_in_D2CS_restarting_pro_004105c8,0x28,0);
          return;
        case 4:
          send(param_1,s_The_GS_is_in_D2CS_shutting_down_p_0041059c,0x2b,0);
          return;
        }
      }
    }
  }
  return;
}



void __cdecl FUN_0040a690(SOCKET param_1,int *param_2)

{
  char *_Str1;
  char **_Memory;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == (int *)0x0) || (*(char *)param_2 == '\0')) {
    send(param_1,s_Invalid_char_name_004106e0,0x13,0);
    return;
  }
  _Memory = (char **)FUN_0040b4e0(param_2,(uint *)&param_2);
  if (_Memory == (char **)0x0) {
    send(param_1,s_Internal_error_00410b14,0x10,0);
    return;
  }
  if (param_2 == (int *)0x3) {
    iVar1 = _stricmp(*_Memory,(char *)&PTR_DAT_00410afc);
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    else {
      iVar1 = _stricmp(*_Memory,&DAT_00410af8);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = _stricmp(*_Memory,&DAT_00410af4);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = _stricmp(*_Memory,&DAT_00410af0);
          if (iVar1 == 0) {
            iVar1 = 6;
          }
          else {
            iVar1 = _stricmp(*_Memory,&DAT_00410aec);
            iVar1 = (-(uint)(iVar1 != 0) & 0xfffffffd) + 7;
          }
        }
      }
    }
    string_color(_Memory[2]);
    _Str1 = _Memory[1];
    iVar3 = -1;
    if (*_Str1 == '#') {
      iVar2 = _stricmp(_Str1,&DAT_00410ae4);
      if (iVar2 == 0) {
        iVar3 = chat_message_announce_all(iVar1,_Memory[2]);
      }
      else {
        iVar2 = atoi(_Memory[1] + 1);
        if ((short)iVar2 == 0) {
          send(param_1,s_Invalid_game_id_00410ad0,0x11,0);
        }
        else {
          iVar3 = chat_message_announce_game2(iVar1,(short)iVar2,_Memory[2]);
        }
      }
    }
    else {
      iVar3 = FUN_004033f0(iVar1,_Str1,_Memory[2]);
    }
    free(_Memory);
    if (iVar3 == 0) {
      send(param_1,s_Success_00410ab8,9,0);
      return;
    }
    send(param_1,s_Failed_00410ac4,8,0);
    return;
  }
  send(param_1,s_Invalid_parameter_00410b00,0x13,0);
  return;
}



void __cdecl admin_setmotd(SOCKET param_1,BYTE *param_2)

{
  BYTE BVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char **ppcVar5;
  BYTE *pBVar6;
  char **ppcVar7;
  
  if (param_2 == (BYTE *)0x0) {
    send(param_1,s_Invalid_parameter_00410b00,0x13,0);
    return;
  }
  iVar2 = FUN_00401ec0(s_MOTD_0040d39c,param_2);
  if (iVar2 == 0) {
    send(param_1,s_Failed_change_MOTD__00410b28,0x15,0);
    return;
  }
  send(param_1,s_Change_MOTD_successfully__00410b40,0x1b,0);
  uVar3 = 0xffffffff;
  do {
    pBVar6 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pBVar6 = param_2 + 1;
    BVar1 = *param_2;
    param_2 = pBVar6;
  } while (BVar1 != '\0');
  uVar3 = ~uVar3;
  uVar4 = uVar3 >> 2;
  ppcVar5 = (char **)(pBVar6 + -uVar3);
  ppcVar7 = &buf_006318c2;
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    *ppcVar7 = *ppcVar5;
    ppcVar5 = ppcVar5 + 1;
    ppcVar7 = ppcVar7 + 1;
  }
  uVar3 = uVar3 & 3;
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    *(undefined *)ppcVar7 = *(undefined *)ppcVar5;
    ppcVar5 = (char **)((int)ppcVar5 + 1);
    ppcVar7 = (char **)((int)ppcVar7 + 1);
  }
  return;
}



void __cdecl admin_maxuser(SOCKET param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    iVar1 = atoi(param_2);
    iVar1 = D2GSSetMaxPreferUsers(iVar1);
    if (iVar1 != 0) {
      send(param_1,s_Done__0041061c,9,0);
      return;
    }
    send(param_1,s_Can_t_write_MAXPREFERUSER_to_reg_00410b5c,0x27,0);
  }
  return;
}



void __cdecl admin_setenablegslog(SOCKET param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    iVar1 = atoi(param_2);
    iVar1 = D2GSEnableGSLog(iVar1);
    if (iVar1 != 0) {
      send(param_1,s_Done__0041061c,9,0);
      return;
    }
    send(param_1,s_Can_t_write_ENABLEGSLOG_to_regis_00410b84,0x25,0);
  }
  return;
}



void __cdecl admin_setcpumask(SOCKET socket,char *param)

{
  char cVar1;
  DWORD dwThreadAffinityMask;
  DWORD_PTR DVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char local_100 [256];
  
  if (param != (char *)0x0) {
    dwThreadAffinityMask = atoi(param);
    DVar2 = SetThreadAffinityMask(hThread,dwThreadAffinityMask);
    if (DVar2 != 0) {
      iVar3 = D2GSSetMultiCPUMask(dwThreadAffinityMask);
      if (iVar3 == 0) {
        send(socket,s_Can_t_write_CPUMASK_to_registry_00410bd0,0x21,0);
        return;
      }
      sprintf(local_100,s_Set_CPUMASK_to_0x_lx__00410bf4,dwThreadAffinityMask);
      uVar4 = 0xffffffff;
      pcVar5 = local_100;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      send(socket,local_100,~uVar4 - 1,0);
      return;
    }
    dwThreadAffinityMask = GetLastError();
    sprintf(local_100,s_Failed_setting_CPUMASK__code___l_00410bac,dwThreadAffinityMask);
    uVar4 = 0xffffffff;
    pcVar5 = local_100;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    send(socket,local_100,~uVar4 - 1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl admin_showworldevent(SOCKET param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uStack288;
  undefined uStack284;
  char acStack256 [255];
  undefined uStack1;
  
  piVar2 = (int *)(*_D2GSInitConfig)();
  if (*piVar2 == 0) {
    send(param_1,s_World_Event___Disable_00410d08,0x17,0);
    return;
  }
  send(param_1,s__World_Event___Enable_00410cec,0x1b,0);
  _snprintf(acStack256,0xff,s__Key_Item____s_00410cd4,piVar2 + 8);
  uVar3 = 0xffffffff;
  uStack1 = 0;
  pcVar4 = acStack256;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,acStack256,~uVar3 - 1,0);
  _snprintf(acStack256,0xff,s__Total_Spawn____lu_00410cb8,piVar2[7]);
  uVar3 = 0xffffffff;
  uStack1 = 0;
  pcVar4 = acStack256;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,acStack256,~uVar3 - 1,0);
  _snprintf(acStack256,0xff,s__Base_Count____lu_00410c9c,piVar2[1]);
  uVar3 = 0xffffffff;
  uStack1 = 0;
  pcVar4 = acStack256;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,acStack256,~uVar3 - 1,0);
  _snprintf(acStack256,0xff,s_Last_Spawn_Count____lu_00410c80,piVar2[3]);
  uVar3 = 0xffffffff;
  uStack1 = 0;
  pcVar4 = acStack256;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,acStack256,~uVar3 - 1,0);
  _snprintf(acStack256,0xff,s__Current_Count____lu_00410c64,piVar2[2]);
  uVar3 = 0xffffffff;
  uStack1 = 0;
  pcVar4 = acStack256;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,acStack256,~uVar3 - 1,0);
  _snprintf(acStack256,0xff,s_Next_Spawn_Count____lu_00410c48,piVar2[4]);
  uVar3 = 0xffffffff;
  uStack1 = 0;
  pcVar4 = acStack256;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,acStack256,~uVar3 - 1,0);
  if (piVar2[2] == 0) {
    uStack288 = DAT_00410c40;
    uStack284 = DAT_00410c44;
  }
  else {
    FUN_00402bc0(piVar2[5],(char *)&uStack288,0x20,1);
  }
  _snprintf(acStack256,0xff,s__Last_Sell_Time____s_00410c28,&uStack288);
  uVar3 = 0xffffffff;
  uStack1 = 0;
  pcVar4 = acStack256;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,acStack256,~uVar3 - 1,0);
  if (piVar2[7] == 0) {
    uStack288 = DAT_00410c40;
    uStack284 = DAT_00410c44;
  }
  else {
    FUN_00402bc0(piVar2[6],(char *)&uStack288,0x20,1);
  }
  _snprintf(acStack256,0xff,s__Last_Spawn_Time____s_00410c10,&uStack288);
  uVar3 = 0xffffffff;
  uStack1 = 0;
  pcVar4 = acStack256;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,acStack256,~uVar3 - 1,0);
  send(param_1,&buf_00410050,2,0);
  return;
}



void __cdecl admin_reloadconfig(SOCKET sock)

{
  D2GEReloadConfig();
  send(sock,s_D2GE_config_file_reloaded__00410d20,0x1c,0);
  return;
}



void __cdecl admin_setautoupdate(SOCKET param_1,int *param_2)

{
  char cVar1;
  char **ppcVar2;
  int iVar3;
  ulong value;
  char *pcVar4;
  uint uVar5;
  uint local_104;
  char local_100 [255];
  undefined local_1;
  
  if (param_2 == (int *)0x0) {
    send(param_1,s_Unknown_command_status_00410f3c,0x18,0);
    return;
  }
  ppcVar2 = (char **)FUN_0040b4e0(param_2,&local_104);
  if ((ppcVar2 == (char **)0x0) || (local_104 == 0)) {
    send(param_1,&buf_00410050,2,0);
    pcVar4 = s_enable_0040fc90;
    if (AutoUpdate == 0) {
      pcVar4 = s_disable_0040fcbc;
    }
    _snprintf(local_100,0xff,s__AutoUpdate____s_00410d9c,pcVar4);
    uVar5 = 0xffffffff;
    local_1 = 0;
    pcVar4 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    _snprintf(local_100,0xff,s_AutoUpdateTimeout____lu_ms__00410d7c,AutoUpdateTimeout);
    uVar5 = 0xffffffff;
    local_1 = 0;
    pcVar4 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    _snprintf(local_100,0xff,s__AutoUpdateVer___0x_08x_00410d5c,AutoUpdateVer);
    uVar5 = 0xffffffff;
    local_1 = 0;
    pcVar4 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    _snprintf(local_100,0xff,s__AutoUpdateUrl____s_00410d40,&_Dest_0063158c);
    uVar5 = 0xffffffff;
    local_1 = 0;
    pcVar4 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    send(param_1,&buf_00410050,2,0);
    return;
  }
  iVar3 = _stricmp(*ppcVar2,s_ENABLE_00410f34);
  if (iVar3 == 0) {
    D2GSSetAutoUpdate(1);
    send(param_1,s_D2GS_AutoUpdate_enables_now__00410f14,0x1e,0);
    return;
  }
  iVar3 = _stricmp(*ppcVar2,s_DISABLE_00410f0c);
  if (iVar3 == 0) {
    D2GSSetAutoUpdate(0);
    send(param_1,s_D2GS_AutoUpdate_disables_now__00410eec,0x1f,0);
    return;
  }
  iVar3 = _stricmp(*ppcVar2,s_TIMEOUT_00410ee4);
  if (iVar3 != 0) {
    iVar3 = _stricmp(*ppcVar2,(char *)&PTR_DAT_00410e88);
    if (iVar3 != 0) {
      iVar3 = _stricmp(*ppcVar2,(char *)&PTR_DAT_00410e30);
      if (iVar3 != 0) {
        send(param_1,s_unknown_parameters_for_command___00410db8,0x25,0);
        return;
      }
      if ((int)local_104 < 2) {
        send(param_1,s_unknown_parameters_for_command___00410e04,0x29,0);
        return;
      }
      D2GSSetAutoUpdateURL((BYTE *)ppcVar2[1]);
      _snprintf(local_100,0xff,s_D2GS_AutoUpdateUrl_set_to___s___00410de0,&_Dest_0063158c);
      uVar5 = 0xffffffff;
      local_1 = 0;
      pcVar4 = local_100;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      send(param_1,local_100,~uVar5 - 1,0);
      return;
    }
    if ((int)local_104 < 2) {
      send(param_1,s_unknown_parameters_for_command___00410e5c,0x29,0);
      return;
    }
    value = strtoul(ppcVar2[1],(char **)0x0,0);
    D2GSSetAutoUpdateVer(value);
    _snprintf(local_100,0xff,s_D2GS_AutoUpdateVersion_set_to_0x_00410e34,AutoUpdateVer);
    uVar5 = 0xffffffff;
    local_1 = 0;
    pcVar4 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    send(param_1,local_100,~uVar5 - 1,0);
    return;
  }
  if ((int)local_104 < 2) {
    send(param_1,s_unknown_parameters_for_command___00410eb4,0x2d,0);
    return;
  }
  value = strtoul(ppcVar2[1],(char **)0x0,0);
  D2GSSetAutoUpdateTimeout(value);
  _snprintf(local_100,0xff,s_D2GS_AutoUpdateTimeout_set_to__l_00410e8c,AutoUpdateTimeout);
  uVar5 = 0xffffffff;
  local_1 = 0;
  pcVar4 = local_100;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  send(param_1,local_100,~uVar5 - 1,0);
  return;
}



int D2GSTimerInitialize(void)

{
  DWORD DVar1;
  int iVar2;
  DWORD dwThreadId;
  
  hStopEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  if (hStopEvent == (HANDLE)0x0) {
    DVar1 = GetLastError();
    D2GSEventLog(s_D2GSTimerInitialize_00410f98,s_Failed_in_creating_event_object__0040f310,DVar1);
    return 0;
  }
  ghTimerThread =
       CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&lpStartAddress_0040b230,
                    (LPVOID)0x0,0,&dwThreadId);
  if (ghTimerThread == (HANDLE)0x0) {
    DVar1 = GetLastError();
    D2GSEventLog(s_D2GSTimerInitialize_00410f98,s_Can_t_CreateThread_D2GSTimerProc_00410f64,DVar1);
  }
  else {
    iVar2 = CleanupRoutineInsert(CleanupRoutineForTimer,s_D2GS_Timer_00410f58);
    if (iVar2 != 0) {
      return 1;
    }
  }
  CleanupRoutineForTimer();
  return 0;
}



int CleanupRoutineForTimer(void)

{
  if (hStopEvent != (HANDLE)0x0) {
    SetEvent(hStopEvent);
    if (ghTimerThread != (HANDLE)0x0) {
      WaitForSingleObject(ghTimerThread,0xffffffff);
      CloseHandle(ghTimerThread);
      ghTimerThread = (HANDLE)0x0;
    }
    CloseHandle(hStopEvent);
    hStopEvent = (HANDLE)0x0;
    return 1;
  }
  return 1;
}



undefined4 D2GSTimerProcessor(void)

{
  int iVar1;
  undefined4 uVar2;
  code *unaff_ESI;
  code *unaff_EDI;
  
  while( true ) {
    iVar1 = (*unaff_ESI)(hStopEvent,100);
    if (iVar1 == -1) {
      uVar2 = (*unaff_EDI)();
      D2GSEventLog(s_D2GSTimerProcessor_00410fc4,s_WaitForSingleObject_failed__Code_00410fd8,uVar2);
      uVar2 = D2GSTimerProcessor();
      return uVar2;
    }
    if (iVar1 == 0) break;
    if (iVar1 == 0x102) {
      FUN_004029a0();
      D2GSGetDataRequestTimerRoutine();
      FUN_00408280();
      FUN_00403500();
      FUN_00403630();
      FUN_00403780();
      D2GSShutdownTimer();
      uVar2 = D2GSTimerProcessor();
      return uVar2;
    }
  }
  D2GSEventLog(s_D2GSTimerProcessor_00410fc4,s_Terminate_timer_thread_00410fac);
  return 1;
}



undefined4 D2GSTimerProcessor(void)

{
  D2GSEventLog(s_D2GSTimerProcessor_00410fc4,s_Terminate_timer_thread_00410fac);
  return 1;
}



int * __cdecl FUN_0040b2b0(char *param_1,char *param_2,uint *param_3)

{
  bool bVar1;
  char cVar2;
  int *_Memory;
  int *_Memory_00;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *local_10;
  int local_c;
  char *local_8;
  size_t local_4;
  
  if (((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (param_3 != (uint *)0x0)) {
    uVar3 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    _Memory = (int *)malloc(~uVar3);
    if (_Memory != (int *)0x0) {
      local_c = 0x20;
      _Memory_00 = (int *)malloc(0x80);
      if (_Memory_00 == (int *)0x0) {
        free(_Memory);
        return (int *)0x0;
      }
      *param_3 = 0;
      *_Memory_00 = 0;
      bVar1 = true;
      local_8 = param_1;
      piVar10 = _Memory;
      local_10 = _Memory_00;
      if (*param_1 != '\0') {
        local_4 = 0x80;
        do {
          cVar2 = *param_2;
          if (cVar2 != '\0') {
            pcVar4 = param_2;
            do {
              if (*local_8 == cVar2) {
                if (!bVar1) {
                  *(undefined *)piVar10 = 0;
                  piVar10 = (int *)((int)piVar10 + 1);
                  bVar1 = true;
                  *param_3 = *param_3 + 1;
                }
                goto LAB_0040b3e5;
              }
              cVar2 = pcVar4[1];
              pcVar4 = pcVar4 + 1;
            } while (cVar2 != '\0');
          }
          piVar8 = _Memory_00;
          if (bVar1) {
            if (local_c <= (int)*param_3) {
              local_4 = local_4 + 0x80;
              local_c = local_c + 0x20;
              piVar8 = (int *)realloc(_Memory_00,local_4);
              local_10 = piVar8;
              if (piVar8 == (int *)0x0) {
                free(_Memory_00);
                free(_Memory);
                return (int *)0x0;
              }
            }
            *(int **)(piVar8 + *param_3) = (int *)((int)piVar10 - (int)_Memory);
            bVar1 = false;
          }
          *(char *)piVar10 = *local_8;
          _Memory_00 = piVar8;
          piVar10 = (int *)((int)piVar10 + 1);
LAB_0040b3e5:
          local_8 = local_8 + 1;
        } while (*local_8 != '\0');
        if (!bVar1) {
          *(undefined *)piVar10 = 0;
          piVar10 = (int *)((int)piVar10 + 1);
          *param_3 = *param_3 + 1;
        }
      }
      uVar3 = *param_3;
      iVar7 = uVar3 * 4;
      if ((iVar7 != 0) &&
         (piVar8 = (int *)malloc((iVar7 - (int)_Memory) + (int)piVar10), piVar8 != (int *)0x0)) {
        uVar5 = (uint)(int *)((int)piVar10 - (int)_Memory) >> 2;
        _Memory_00 = _Memory;
        piVar9 = piVar8 + uVar3;
        while (uVar5 != 0) {
          uVar5 = uVar5 - 1;
          *piVar9 = *_Memory_00;
          _Memory_00 = _Memory_00 + 1;
          piVar9 = piVar9 + 1;
        }
        uVar5 = (uint)(int *)((int)piVar10 - (int)_Memory) & 3;
        while (uVar5 != 0) {
          uVar5 = uVar5 - 1;
          *(undefined *)piVar9 = *(undefined *)_Memory_00;
          _Memory_00 = (int *)((int)_Memory_00 + 1);
          piVar9 = (int *)((int)piVar9 + 1);
        }
        iVar6 = 0;
        _Memory_00 = local_10;
        if (0 < (int)*param_3) {
          do {
            iVar6 = iVar6 + 1;
            *_Memory_00 = (int)piVar8 + *_Memory_00 + iVar7;
            _Memory_00 = _Memory_00 + 1;
          } while (iVar6 < (int)*param_3);
        }
        uVar3 = uVar3 & 0x3fffffff;
        _Memory_00 = local_10;
        piVar10 = piVar8;
        while (uVar3 != 0) {
          uVar3 = uVar3 - 1;
          *piVar10 = *_Memory_00;
          _Memory_00 = _Memory_00 + 1;
          piVar10 = piVar10 + 1;
        }
        iVar7 = 0;
        while (iVar7 != 0) {
          iVar7 = iVar7 + -1;
          *(undefined *)piVar10 = *(undefined *)_Memory_00;
          _Memory_00 = (int *)((int)_Memory_00 + 1);
          piVar10 = (int *)((int)piVar10 + 1);
        }
        free(_Memory);
        free(local_10);
        return piVar8;
      }
      free(_Memory);
      free(_Memory_00);
    }
  }
  return (int *)0x0;
}



int * __cdecl FUN_0040b4e0(int *param_1,uint *param_2)

{
  char cVar1;
  int *piVar2;
  int *_Memory;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *_Memory_00;
  int *piVar8;
  uint local_c;
  size_t local_4;
  
  piVar2 = param_1;
  if ((param_1 != (int *)0x0) && (param_2 != (uint *)0x0)) {
    uVar3 = 0xffffffff;
    _Memory_00 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *(char *)_Memory_00;
      _Memory_00 = (int *)((int)_Memory_00 + 1);
    } while (cVar1 != '\0');
    _Memory_00 = (int *)malloc(~uVar3);
    if (_Memory_00 != (int *)0x0) {
      local_c = 0x20;
      _Memory = (int *)malloc(0x80);
      if (_Memory != (int *)0x0) {
        iVar7 = 0;
        uVar3 = 0;
        *param_2 = 0;
        cVar1 = *(char *)param_1;
        param_1 = _Memory;
        if (cVar1 != '\0') {
          local_4 = 0x80;
          do {
            while ((*(char *)(iVar7 + (int)piVar2) == ' ' ||
                   (*(char *)(iVar7 + (int)piVar2) == '\t'))) {
              iVar7 = iVar7 + 1;
            }
            if (*(char *)(iVar7 + (int)piVar2) == '\0') break;
            piVar8 = param_1;
            if (local_c <= *param_2) {
              local_c = local_c + 0x20;
              local_4 = local_4 + 0x80;
              _Memory = (int *)realloc(_Memory,local_4);
              piVar8 = _Memory;
              if (_Memory == (int *)0x0) {
                free(param_1);
                free(_Memory_00);
                return (int *)0x0;
              }
            }
            param_1 = piVar8;
            _Memory[*param_2] = uVar3;
            *param_2 = *param_2 + 1;
            cVar1 = *(char *)(iVar7 + (int)piVar2);
            if (cVar1 == '\"') {
              cVar1 = *(char *)(iVar7 + 1 + (int)piVar2);
              iVar5 = iVar7;
              while (iVar7 = iVar5 + 1, cVar1 != '\0') {
                if (cVar1 == '\\') {
                  cVar1 = *(char *)(iVar5 + 2 + (int)piVar2);
                  iVar7 = iVar5 + 2;
                  if (cVar1 == '\0') break;
                }
                else {
                  if (cVar1 == '\"') {
                    iVar7 = iVar5 + 2;
                    break;
                  }
                }
                *(char *)(uVar3 + (int)_Memory_00) = cVar1;
                cVar1 = *(char *)(iVar7 + 1 + (int)piVar2);
                uVar3 = uVar3 + 1;
                iVar5 = iVar7;
              }
            }
            else {
              while (((cVar1 != '\0' && (cVar1 != ' ')) && (cVar1 != '\t'))) {
                *(char *)(uVar3 + (int)_Memory_00) = cVar1;
                cVar1 = *(char *)(iVar7 + 1 + (int)piVar2);
                uVar3 = uVar3 + 1;
                iVar7 = iVar7 + 1;
              }
            }
            *(undefined *)(uVar3 + (int)_Memory_00) = 0;
            uVar3 = uVar3 + 1;
          } while (*(char *)(iVar7 + (int)piVar2) != '\0');
        }
        uVar6 = *param_2;
        iVar7 = uVar6 * 4;
        if ((iVar7 != 0) && (piVar2 = (int *)malloc(uVar3 + iVar7), piVar2 != (int *)0x0)) {
          uVar4 = uVar3 >> 2;
          _Memory = _Memory_00;
          piVar8 = piVar2 + uVar6;
          while (uVar4 != 0) {
            uVar4 = uVar4 - 1;
            *piVar8 = *_Memory;
            _Memory = _Memory + 1;
            piVar8 = piVar8 + 1;
          }
          uVar3 = uVar3 & 3;
          while (uVar3 != 0) {
            uVar3 = uVar3 - 1;
            *(undefined *)piVar8 = *(undefined *)_Memory;
            _Memory = (int *)((int)_Memory + 1);
            piVar8 = (int *)((int)piVar8 + 1);
          }
          iVar5 = 0;
          _Memory = param_1;
          if (0 < (int)*param_2) {
            do {
              *_Memory = (int)piVar2 + *_Memory + iVar7;
              iVar5 = iVar5 + 1;
              _Memory = _Memory + 1;
            } while (iVar5 < (int)*param_2);
          }
          uVar6 = uVar6 & 0x3fffffff;
          _Memory = param_1;
          piVar8 = piVar2;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            *piVar8 = *_Memory;
            _Memory = _Memory + 1;
            piVar8 = piVar8 + 1;
          }
          iVar7 = 0;
          while (iVar7 != 0) {
            iVar7 = iVar7 + -1;
            *(undefined *)piVar8 = *(undefined *)_Memory;
            _Memory = (int *)((int)_Memory + 1);
            piVar8 = (int *)((int)piVar8 + 1);
          }
          free(_Memory_00);
          free(param_1);
          return piVar2;
        }
        free(_Memory_00);
        free(param_1);
      }
    }
  }
  return (int *)0x0;
}



char * __cdecl string_color(char *str)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  t_replace *ptVar5;
  char *_Str1;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *local_4;
  
  if (str == (char *)0x0) {
    return (char *)0x0;
  }
  cVar1 = *str;
  puVar6 = (undefined4 *)str;
  _Str1 = str;
  do {
    if (cVar1 == '\0') {
      *(undefined *)puVar6 = 0;
      return str;
    }
    if (*_Str1 == '%') {
      ptVar5 = ColorHackTable;
      local_4 = puVar6;
      pcVar8 = ColorHackTable[0].src;
      while (pcVar8 != (char *)0x0) {
        uVar3 = 0xffffffff;
        pcVar8 = ptVar5->src;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar2 = _strnicmp(_Str1,ptVar5->src,~uVar3 - 1);
        if (iVar2 == 0) {
          uVar3 = 0xffffffff;
          puVar6 = (undefined4 *)ptVar5->dest;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *(char *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          } while (cVar1 != '\0');
          uVar4 = ~uVar3 - 1 >> 2;
          puVar6 = (undefined4 *)ptVar5->dest;
          puVar7 = local_4;
          while (uVar4 != 0) {
            uVar4 = uVar4 - 1;
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar3 = ~uVar3 - 1 & 3;
          while (uVar3 != 0) {
            uVar3 = uVar3 - 1;
            *(undefined *)puVar7 = *(undefined *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          uVar3 = 0xffffffff;
          pcVar8 = ptVar5->src;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          _Str1 = _Str1 + (~uVar3 - 1);
          uVar3 = 0xffffffff;
          pcVar8 = ptVar5->dest;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          puVar6 = (undefined4 *)((int)local_4 + (~uVar3 - 1));
          local_4 = puVar6;
        }
        else {
          ptVar5 = ptVar5 + 1;
        }
        pcVar8 = ptVar5->src;
      }
      *(char *)puVar6 = *_Str1;
    }
    else {
      *(char *)puVar6 = *_Str1;
    }
    cVar1 = _Str1[1];
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    _Str1 = _Str1 + 1;
  } while( true );
}



int D2GSVarsInitialize(void)

{
  char *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0xf9;
  puVar4 = &DAT_006317e0;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = 0x44;
  puVar4 = &AutoUpdate;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  bGERunning = 0;
  hThread = (HANDLE)0x0;
  GetModuleFileNameA((HMODULE)0x0,(LPSTR)&_Str_006316a0,0x104);
  pcVar1 = strrchr((char *)&_Str_006316a0,0x5c);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
    SetCurrentDirectoryA((LPCSTR)&_Str_006316a0);
    D2GSEventLog(s_D2GSInit_00411198,s_Set_current_working_directory_to_004111a4,&_Str_006316a0);
  }
  DVar2 = VersionCheck();
  if (DVar2 == 0) {
    D2GSEventLog(s_D2GSVarsInitialize_00411160,s_Failed_calculating_file_checksum_00411174);
    return 0;
  }
  DAT_0063182c = DVar2;
  iVar3 = charlist_init(1000);
  if (iVar3 != 0) {
    D2GSEventLog(s_D2GSVarsInitialize_00411160,s_Failed_initialize_charlist_table_0041113c);
    return 0;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)&csGameList);
  iVar3 = CleanupRoutineInsert(CleanupRoutineForVars,s_Global_Variables_00411128);
  if (iVar3 != 0) {
    return 1;
  }
  CleanupRoutineForVars();
  return 0;
}



int CleanupRoutineForVars(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&csGameList);
  charlist_destroy();
  return 1;
}



DWORD VersionCheck(void)

{
  char **ppcVar1;
  DWORD DVar2;
  int iVar3;
  undefined **ppuVar4;
  uint local_108;
  char local_104 [260];
  
  local_108 = 0;
  DVar2 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
  if (DVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_0040b970(0x12345678,&local_108,local_104);
  if (iVar3 != 0) {
    if (PTR_s_Patch_d2_mpq_004111cc != (undefined *)0x0) {
      ppuVar4 = &PTR_s_Patch_d2_mpq_004111cc;
      do {
        iVar3 = FUN_0040b970(0x12345678,&local_108,*ppuVar4);
        if (iVar3 == 0) {
          return 0;
        }
        ppcVar1 = ppuVar4 + 1;
        ppuVar4 = ppuVar4 + 1;
      } while (*ppcVar1 != (char *)0x0);
    }
    if (local_108 == 0) {
      local_108 = 0xffffffff;
    }
    return local_108;
  }
  return 0;
}



undefined4 __cdecl FUN_0040b970(uint param_1,uint *param_2,char *param_3)

{
  uint *puVar1;
  FILE *_File;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int local_c;
  uint local_8;
  undefined *local_4;
  
  puVar1 = param_2;
  if (((param_2 != (uint *)0x0) && (param_3 != (char *)0x0)) &&
     (_File = fopen(param_3,(char *)&_Mode_004112ac), _File != (FILE *)0x0)) {
    fseek(_File,0,2);
    local_4 = (undefined *)ftell(_File);
    puVar2 = &DAT_004c4b40;
    if (local_4 < (undefined *)0x4c4b41) {
      puVar2 = local_4;
    }
    param_2 = (uint *)0x0;
    uVar3 = (uint)local_4 / 100;
    param_3 = (char *)0x64;
    local_8 = uVar3;
    do {
      fseek(_File,(long)param_2,0);
      uVar4 = (uint)puVar2 / 100 >> 2;
      while (uVar4 != 0) {
        fread(&local_c,1,4,_File);
        uVar4 = uVar4 - 1;
        *puVar1 = *puVar1 + local_c ^ param_1;
        uVar3 = local_8;
      }
      param_2 = (uint *)((int)param_2 + uVar3);
      param_3 = param_3 + -1;
    } while (param_3 != (char *)0x0);
    fclose(_File);
    *(undefined **)puVar1 = local_4 + *puVar1;
    return 1;
  }
  return 0;
}



void watchdog_init(void)

{
  HANDLE hObject;
  DWORD DVar1;
  DWORD local_4;
  
  DAT_00631560 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00631548);
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,watchdog_thread,(LPVOID)0x0,0,&local_4);
  if (hObject == (HANDLE)0x0) {
    DVar1 = GetLastError();
    D2GSEventLog(s_watchdog_init_004112d4,s_Can_t_CreateThread_watchdog_thre_004112e4,DVar1);
    return;
  }
  CloseHandle(hObject);
  D2GSEventLog(s_watchdog_init_004112d4,s_CreateThread_watchdog_thread___l_004112b0,local_4);
  return;
}



void FUN_0040baf0(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00631548);
  DAT_00631560 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00631548);
  return;
}



// lpStartAddress parameter of CreateThread
// 

void watchdog_thread(void)

{
  int iVar1;
  
LAB_0040bb27:
  Sleep(6000);
  iVar1 = FUN_0040bb80();
  if (iVar1 == 0) goto code_r0x0040bb37;
  goto watchdog_thread;
code_r0x0040bb37:
  if (DAT_004113e8 != (code *)0x0) {
    iVar1 = (*DAT_004113e8)(0);
    if (iVar1 != 0) {
watchdog_thread:
      EnableGSLog = 1;
      D2GSEventLog(s_watchdog_thread_00411314,s_D2GS_maybe_in_deadlock__restart_i_00411324);
      EnableGSLog = 0;
      FUN_00406c40();
      FUN_00406f50(0);
    }
  }
  goto LAB_0040bb27;
}



void watchdog_thread(void)

{
  int iVar1;
  code *unaff_EBX;
  
code_r0x0040bb48:
  do {
    EnableGSLog = 1;
    D2GSEventLog(s_watchdog_thread_00411314,s_D2GS_maybe_in_deadlock__restart_i_00411324);
    EnableGSLog = 0;
    FUN_00406c40();
    FUN_00406f50(0);
    do {
      do {
        (*unaff_EBX)(6000);
        iVar1 = FUN_0040bb80();
        if (iVar1 != 0) goto code_r0x0040bb48;
      } while (DAT_004113e8 == (code *)0x0);
      iVar1 = (*DAT_004113e8)(0);
    } while (iVar1 == 0);
  } while( true );
}



undefined4 FUN_0040bb80(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00631548);
  DAT_00631560 = DAT_00631560 + 1;
  if (0xe < DAT_00631560) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00631548);
    return 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00631548);
  return 0;
}



int send(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040bbc0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = send(s,buf,len,flags);
  return iVar1;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack

void FUN_0040bbd0(D2GSPACKET *param_1)

{
  uint in_EAX;
  D2GSPACKET **ppDVar1;
  undefined4 local_res0;
  
  ppDVar1 = &param_1;
  if (0xfff < in_EAX) {
    do {
      ppDVar1 = ppDVar1 + -0x400;
      in_EAX = in_EAX - 0x1000;
    } while (0xfff < in_EAX);
  }
  *(undefined4 *)((int)ppDVar1 + (-4 - in_EAX)) = local_res0;
  return;
}



// Library Function - Single Match
// Name: __alldiv
// Library: Visual Studio

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  bVar10 = (int)param_2 < 0;
  if (bVar10) {
    bVar9 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar9 - param_2;
  }
  if ((int)param_4 < 0) {
    bVar10 = (bool)(bVar10 + '\x01');
    bVar9 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar9 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar8 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar8 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar8 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (bVar10 == true) {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}



// Library Function - Single Match
// Name: __allmul
// Library: Visual Studio

ulonglong __allmul(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_4 | param_2) == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return (ulonglong)param_1 * (ulonglong)param_3 & 0xffffffff |
         (ulonglong)
         ((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
         param_2 * param_3 + param_1 * param_4) << 0x20;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  undefined4 *puVar1;
  uint uVar2;
  HMODULE pHVar3;
  undefined4 *in_FS_OFFSET;
  HINSTANCE pHVar4;
  byte *pbVar5;
  byte *local_78;
  char **local_74;
  _startupinfo local_70;
  int local_6c;
  char **local_68;
  int local_64;
  _STARTUPINFOA local_60;
  undefined *local_1c;
  undefined4 uStack20;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &DAT_0040c1d0;
  puStack16 = &DAT_0040be64;
  uStack20 = *in_FS_OFFSET;
  *(undefined4 **)in_FS_OFFSET = &uStack20;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  __set_app_type(2);
  _DAT_00631e28 = 0xffffffff;
  _DAT_00631e2c = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_00631570;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_0063156c;
  _DAT_00631e30 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_0040be63();
  if (_DAT_00411350 == 0) {
    __setusermatherr(&LAB_0040be60);
  }
  FUN_0040be4e();
  _initterm(&DAT_0040d008,&DAT_0040d00c);
  local_70 = DAT_00631568;
  __getmainargs(&local_64,&local_74,&local_68,_DoWildCard_00631564,&local_70);
  _initterm(&DAT_0040d000,&DAT_0040d004);
  local_78 = *(byte **)_acmdln_exref;
  if (*local_78 != 0x22) {
    do {
      if (*local_78 < 0x21) goto LAB_0040bdd7;
      local_78 = local_78 + 1;
    } while( true );
  }
  do {
    local_78 = local_78 + 1;
    if (*local_78 == 0) break;
  } while (*local_78 != 0x22);
  if (*local_78 != 0x22) goto LAB_0040bdd7;
  do {
    local_78 = local_78 + 1;
LAB_0040bdd7:
    pbVar5 = local_78;
  } while ((*local_78 != 0) && (*local_78 < 0x21));
  local_60.dwFlags = 0;
  GetStartupInfoA((LPSTARTUPINFOA)&local_60);
  if ((local_60.dwFlags & 1) == 0) {
    uVar2 = 10;
  }
  else {
    uVar2 = (uint)local_60.wShowWindow;
  }
  pHVar4 = (HINSTANCE)0x0;
  pHVar3 = GetModuleHandleA((LPCSTR)0x0);
  local_6c = main((HINSTANCE)pHVar3,pHVar4,(LPCSTR)pbVar5,uVar2);
                    // WARNING: Subroutine does not return
  exit(local_6c);
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x0040be48. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void FUN_0040be4e(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



void FUN_0040be63(void)

{
  return;
}



// WARNING: Exceeded maximum restarts with more pending

uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040be6a. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = _controlfp();
  return uVar1;
}



D2GSINTERFACE * QueryInterface(void)

{
  D2GSINTERFACE *pDVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040be70. Too many branches
                    // WARNING: Treating indirect jump as call
  pDVar1 = Ordinal_10000();
  return pDVar1;
}


