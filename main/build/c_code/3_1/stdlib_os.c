/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <sys/stat.h>

#include <sys/types.h>

#include <time.h>

#include <string.h>

#include <errno.h>

#include <stdio.h>
typedef struct TY121208 TY121208;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Oserror3433 Oserror3433;
typedef struct Systemerror3429 Systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46547 Tcell46547;
typedef struct Tcellseq46563 Tcellseq46563;
typedef struct Tgcheap48416 Tgcheap48416;
typedef struct Tcellset46559 Tcellset46559;
typedef struct Tpagedesc46555 Tpagedesc46555;
typedef struct Tmemregion28410 Tmemregion28410;
typedef struct Tsmallchunk27640 Tsmallchunk27640;
typedef struct Tllchunk28404 Tllchunk28404;
typedef struct Tbigchunk27642 Tbigchunk27642;
typedef struct Tintset27617 Tintset27617;
typedef struct Ttrunk27613 Ttrunk27613;
typedef struct Tavlnode28408 Tavlnode28408;
typedef struct Tgcstat48414 Tgcstat48414;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Systemerror3429  {
  Exception Sup;
};
struct  Oserror3433  {
  Systemerror3429 Sup;
NI32 errorcode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46547  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46563  {
NI len;
NI cap;
Tcell46547** d;
};
struct  Tcellset46559  {
NI counter;
NI max;
Tpagedesc46555* head;
Tpagedesc46555** data;
};
typedef Tsmallchunk27640* TY28422[512];
typedef Ttrunk27613* Ttrunkbuckets27615[256];
struct  Tintset27617  {
Ttrunkbuckets27615 data;
};
struct  Tmemregion28410  {
NI minlargeobj;
NI maxlargeobj;
TY28422 freesmallchunks;
Tllchunk28404* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27642* freechunkslist;
Tintset27617 chunkstarts;
Tavlnode28408* root;
Tavlnode28408* deleted;
Tavlnode28408* last;
Tavlnode28408* freeavlnodes;
};
struct  Tgcstat48414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48416  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46563 zct;
Tcellseq46563 decstack;
Tcellset46559 cycleroots;
Tcellseq46563 tempstack;
NI recgclock;
Tmemregion28410 region;
Tgcstat48414 stat;
};
typedef NI TY27620[16];
struct  Tpagedesc46555  {
Tpagedesc46555* next;
NI key;
TY27620 bits;
};
struct  Tbasechunk27638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27640  {
  Tbasechunk27638 Sup;
Tsmallchunk27640* next;
Tsmallchunk27640* prev;
Tfreecell27630* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28404  {
NI size;
NI acc;
Tllchunk28404* next;
};
struct  Tbigchunk27642  {
  Tbasechunk27638 Sup;
Tbigchunk27642* next;
Tbigchunk27642* prev;
NI align;
NF data;
};
struct  Ttrunk27613  {
Ttrunk27613* next;
NI key;
TY27620 bits;
};
typedef Tavlnode28408* TY28414[2];
struct  Tavlnode28408  {
TY28414 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
struct TY121208 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, rawcreatedir_123043)(NimStringDesc* dir);
N_NIMCALL(void, raiseoserror_116009)(NI32 errorcode);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, oserrormsg_115820)(NI32 errorcode);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46547* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46563* s, Tcell46547* c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NI32, oslasterror_116033)(void);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76443, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
STRING_LITERAL(TMP37, "", 0);
STRING_LITERAL(TMP38, "unknown OS error", 16);
NIM_BOOL envcomputed_121207;
TY121208* environment_121209;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType NTI116012; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern Tgcheap48416 gch_48444;

N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(dir->data, (&res));
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISDIR(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, oserrormsg_115820)(NI32 errorcode) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP37));
	{
		NCSTRING LOC5;
		if (!!((errorcode == ((NI32) 0)))) goto LA3;
		LOC5 = 0;
		LOC5 = strerror(errorcode);
		result = cstrToNimstr(LOC5);
	}
	LA3: ;
	return result;
}

