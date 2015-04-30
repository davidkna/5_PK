/* Generated by Nim Compiler v0.11.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct TY122008 TY122008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Oserror3433 Oserror3433;
typedef struct Systemerror3429 Systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef N_STDCALL_PTR(NI32, TY103418) (NI16* lpfilename);
typedef N_STDCALL_PTR(NI32, TY102818) (NI16* pathname, void* security);
typedef N_STDCALL_PTR(NI32, TY102658) (void);
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
typedef N_STDCALL_PTR(NI32, TY102663) (NI32 dwflags, void* lpsource, NI32 dwmessageid, NI32 dwlanguageid, void* lpbuffer, NI32 nsize, void* Arguments);
typedef N_STDCALL_PTR(void, TY102805) (void* p);
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
typedef N_STDCALL_PTR(NI32, TY104327) (NI16* pathname);
typedef N_STDCALL_PTR(NI32, TY103421) (NI16* lpfilename, NI32 dwfileattributes);
typedef NI TY27420[16];
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
struct TY122008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI16*, newwidecstring_80805)(NimStringDesc* s);
N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_NIMCALL(void, rawcreatedir_124041)(NimStringDesc* dir);
N_NIMCALL(void, raiseoserror_113430)(NI32 errorcode);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, oserrormsg_113020)(NI32 errorcode);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, HEX24_80989)(NI16* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NI32, oslasterror_113454)(void);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76243, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
STRING_LITERAL(TMP46, "", 0);
STRING_LITERAL(TMP47, "unknown OS error", 16);
NIM_BOOL envcomputed_122007;
TY122008* environment_122009;
TY122008* ownargv_126609;
extern TY103418 Dl_103417;
extern TY102818 Dl_102817;
extern TY102658 Dl_102657;
extern TNimType NTI113433; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern TY102663 Dl_102662;
extern TY102805 Dl_102804;
extern Tgcheap48216 gch_48244;
extern TY104327 Dl_104326;
extern TY103421 Dl_103420;

N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	NI32 a;
	NI16* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = newwidecstring_80805(dir);
	a = Dl_103417(LOC1);
	{
		if (!!((a == ((NI32) -1)))) goto LA4;
		result = !(((NI32)(a & ((NI32) 16)) == ((NI32) 0)));
	}
	LA4: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path) {
	NIM_BOOL result;
	NI len;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	NIM_BOOL LOC5;
	NIM_BOOL LOC6;
	result = 0;
	len = (path ? path->Sup.len : 0);
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = (((NI) 1) < len);
	if (!(LOC2)) goto LA3;
	LOC2 = (((NU8)(path->data[((NI) 0)])) == ((NU8)(47)) || ((NU8)(path->data[((NI) 0)])) == ((NU8)(92)));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC5 = 0;
	LOC6 = 0;
	LOC6 = (((NI) 2) < len);
	if (!(LOC6)) goto LA7;
	LOC6 = (((NU8)(path->data[((NI) 0)])) >= ((NU8)(65)) && ((NU8)(path->data[((NI) 0)])) <= ((NU8)(90)) || ((NU8)(path->data[((NI) 0)])) >= ((NU8)(97)) && ((NU8)(path->data[((NI) 0)])) <= ((NU8)(122)));
	LA7: ;
	LOC5 = LOC6;
	if (!(LOC5)) goto LA8;
	LOC5 = ((NU8)(path->data[((NI) 1)]) == (NU8)(58));
	LA8: ;
	LOC1 = LOC5;
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NimStringDesc*, oserrormsg_113020)(NI32 errorcode) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP46));
	{
		NI16* msgbuf;
		if (!!((errorcode == ((NI32) 0)))) goto LA3;
		msgbuf = 0;
		{
			NI32 LOC7;
			LOC7 = 0;
			LOC7 = Dl_102662(((NI32) 4864), NIM_NIL, errorcode, ((NI32) 0), ((void*) (&msgbuf)), ((NI32) 0), NIM_NIL);
			if (!!((LOC7 == ((NI32) 0)))) goto LA8;
			result = HEX24_80989(msgbuf);
			{
				if (!!((msgbuf == NIM_NIL))) goto LA12;
				Dl_102804(((void*) (msgbuf)));
			}
			LA12: ;
		}
		LA8: ;
	}
	LA3: ;
	return result;
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46346* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(void, raiseoserror_113430)(NI32 errorcode) {
	Oserror3433* e;
	e = 0;
	e = (Oserror3433*) newObj((&NTI113433), sizeof(Oserror3433));
	(*e).Sup.Sup.Sup.m_type = (&NTI3433);
	(*e).errorcode = errorcode;
	asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), oserrormsg_113020(errorcode));
	{
		NimStringDesc* LOC5;
		if (!(((*e).Sup.Sup.message) && ((*e).Sup.Sup.message)->Sup.len == 0)) goto LA3;
		LOC5 = 0;
		LOC5 = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP47));
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	raiseException((Exception*)e, "OSError");
}

N_NIMCALL(NI32, oslasterror_113454)(void) {
	NI32 result;
	result = 0;
	result = Dl_102657();
	return result;
}

N_NIMCALL(void, rawcreatedir_124041)(NimStringDesc* dir) {
	NI32 res;
	NI16* LOC1;
	LOC1 = 0;
	LOC1 = newwidecstring_80805(dir);
	res = Dl_102817(LOC1, NIM_NIL);
	{
		NIM_BOOL LOC4;
		NI32 LOC6;
		NI32 LOC9;
		LOC4 = 0;
		LOC4 = (res == ((NI32) 0));
		if (!(LOC4)) goto LA5;
		LOC6 = 0;
		LOC6 = Dl_102657();
		LOC4 = !((LOC6 == ((NI32) 183)));
		LA5: ;
		if (!LOC4) goto LA7;
		LOC9 = 0;
		LOC9 = oslasterror_113454();
		raiseoserror_113430(LOC9);
	}
	LA7: ;
}

N_NIMCALL(void, noscreateDir)(NimStringDesc* dir) {
	NIM_BOOL omitnext;
	omitnext = NIM_FALSE;
	omitnext = nosisAbsolute(dir);
	{
		NI i_124611;
		NI HEX3Atmp_124624;
		NI res_124627;
		i_124611 = 0;
		HEX3Atmp_124624 = 0;
		HEX3Atmp_124624 = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
		res_124627 = ((NI) 1);
		{
			while (1) {
				if (!(res_124627 <= HEX3Atmp_124624)) goto LA3;
				i_124611 = res_124627;
				{
					if (!(((NU8)(dir->data[i_124611])) == ((NU8)(92)) || ((NU8)(dir->data[i_124611])) == ((NU8)(47)))) goto LA6;
					{
						if (!omitnext) goto LA10;
						omitnext = NIM_FALSE;
					}
					goto LA8;
					LA10: ;
					{
						NimStringDesc* LOC13;
						LOC13 = 0;
						LOC13 = copyStrLast(dir, ((NI) 0), (NI)(i_124611 - ((NI) 1)));
						rawcreatedir_124041(LOC13);
					}
					LA8: ;
				}
				LA6: ;
				res_124627 += ((NI) 1);
			} LA3: ;
		}
	}
	rawcreatedir_124041(dir);
}

N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	NI32 a;
	NI16* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = newwidecstring_80805(filename);
	a = Dl_103417(LOC1);
	{
		if (!!((a == ((NI32) -1)))) goto LA4;
		result = ((NI32)(a & ((NI32) 16)) == ((NI32) 0));
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, nosremoveFile)(NimStringDesc* file) {
	NI16* f;
	f = newwidecstring_80805(file);
	{
		NI32 LOC3;
		LOC3 = 0;
		LOC3 = Dl_104326(f);
		if (!(LOC3 == ((NI32) 0))) goto LA4;
		{
			NI32 LOC8;
			LOC8 = 0;
			LOC8 = Dl_102657();
			if (!(LOC8 == ((NI32) 5))) goto LA9;
			{
				NI32 LOC13;
				NI32 LOC16;
				LOC13 = 0;
				LOC13 = Dl_103420(f, ((NI32) 128));
				if (!(LOC13 == ((NI32) 0))) goto LA14;
				LOC16 = 0;
				LOC16 = oslasterror_113454();
				raiseoserror_113430(LOC16);
			}
			LA14: ;
			{
				NI32 LOC19;
				NI32 LOC22;
				LOC19 = 0;
				LOC19 = Dl_104326(f);
				if (!(LOC19 == ((NI32) 0))) goto LA20;
				LOC22 = 0;
				LOC22 = oslasterror_113454();
				raiseoserror_113430(LOC22);
			}
			LA20: ;
		}
		LA9: ;
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void) {
}

