/* Generated by Nim Compiler v0.11.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <sys/types.h>

#include <unistd.h>

#include <setjmp.h>

#include <errno.h>

#include <fcntl.h>

#include <stdio.h>
typedef struct Processobj142405 Processobj142405;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj136027 Streamobj136027;
typedef struct TY121008 TY121008;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
typedef struct Tstartprocessdata143948 Tstartprocessdata143948;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef int TY144026[2];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Processobj142405  {
  TNimObject Sup;
int inhandle;
int outhandle;
int errhandle;
Streamobj136027* instream;
Streamobj136027* outstream;
Streamobj136027* errstream;
pid_t id;
int exitcode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY144063[3];
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
typedef NimStringDesc* TY144201[1];
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15609 raiseAction;
};
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
struct Keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tstartprocessdata143948  {
NCSTRING syscommand;
NCSTRING* sysargs;
NCSTRING* sysenv;
NCSTRING workingdir;
TY144026 pstdin;
TY144026 pstdout;
TY144026 pstderr;
TY144026 perrorpipe;
NIM_BOOL optionpousepath;
NIM_BOOL optionpoparentstreams;
NIM_BOOL optionpostderrtostdout;
};
typedef N_NIMCALL_PTR(void, TY136028) (Streamobj136027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY136032) (Streamobj136027* s);
typedef N_NIMCALL_PTR(void, TY136036) (Streamobj136027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY136041) (Streamobj136027* s);
typedef N_NIMCALL_PTR(NI, TY136045) (Streamobj136027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY136051) (Streamobj136027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY136057) (Streamobj136027* s);
struct  Streamobj136027  {
  TNimObject Sup;
TY136028 closeimpl;
TY136032 atendimpl;
TY136036 setpositionimpl;
TY136041 getpositionimpl;
TY136045 readdataimpl;
TY136051 writedataimpl;
TY136057 flushimpl;
};
typedef NI TY27420[8];
struct  Tpagedesc46354  {
Tpagedesc46354* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct TY121008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  Keyvaluepair133008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, ncpicountProcessors)(void);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP38)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, raiseoserror_115809)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_115833)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NCSTRING*, alloccstringarray_14001)(NimStringDesc** a, NI aLen0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NCSTRING*, envtocstringarray_143854)(void);
N_NIMCALL(void, getenvvarsc_121202)(void);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76243, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NOCONV(void*, alloc0_6017)(NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(NCSTRING*, envtocstringarray_143806)(Stringtableobj133012* t);
N_NIMCALL(NI, nstlen)(Stringtableobj133012* t);
N_NIMCALL(pid_t, startprocessauxfork_144004)(Tstartprocessdata143948* data);
N_CDECL(void, startprocessafterfork_144007)(Tstartprocessdata143948* data);
N_NIMCALL(void, startprocessfail_144824)(Tstartprocessdata143948* data);
N_NOINLINE(void, nosraiseOSError)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
N_NIMCALL(void, dealloccstringarray_14250)(NCSTRING* a);
STRING_LITERAL(TMP39, "/bin/sh", 7);
STRING_LITERAL(TMP43, "-c", 2);
STRING_LITERAL(TMP45, "=", 1);
STRING_LITERAL(TMP50, " ", 1);
extern TNimType NTI3411; /* RootObj */
TNimType NTI142405; /* ProcessObj */
extern TNimType NTI13008; /* FileHandle */
extern TNimType NTI136025; /* Stream */
extern TNimType NTI106285; /* TPid */
extern TNimType NTI5811; /* cint */
TNimType NTI142407; /* Process */
extern TNimType NTI121008; /* seq[string] */
extern Tgcheap48216 gch_48244;
extern TSafePoint* exchandler_17043;
extern TY121008* environment_121009;