static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr) {
	Tcell46547* result;
	result = 0;
	result = ((Tcell46547*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46547))))));
	return result;
}

static N_INLINE(void, rtladdzct_51604)(Tcell46547* c) {
	addzct_50017((&gch_48444.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46547* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_50046(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46547* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_50046((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51604(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46547* c;
	c = usrtocell_50046(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51604(c);
	}
	LA3: ;
}

N_NIMCALL(void, raiseoserror_116009)(NI32 errorcode) {
	Oserror3433* e;
	e = 0;
	e = (Oserror3433*) newObj((&NTI116012), sizeof(Oserror3433));
	(*e).Sup.Sup.Sup.m_type = (&NTI3433);
	(*e).errorcode = errorcode;
	asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), oserrormsg_115820(errorcode));
	{
		NimStringDesc* LOC5;
		if (!(((*e).Sup.Sup.message) && ((*e).Sup.Sup.message)->Sup.len == 0)) goto LA3;
		LOC5 = 0;
		LOC5 = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP38));
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	raiseException((Exception*)e, "OSError");
}

N_NIMCALL(NI32, oslasterror_116033)(void) {
	NI32 result;
	result = 0;
	result = errno;
	return result;
}

N_NIMCALL(void, rawcreatedir_123043)(NimStringDesc* dir) {
	{
		NIM_BOOL LOC3;
		int LOC4;
		NI32 LOC8;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = mkdir(dir->data, ((mode_t) 511));
		LOC3 = !((LOC4 == ((NI32) 0)));
		if (!(LOC3)) goto LA5;
		LOC3 = !((errno == EEXIST));
		LA5: ;
		if (!LOC3) goto LA6;
		LOC8 = 0;
		LOC8 = oslasterror_116033();
		raiseoserror_116009(LOC8);
	}
	LA6: ;
}

N_NIMCALL(void, noscreateDir)(NimStringDesc* dir) {
	NIM_BOOL omitnext;
	omitnext = NIM_FALSE;
	{
		NI i_123411;
		NI HEX3Atmp_123424;
		NI res_123427;
		i_123411 = 0;
		HEX3Atmp_123424 = 0;
		HEX3Atmp_123424 = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
		res_123427 = ((NI) 1);
		{
			while (1) {
				if (!(res_123427 <= HEX3Atmp_123424)) goto LA3;
				i_123411 = res_123427;
				{
					if (!(((NU8)(dir->data[i_123411])) == ((NU8)(47)) || ((NU8)(dir->data[i_123411])) == ((NU8)(47)))) goto LA6;
					{
						if (!omitnext) goto LA10;
						omitnext = NIM_FALSE;
					}
					goto LA8;
					LA10: ;
					{
						NimStringDesc* LOC13;
						LOC13 = 0;
						LOC13 = copyStrLast(dir, ((NI) 0), (NI)(i_123411 - ((NI) 1)));
						rawcreatedir_123043(LOC13);
					}
					LA8: ;
				}
				LA6: ;
				res_123427 += ((NI) 1);
			} LA3: ;
		}
	}
	rawcreatedir_123043(dir);
}

N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(filename->data, (&res));
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISREG(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, nosremoveFile)(NimStringDesc* file) {
	{
		NIM_BOOL LOC3;
		int LOC4;
		Oserror3433* e_121003;
		NCSTRING LOC8;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = remove(file->data);
		LOC3 = !((LOC4 == ((NI32) 0)));
		if (!(LOC3)) goto LA5;
		LOC3 = !((errno == ENOENT));
		LA5: ;
		if (!LOC3) goto LA6;
		e_121003 = 0;
		e_121003 = (Oserror3433*) newObj((&NTI116012), sizeof(Oserror3433));
		(*e_121003).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC8 = 0;
		LOC8 = strerror(errno);
		asgnRefNoCycle((void**) (&(*e_121003).Sup.Sup.message), cstrToNimstr(LOC8));
		raiseException((Exception*)e_121003, "OSError");
	}
	LA6: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void) {
}

