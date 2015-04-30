/* Generated by Nim Compiler v0.11.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tguid105614 Tguid105614;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct Twin32finddata104219 Twin32finddata104219;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tsecurityattributes103236 Tsecurityattributes103236;
typedef struct Tstartupinfo103238 Tstartupinfo103238;
typedef struct Tprocessinformation103240 Tprocessinformation103240;
typedef struct Tfiletime103242 Tfiletime103242;
typedef NI8 TY105627[8];
struct  Tguid105614  {
NI32 D1;
NI16 D2;
NI16 D3;
TY105627 D4;
};
typedef NI8 TY105708[8];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI32, TY103811) (NI32 nbufferlength, NI16* lpbuffer);
typedef N_STDCALL_PTR(NI32, TY103663) (NI32 dwflags, void* lpsource, NI32 dwmessageid, NI32 dwlanguageid, void* lpbuffer, NI32 nsize, void* Arguments);
typedef N_STDCALL_PTR(void, TY103805) (void* p);
typedef N_STDCALL_PTR(NI32, TY103658) (void);
typedef N_STDCALL_PTR(NI, TY104240) (NI16* lpfilename, Twin32finddata104219* lpfindfiledata);
typedef N_STDCALL_PTR(NI32, TY105327) (NI16* pathname);
typedef N_STDCALL_PTR(NI32, TY104421) (NI16* lpfilename, NI32 dwfileattributes);
typedef N_STDCALL_PTR(NI32, TY104245) (NI hfindfile, Twin32finddata104219* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY104405) (NI hfindfile);
typedef N_STDCALL_PTR(NI16*, TY104435) (void);
typedef N_STDCALL_PTR(NI32, TY104437) (NI16* para1);
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef N_STDCALL_PTR(NI32, TY103453) (NI* hreadpipe, NI* hwritepipe, Tsecurityattributes103236* lppipeattributes, NI32 nsize);
typedef N_STDCALL_PTR(NI, TY103639) (NI32 nstdhandle);
typedef N_STDCALL_PTR(NI32, TY103464) (NI16* lpapplicationname, NI16* lpcommandline, Tsecurityattributes103236* lpprocessattributes, Tsecurityattributes103236* lpthreadattributes, NI32 binherithandles, NI32 dwcreationflags, NI16* lpenvironment, NI16* lpcurrentdirectory, Tstartupinfo103238* lpstartupinfo, Tprocessinformation103240* lpprocessinformation);
typedef N_STDCALL_PTR(NI32, TY103425) (NI hobject);
typedef N_STDCALL_PTR(void, TY104632) (NI32 dwmilliseconds);
struct  Tfiletime103242  {
NI32 dwlowdatetime;
NI32 dwhighdatetime;
};
typedef NI16 TY104228[260];
typedef NI16 TY104232[14];
struct  Twin32finddata104219  {
NI32 dwfileattributes;
Tfiletime103242 ftcreationtime;
Tfiletime103242 ftlastaccesstime;
Tfiletime103242 ftlastwritetime;
NI32 nfilesizehigh;
NI32 nfilesizelow;
NI32 dwreserved0;
NI32 dwreserved1;
TY104228 cfilename;
TY104232 calternatefilename;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tsecurityattributes103236  {
NI32 nlength;
void* lpsecuritydescriptor;
NI32 binherithandle;
};
struct  Tstartupinfo103238  {
NI32 cb;
NCSTRING lpreserved;
NCSTRING lpdesktop;
NCSTRING lptitle;
NI32 dwx;
NI32 dwy;
NI32 dwxsize;
NI32 dwysize;
NI32 dwxcountchars;
NI32 dwycountchars;
NI32 dwfillattribute;
NI32 dwflags;
NI16 wshowwindow;
NI16 cbreserved2;
void* lpreserved2;
NI hstdinput;
NI hstdoutput;
NI hstderror;
};
struct  Tprocessinformation103240  {
NI hprocess;
NI hthread;
NI32 dwprocessid;
NI32 dwthreadid;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
NIM_CONST TY105708 TMP15 = {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
;
NIM_CONST TY105708 TMP16 = {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
;
STRING_LITERAL(TMP29, "kernel32", 8);
STRING_LITERAL(TMP30, "kernel32", 8);
Tguid105614 Wsaidconnectex_105710;
Tguid105614 Wsaidacceptex_105714;
Tguid105614 Wsaidgetacceptexsockaddrs_105718;
static void* TMP28;
TY103811 Dl_103810;
TY103663 Dl_103662;
TY103805 Dl_103804;
TY103658 Dl_103657;
TY104240 Dl_104239;
TY105327 Dl_105326;
TY104421 Dl_104420;
TY104245 Dl_104244;
TY104405 Dl_104404;
TY104435 Dl_104434;
TY104437 Dl_104436;
TNimType NTI103216; /* THandle */
TY103453 Dl_103452;
TY103639 Dl_103638;
TY103464 Dl_103463;
TY103425 Dl_103424;
TY104632 Dl_104631;
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanInit)(void) {
	Tguid105614 LOC1;
	Tguid105614 LOC2;
	Tguid105614 LOC3;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.D1 = ((NI32) 631375801);
	LOC1.D2 = ((NI16) -8717);
	LOC1.D3 = ((NI16) 18016);
	memcpy((void*)LOC1.D4, (NIM_CONST void*)TMP15, sizeof(LOC1.D4));
	Wsaidconnectex_105710 = LOC1;
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	LOC2.D1 = ((NI32) -1254720015);
	LOC2.D2 = ((NI16) -13396);
	LOC2.D3 = ((NI16) 4559);
	memcpy((void*)LOC2.D4, (NIM_CONST void*)TMP16, sizeof(LOC2.D4));
	Wsaidacceptex_105714 = LOC2;
	memset((void*)(&LOC3), 0, sizeof(LOC3));
	LOC3.D1 = ((NI32) -1254720014);
	LOC3.D2 = ((NI16) -13396);
	LOC3.D3 = ((NI16) 4559);
	memcpy((void*)LOC3.D4, (NIM_CONST void*)TMP16, sizeof(LOC3.D4));
	Wsaidgetacceptexsockaddrs_105718 = LOC3;
}