N_NIMCALL(NI, nospcountProcessors)(void) {
	NI result;
	result = 0;
	result = ncpicountProcessors();
	return result;
}
N_NIMCALL(void, TMP38)(void* p, NI op) {
	Processobj142405* a;
	a = (Processobj142405*)p;
	nimGCvisit((void*)(*a).instream, op);
	nimGCvisit((void*)(*a).outstream, op);
	nimGCvisit((void*)(*a).errstream, op);
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46346* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NCSTRING*, envtocstringarray_143854)(void) {
	NCSTRING* result;
	NI counter;
	void* LOC5;
	NI i;
	result = 0;
	counter = ((NI) 0);
	{
		NimStringDesc* key_143858;
		NimStringDesc* val_143859;
		key_143858 = 0;
		val_143859 = 0;
		getenvvarsc_121202();
		{
			NI i_143888;
			NI HEX3Atmp_143890;
			NI res_143892;
			i_143888 = 0;
			HEX3Atmp_143890 = 0;
			HEX3Atmp_143890 = (environment_121009 ? (environment_121009->Sup.len-1) : -1);
			res_143892 = ((NI) 0);
			{
				while (1) {
					NI p_143896;
					if (!(res_143892 <= HEX3Atmp_143890)) goto LA4;
					i_143888 = res_143892;
					p_143896 = nsuFindChar(environment_121009->data[i_143888], 61, ((NI) 0));
					key_143858 = copyStrLast(environment_121009->data[i_143888], ((NI) 0), (NI)(p_143896 - ((NI) 1)));
					val_143859 = copyStr(environment_121009->data[i_143888], (NI)(p_143896 + ((NI) 1)));
					counter += ((NI) 1);
					res_143892 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	LOC5 = 0;
	LOC5 = alloc0_6017(((NI) ((NI)((NI)(counter + ((NI) 1)) * ((NI) 8)))));
	result = ((NCSTRING*) (LOC5));
	i = ((NI) 0);
	{
		NimStringDesc* key_143871;
		NimStringDesc* val_143872;
		key_143871 = 0;
		val_143872 = 0;
		getenvvarsc_121202();
		{
			NI i_143909;
			NI HEX3Atmp_143911;
			NI res_143913;
			i_143909 = 0;
			HEX3Atmp_143911 = 0;
			HEX3Atmp_143911 = (environment_121009 ? (environment_121009->Sup.len-1) : -1);
			res_143913 = ((NI) 0);
			{
				while (1) {
					NI p_143917;
					NimStringDesc* x;
					NimStringDesc* LOC10;
					void* LOC11;
					if (!(res_143913 <= HEX3Atmp_143911)) goto LA9;
					i_143909 = res_143913;
					p_143917 = nsuFindChar(environment_121009->data[i_143909], 61, ((NI) 0));
					key_143871 = copyStrLast(environment_121009->data[i_143909], ((NI) 0), (NI)(p_143917 - ((NI) 1)));
					val_143872 = copyStr(environment_121009->data[i_143909], (NI)(p_143917 + ((NI) 1)));
					LOC10 = 0;
					LOC10 = rawNewString(key_143871->Sup.len + val_143872->Sup.len + 1);
appendString(LOC10, key_143871);
appendString(LOC10, ((NimStringDesc*) &TMP45));
appendString(LOC10, val_143872);
					x = LOC10;
					LOC11 = 0;
					LOC11 = alloc_6001(((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
					result[(i)- 0] = ((NCSTRING) (LOC11));
					memcpy(((void*) (result[(i)- 0])), ((void*) ((&x->data[((NI) 0)]))), ((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
					i += ((NI) 1);
					res_143913 += ((NI) 1);
				} LA9: ;
			}
		}
	}
	return result;
}

N_NIMCALL(NCSTRING*, envtocstringarray_143806)(Stringtableobj133012* t) {
	NCSTRING* result;
	NI LOC1;
	void* LOC2;
	NI i;
	result = 0;
	LOC1 = 0;
	LOC1 = nstlen(t);
	LOC2 = 0;
	LOC2 = alloc0_6017(((NI) ((NI)((NI)(LOC1 + ((NI) 1)) * ((NI) 8)))));
	result = ((NCSTRING*) (LOC2));
	i = ((NI) 0);
	{
		NimStringDesc* key_143812;
		NimStringDesc* val_143813;
		key_143812 = 0;
		val_143813 = 0;
		{
			NI h_143832;
			NI HEX3Atmp_143834;
			NI res_143836;
			h_143832 = 0;
			HEX3Atmp_143834 = 0;
			HEX3Atmp_143834 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
			res_143836 = ((NI) 0);
			{
				while (1) {
					if (!(res_143836 <= HEX3Atmp_143834)) goto LA6;
					h_143832 = res_143836;
					{
						NimStringDesc* x;
						NimStringDesc* LOC11;
						void* LOC12;
						if (!!((*t).data->data[h_143832].Field0 == 0)) goto LA9;
						key_143812 = (*t).data->data[h_143832].Field0;
						val_143813 = (*t).data->data[h_143832].Field1;
						LOC11 = 0;
						LOC11 = rawNewString(key_143812->Sup.len + val_143813->Sup.len + 1);
appendString(LOC11, key_143812);
appendString(LOC11, ((NimStringDesc*) &TMP45));
appendString(LOC11, val_143813);
						x = LOC11;
						LOC12 = 0;
						LOC12 = alloc_6001(((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
						result[(i)- 0] = ((NCSTRING) (LOC12));
						memcpy(((void*) (result[(i)- 0])), ((void*) ((&x->data[((NI) 0)]))), ((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
						i += ((NI) 1);
					}
					LA9: ;
					res_143836 += ((NI) 1);
				} LA6: ;
			}
		}
	}
	return result;
}

N_NIMCALL(void, startprocessfail_144824)(Tstartprocessdata143948* data) {
	int error;
	NI LOC1;
	error = errno;
	LOC1 = 0;
	LOC1 = write((*data).perrorpipe[(((NI) 1))- 0], ((void*) ((&error))), ((NI) 4));
	_exit(((NI) 1));
}

N_CDECL(void, startprocessafterfork_144007)(Tstartprocessdata143948* data) {
	int LOC42;
	int LOC43;
	{
		int LOC5;
		int LOC11;
		int LOC17;
		if (!!((*data).optionpoparentstreams)) goto LA3;
		LOC5 = 0;
		LOC5 = close((*data).pstdin[(((NI) 1))- 0]);
		{
			int LOC8;
			LOC8 = 0;
			LOC8 = dup2((*data).pstdin[(((NI) 0))- 0], ((int) 0));
			if (!(LOC8 < ((NI32) 0))) goto LA9;
			startprocessfail_144824(data);
		}
		LA9: ;
		LOC11 = 0;
		LOC11 = close((*data).pstdout[(((NI) 0))- 0]);
		{
			int LOC14;
			LOC14 = 0;
			LOC14 = dup2((*data).pstdout[(((NI) 1))- 0], ((int) 1));
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			startprocessfail_144824(data);
		}
		LA15: ;
		LOC17 = 0;
		LOC17 = close((*data).pstderr[(((NI) 0))- 0]);
		{
			if (!(*data).optionpostderrtostdout) goto LA20;
			{
				int LOC24;
				LOC24 = 0;
				LOC24 = dup2((*data).pstdout[(((NI) 1))- 0], ((int) 2));
				if (!(LOC24 < ((NI32) 0))) goto LA25;
				startprocessfail_144824(data);
			}
			LA25: ;
		}
		goto LA18;
		LA20: ;
		{
			{
				int LOC30;
				LOC30 = 0;
				LOC30 = dup2((*data).pstderr[(((NI) 1))- 0], ((int) 2));
				if (!(LOC30 < ((NI32) 0))) goto LA31;
				startprocessfail_144824(data);
			}
			LA31: ;
		}
		LA18: ;
	}
	LA3: ;
	{
		if (!(((NI) 0) < ((*data).workingdir ? strlen((*data).workingdir) : 0))) goto LA35;
		{
			int LOC39;
			LOC39 = 0;
			LOC39 = chdir((*data).workingdir);
			if (!(LOC39 < ((NI32) 0))) goto LA40;
			startprocessfail_144824(data);
		}
		LA40: ;
	}
	LA35: ;
	LOC42 = 0;
	LOC42 = close((*data).perrorpipe[(((NI) 0))- 0]);
	LOC43 = 0;
	LOC43 = fcntl((*data).perrorpipe[(((NI) 1))- 0], F_SETFD, FD_CLOEXEC);
	{
		int LOC48;
		if (!(*data).optionpousepath) goto LA46;
		LOC48 = 0;
		LOC48 = execvpe((*data).syscommand, (*data).sysargs, (*data).sysenv);
	}
	goto LA44;
	LA46: ;
	{
		int LOC50;
		LOC50 = 0;
		LOC50 = execve((*data).syscommand, (*data).sysargs, (*data).sysenv);
	}
	LA44: ;
	startprocessfail_144824(data);
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

N_NIMCALL(pid_t, startprocessauxfork_144004)(Tstartprocessdata143948* data) {
	pid_t volatile result;
	TSafePoint TMP47;
{	result = 0;
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = pipe((*data).perrorpipe);
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_115833();
		raiseoserror_115809(LOC6);
	}
	LA4: ;
	pushSafePoint(&TMP47);
	TMP47.status = setjmp(TMP47.context);
	if (TMP47.status == 0) {
		pid_t volatile pid;
		Tstartprocessdata143948 datacopy;
		int LOC12;
		int error;
		NI sizeread;
		int LOC24;
		pid = 0;
		datacopy = (*data);
		pid = fork();
		{
			if (!(pid == ((NI) 0))) goto LA10;
			startprocessafterfork_144007((&datacopy));
			_exit(((NI) 1));
		}
		LA10: ;
		LOC12 = 0;
		LOC12 = close((*data).perrorpipe[(((NI) 1))- 0]);
		{
			NI32 LOC17;
			if (!(pid < ((NI) 0))) goto LA15;
			LOC17 = 0;
			LOC17 = oslasterror_115833();
			raiseoserror_115809(LOC17);
		}
		LA15: ;
		error = 0;
		sizeread = read((*data).perrorpipe[(((NI) 0))- 0], ((void*) ((&error))), ((NI) 4));
		{
			NCSTRING LOC22;
			NimStringDesc* LOC23;
			if (!(sizeread == ((NI) 4))) goto LA20;
			LOC22 = 0;
			LOC22 = strerror(error);
			LOC23 = 0;
			LOC23 = cstrToNimstr(LOC22);
			nosraiseOSError(LOC23);
		}
		LA20: ;
		result = pid;
		popSafePoint();
		LOC24 = 0;
		LOC24 = close((*data).perrorpipe[(((NI) 0))- 0]);
		goto BeforeRet;
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		int LOC27;
		LOC27 = 0;
		LOC27 = close((*data).perrorpipe[(((NI) 0))- 0]);
	}
	if (TMP47.status != 0) reraiseException();
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Processobj142405*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj133012* env, NU8 options) {
	Processobj142405* result;
	TY144026 pstdin;
	TY144026 pstdout;
	TY144026 pstderr;
	NimStringDesc* syscommand;
	TY121008* sysargsraw;
	pid_t volatile pid;
	NCSTRING* sysargs;
	TSafePoint TMP44;
	result = 0;
	memset((void*)pstdin, 0, sizeof(pstdin));
	memset((void*)pstdout, 0, sizeof(pstdout));
	memset((void*)pstderr, 0, sizeof(pstderr));
	result = (Processobj142405*) newObj((&NTI142407), sizeof(Processobj142405));
	(*result).Sup.m_type = (&NTI142405);
	(*result).exitcode = ((int) -3);
	{
		if (!!(((options &(1<<((((NU8) 4))&7)))!=0))) goto LA3;
		{
			NIM_BOOL LOC7;
			NIM_BOOL LOC8;
			int LOC9;
			int LOC11;
			int LOC13;
			NI32 LOC16;
			LOC7 = 0;
			LOC8 = 0;
			LOC9 = 0;
			LOC9 = pipe(pstdin);
			LOC8 = !((LOC9 == ((NI32) 0)));
			if (LOC8) goto LA10;
			LOC11 = 0;
			LOC11 = pipe(pstdout);
			LOC8 = !((LOC11 == ((NI32) 0)));
			LA10: ;
			LOC7 = LOC8;
			if (LOC7) goto LA12;
			LOC13 = 0;
			LOC13 = pipe(pstderr);
			LOC7 = !((LOC13 == ((NI32) 0)));
			LA12: ;
			if (!LOC7) goto LA14;
			LOC16 = 0;
			LOC16 = oslasterror_115833();
			raiseoserror_115809(LOC16);
		}
		LA14: ;
	}
	LA3: ;
	syscommand = 0;
	sysargsraw = 0;
	{
		TY144063 LOC21;
		NimStringDesc* LOC22;
		NimStringDesc* LOC23;
		NimStringDesc* LOC24;
		if (!((options &(1<<((((NU8) 2))&7)))!=0)) goto LA19;
		syscommand = copyString(((NimStringDesc*) &TMP39));
		sysargsraw = (TY121008*) newSeq((&NTI121008), 3);
		memset((void*)LOC21, 0, sizeof(LOC21));
		LOC21[0] = copyString(syscommand);
		LOC21[1] = copyString(((NimStringDesc*) &TMP43));
		LOC21[2] = copyString(command);
		LOC22 = 0;
		LOC22 = sysargsraw->data[0]; sysargsraw->data[0] = copyStringRC1(LOC21[0]);
		if (LOC22) nimGCunrefNoCycle(LOC22);
		LOC23 = 0;
		LOC23 = sysargsraw->data[1]; sysargsraw->data[1] = copyStringRC1(LOC21[1]);
		if (LOC23) nimGCunrefNoCycle(LOC23);
		LOC24 = 0;
		LOC24 = sysargsraw->data[2]; sysargsraw->data[2] = copyStringRC1(LOC21[2]);
		if (LOC24) nimGCunrefNoCycle(LOC24);
	}
	goto LA17;
	LA19: ;
	{
		TY144201 LOC26;
		NimStringDesc* LOC27;
		syscommand = copyString(command);
		sysargsraw = (TY121008*) newSeq((&NTI121008), 1);
		memset((void*)LOC26, 0, sizeof(LOC26));
		LOC26[0] = copyString(command);
		LOC27 = 0;
		LOC27 = sysargsraw->data[0]; sysargsraw->data[0] = copyStringRC1(LOC26[0]);
		if (LOC27) nimGCunrefNoCycle(LOC27);
		{
			NimStringDesc* arg_144222;
			NI i_144479;
			arg_144222 = 0;
			i_144479 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC31;
					if (!(i_144479 < argsLen0)) goto LA30;
					arg_144222 = args[i_144479];
					sysargsraw = (TY121008*) incrSeq(&(sysargsraw)->Sup, sizeof(NimStringDesc*));
					LOC31 = 0;
					LOC31 = sysargsraw->data[sysargsraw->Sup.len-1]; sysargsraw->data[sysargsraw->Sup.len-1] = copyStringRC1(arg_144222);
					if (LOC31) nimGCunrefNoCycle(LOC31);
					i_144479 += ((NI) 1);
				} LA30: ;
			}
		}
	}
	LA17: ;
	pid = 0;
	sysargs = alloccstringarray_14001(sysargsraw->data, sysargsraw->Sup.len);
	pushSafePoint(&TMP44);
	TMP44.status = setjmp(TMP44.context);
	if (TMP44.status == 0) {
		NCSTRING* sysenv;
		TSafePoint TMP46;
		{
			if (!(env == NIM_NIL)) goto LA35;
			sysenv = envtocstringarray_143854();
		}
		goto LA33;
		LA35: ;
		{
			sysenv = envtocstringarray_143806(env);
		}
		LA33: ;
		pushSafePoint(&TMP46);
		TMP46.status = setjmp(TMP46.context);
		if (TMP46.status == 0) {
			Tstartprocessdata143948 data;
			memset((void*)(&data), 0, sizeof(data));
			data.syscommand = syscommand->data;
			data.sysargs = sysargs;
			data.sysenv = sysenv;
			memcpy((void*)data.pstdin, (NIM_CONST void*)pstdin, sizeof(data.pstdin));
			memcpy((void*)data.pstdout, (NIM_CONST void*)pstdout, sizeof(data.pstdout));
			memcpy((void*)data.pstderr, (NIM_CONST void*)pstderr, sizeof(data.pstderr));
			data.optionpoparentstreams = ((options &(1<<((((NU8) 4))&7)))!=0);
			data.optionpousepath = ((options &(1<<((((NU8) 1))&7)))!=0);
			data.optionpostderrtostdout = ((options &(1<<((((NU8) 3))&7)))!=0);
			data.workingdir = workingdir->data;
			pid = startprocessauxfork_144004((&data));
			{
				NimStringDesc* LOC43;
				if (!((options &(1<<((((NU8) 0))&7)))!=0)) goto LA41;
				LOC43 = 0;
				LOC43 = nsuJoinSep(args, argsLen0, ((NimStringDesc*) &TMP50));
				printf("%s%s%s\012", command? (command)->data:"nil", ((NimStringDesc*) &TMP50)? (((NimStringDesc*) &TMP50))->data:"nil", LOC43? (LOC43)->data:"nil");
			}
			LA41: ;
			(*result).id = pid;
			{
				if (!((options &(1<<((((NU8) 4))&7)))!=0)) goto LA46;
				(*result).inhandle = ((int) 0);
				(*result).outhandle = ((int) 1);
				{
					if (!((options &(1<<((((NU8) 3))&7)))!=0)) goto LA50;
					(*result).errhandle = (*result).outhandle;
				}
				goto LA48;
				LA50: ;
				{
					(*result).errhandle = ((int) 2);
				}
				LA48: ;
			}
			goto LA44;
			LA46: ;
			{
				int LOC60;
				int LOC61;
				int LOC62;
				(*result).inhandle = pstdin[(((NI) 1))- 0];
				(*result).outhandle = pstdout[(((NI) 0))- 0];
				{
					int LOC58;
					if (!((options &(1<<((((NU8) 3))&7)))!=0)) goto LA56;
					(*result).errhandle = (*result).outhandle;
					LOC58 = 0;
					LOC58 = close(pstderr[(((NI) 0))- 0]);
				}
				goto LA54;
				LA56: ;
				{
					(*result).errhandle = pstderr[(((NI) 0))- 0];
				}
				LA54: ;
				LOC60 = 0;
				LOC60 = close(pstderr[(((NI) 1))- 0]);
				LOC61 = 0;
				LOC61 = close(pstdin[(((NI) 0))- 0]);
				LOC62 = 0;
				LOC62 = close(pstdout[(((NI) 1))- 0]);
			}
			LA44: ;
			popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			dealloccstringarray_14250(sysenv);
		}
		if (TMP46.status != 0) reraiseException();
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		dealloccstringarray_14250(sysargs);
	}
	if (TMP44.status != 0) reraiseException();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit)(void) {
static TNimNode* TMP35[8];
static TNimNode TMP15[9];
NTI142405.size = sizeof(Processobj142405);
NTI142405.kind = 17;
NTI142405.base = (&NTI3411);
TMP35[0] = &TMP15[1];
TMP15[1].kind = 1;
TMP15[1].offset = offsetof(Processobj142405, inhandle);
TMP15[1].typ = (&NTI13008);
TMP15[1].name = "inHandle";
TMP35[1] = &TMP15[2];
TMP15[2].kind = 1;
TMP15[2].offset = offsetof(Processobj142405, outhandle);
TMP15[2].typ = (&NTI13008);
TMP15[2].name = "outHandle";
TMP35[2] = &TMP15[3];
TMP15[3].kind = 1;
TMP15[3].offset = offsetof(Processobj142405, errhandle);
TMP15[3].typ = (&NTI13008);
TMP15[3].name = "errHandle";
TMP35[3] = &TMP15[4];
TMP15[4].kind = 1;
TMP15[4].offset = offsetof(Processobj142405, instream);
TMP15[4].typ = (&NTI136025);
TMP15[4].name = "inStream";
TMP35[4] = &TMP15[5];
TMP15[5].kind = 1;
TMP15[5].offset = offsetof(Processobj142405, outstream);
TMP15[5].typ = (&NTI136025);
TMP15[5].name = "outStream";
TMP35[5] = &TMP15[6];
TMP15[6].kind = 1;
TMP15[6].offset = offsetof(Processobj142405, errstream);
TMP15[6].typ = (&NTI136025);
TMP15[6].name = "errStream";
TMP35[6] = &TMP15[7];
TMP15[7].kind = 1;
TMP15[7].offset = offsetof(Processobj142405, id);
TMP15[7].typ = (&NTI106285);
TMP15[7].name = "id";
TMP35[7] = &TMP15[8];
TMP15[8].kind = 1;
TMP15[8].offset = offsetof(Processobj142405, exitcode);
TMP15[8].typ = (&NTI5811);
TMP15[8].name = "exitCode";
TMP15[0].len = 8; TMP15[0].kind = 2; TMP15[0].sons = &TMP35[0];
NTI142405.node = &TMP15[0];
NTI142407.size = sizeof(Processobj142405*);
NTI142407.kind = 22;
NTI142407.base = (&NTI142405);
NTI142407.marker = TMP38;
}

