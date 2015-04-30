/* Generated by Nim Compiler v0.11.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <glob.h>

#include <string.h>

#include <sys/types.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46346 Tcell46346;
typedef struct TNimType TNimType;
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
typedef struct Processobj142405 Processobj142405;
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct TNimNode TNimNode;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct TNimObject TNimObject;
typedef struct Streamobj136027 Streamobj136027;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NOCONV_PTR(int, TY109647) (NCSTRING x1, int x2);
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
typedef NimStringDesc* TY142637[1];
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
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
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
struct Keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  Keyvaluepair133008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, HEX2F_118292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void, nosremoveFile)(NimStringDesc* file);
N_NIMCALL(NI, nospcountProcessors)(void);
N_NIMCALL(Processobj142405*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj133012* env, NU8 options);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, nossleep)(NI milsecs);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_linuxInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_linuxDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, PKInit)(void);
NIM_EXTERNC N_NOINLINE(void, PKDatInit)(void);
STRING_LITERAL(TMP33, "testData", 8);
STRING_LITERAL(TMP34, "*.csv.lock", 10);
STRING_LITERAL(TMP52, "main", 4);
STRING_LITERAL(TMP53, "", 0);
NimStringDesc* file_147004;
extern Tgcheap48216 gch_48244;
NI n_147036;
NI i_147053;

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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit();
	stdlib_parseutilsDatInit();
	stdlib_strutilsDatInit();
	stdlib_timesDatInit();
	stdlib_posixDatInit();
	stdlib_osDatInit();
	stdlib_hashesDatInit();
	stdlib_strtabsDatInit();
	stdlib_streamsDatInit();
	stdlib_linuxDatInit();
	stdlib_cpuinfoDatInit();
	stdlib_osprocDatInit();
	PKDatInit();
	stdlib_parseutilsInit();
	stdlib_strutilsInit();
	stdlib_timesInit();
	stdlib_posixInit();
	stdlib_osInit();
	stdlib_hashesInit();
	stdlib_strtabsInit();
	stdlib_streamsInit();
	stdlib_linuxInit();
	stdlib_cpuinfoInit();
	stdlib_osprocInit();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	PKInit();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, PKInit)(void) {
	{
		NimStringDesc* HEX3Atmp_147006;
		NimStringDesc* LOC2;
		NimStringDesc* LOC3;
		glob_t f_147010;
		NI res_147012;
		int LOC4;
		HEX3Atmp_147006 = 0;
		LOC2 = 0;
		LOC2 = nosgetCurrentDir();
		LOC3 = 0;
		LOC3 = HEX2F_118292(LOC2, ((NimStringDesc*) &TMP33));
		HEX3Atmp_147006 = HEX2F_118292(LOC3, ((NimStringDesc*) &TMP34));
		memset((void*)(&f_147010), 0, sizeof(f_147010));
		res_147012 = 0;
		f_147010.gl_offs = ((NI) 0);
		f_147010.gl_pathc = ((NI) 0);
		f_147010.gl_pathv = NIM_NIL;
		LOC4 = 0;
		LOC4 = glob(HEX3Atmp_147006->data, ((int) 0), ((TY109647) (NIM_NIL)), (&f_147010));
		res_147012 = ((NI) (LOC4));
		{
			if (!(res_147012 == ((NI) 0))) goto LA7;
			{
				NI i_147014;
				NI HEX3Atmp_147016;
				NI res_147018;
				i_147014 = 0;
				HEX3Atmp_147016 = 0;
				HEX3Atmp_147016 = (NI)(f_147010.gl_pathc - ((NI) 1));
				res_147018 = ((NI) 0);
				{
					while (1) {
						if (!(res_147018 <= HEX3Atmp_147016)) goto LA11;
						i_147014 = res_147018;
						asgnRefNoCycle((void**) (&file_147004), cstrToNimstr(f_147010.gl_pathv[(i_147014)- 0]));
						nosremoveFile(file_147004);
						res_147018 += ((NI) 1);
					} LA11: ;
				}
			}
		}
		LA7: ;
		globfree((&f_147010));
	}
	n_147036 = nospcountProcessors();
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = unlikely((n_147036 == ((NI) 0)));
		if (!LOC14) goto LA15;
		n_147036 = ((NI) 1);
	}
	LA15: ;
	{
		NI res_147058;
		res_147058 = ((NI) 1);
		{
			while (1) {
				NimStringDesc* LOC20;
				NimStringDesc* LOC21;
				NimStringDesc* LOC22;
				TY142637 LOC23;
				Processobj142405* LOC24;
				if (!(res_147058 <= n_147036)) goto LA19;
				i_147053 = res_147058;
				LOC20 = 0;
				LOC21 = 0;
				LOC21 = nosgetCurrentDir();
				LOC22 = 0;
				LOC22 = HEX2F_118292(LOC21, ((NimStringDesc*) &TMP52));
				LOC20 = rawNewString(LOC22->Sup.len + 0);
appendString(LOC20, LOC22);
appendString(LOC20, ((NimStringDesc*) &TMP53));
				memset((void*)LOC23, 0, sizeof(LOC23));
				LOC24 = 0;
				LOC24 = nospstartProcess(LOC20, ((NimStringDesc*) &TMP53), LOC23, 0, NIM_NIL, 8);
				nossleep(((NI) 500));
				res_147058 += ((NI) 1);
			} LA19: ;
		}
	}
}

NIM_EXTERNC N_NOINLINE(void, PKDatInit)(void) {
}