NIM_EXTERNC N_NOINLINE(void, stdlib_winleanDatInit)(void) {
NTI103216.size = sizeof(NI);
NTI103216.kind = 31;
NTI103216.base = 0;
NTI103216.flags = 3;
if (!((TMP28 = nimLoadLibrary((NimStringDesc*) &TMP29))
)) nimLoadLibraryError((NimStringDesc*) &TMP30);
	Dl_103810 = (TY103811) nimGetProcAddr(TMP28, "GetCurrentDirectoryW");
	Dl_103662 = (TY103663) nimGetProcAddr(TMP28, "FormatMessageW");
	Dl_103804 = (TY103805) nimGetProcAddr(TMP28, "LocalFree");
	Dl_103657 = (TY103658) nimGetProcAddr(TMP28, "GetLastError");
	Dl_104239 = (TY104240) nimGetProcAddr(TMP28, "FindFirstFileW");
	Dl_105326 = (TY105327) nimGetProcAddr(TMP28, "DeleteFileW");
	Dl_104420 = (TY104421) nimGetProcAddr(TMP28, "SetFileAttributesW");
	Dl_104244 = (TY104245) nimGetProcAddr(TMP28, "FindNextFileW");
	Dl_104404 = (TY104405) nimGetProcAddr(TMP28, "FindClose");
	Dl_104434 = (TY104435) nimGetProcAddr(TMP28, "GetEnvironmentStringsW");
	Dl_104436 = (TY104437) nimGetProcAddr(TMP28, "FreeEnvironmentStringsW");
	Dl_103452 = (TY103453) nimGetProcAddr(TMP28, "CreatePipe");
	Dl_103638 = (TY103639) nimGetProcAddr(TMP28, "GetStdHandle");
	Dl_103463 = (TY103464) nimGetProcAddr(TMP28, "CreateProcessW");
	Dl_103424 = (TY103425) nimGetProcAddr(TMP28, "CloseHandle");
	Dl_104631 = (TY104632) nimGetProcAddr(TMP28, "Sleep");
}

