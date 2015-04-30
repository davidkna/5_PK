/* Generated by Nim Compiler v0.11.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <glob.h>

#include <string.h>

#include <sys/types.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46547 Tcell46547;
typedef struct TNimType TNimType;
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
typedef struct Processobj141402 Processobj141402;
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct TNimNode TNimNode;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
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
typedef NimStringDesc* TY141637[1];
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
typedef NI TY27620[8];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Processobj141402  {
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
struct  Tfreecell27630  {
Tfreecell27630* next;
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
N_NIMCALL(NimStringDesc*, HEX2F_118492)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46547* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46563* s, Tcell46547* c);
N_NIMCALL(void, nosremoveFile)(NimStringDesc* file);
N_NIMCALL(NI, nospcountProcessors)(void);
N_NIMCALL(Processobj141402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj133012* env, NU8 options);
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
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, PKInit)(void);
NIM_EXTERNC N_NOINLINE(void, PKDatInit)(void);
STRING_LITERAL(TMP31, "testData", 8);
STRING_LITERAL(TMP32, "*.csv.lock", 10);
STRING_LITERAL(TMP49, "main", 4);
STRING_LITERAL(TMP50, "", 0);
NimStringDesc* file_146004;
extern Tgcheap48416 gch_48444;
NI n_146036;
NI i_146053;

static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr) {
	Tcell46547* result;
	result = 0;
	result = ((Tcell46547*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46547))))));
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51604(c);
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
		NimStringDesc* HEX3Atmp_146006;
		NimStringDesc* LOC2;
		NimStringDesc* LOC3;
		glob_t f_146010;
		NI res_146012;
		int LOC4;
		HEX3Atmp_146006 = 0;
		LOC2 = 0;
		LOC2 = nosgetCurrentDir();
		LOC3 = 0;
		LOC3 = HEX2F_118492(LOC2, ((NimStringDesc*) &TMP31));
		HEX3Atmp_146006 = HEX2F_118492(LOC3, ((NimStringDesc*) &TMP32));
		memset((void*)(&f_146010), 0, sizeof(f_146010));
		res_146012 = 0;
		f_146010.gl_offs = ((NI) 0);
		f_146010.gl_pathc = ((NI) 0);
		f_146010.gl_pathv = NIM_NIL;
		LOC4 = 0;
		LOC4 = glob(HEX3Atmp_146006->data, ((int) 0), ((TY109647) (NIM_NIL)), (&f_146010));
		res_146012 = ((NI) (LOC4));
		{
			if (!(res_146012 == ((NI) 0))) goto LA7;
			{
				NI i_146014;
				NI HEX3Atmp_146016;
				NI res_146018;
				i_146014 = 0;
				HEX3Atmp_146016 = 0;
				HEX3Atmp_146016 = (NI)(f_146010.gl_pathc - ((NI) 1));
				res_146018 = ((NI) 0);
				{
					while (1) {
						if (!(res_146018 <= HEX3Atmp_146016)) goto LA11;
						i_146014 = res_146018;
						asgnRefNoCycle((void**) (&file_146004), cstrToNimstr(f_146010.gl_pathv[(i_146014)- 0]));
						nosremoveFile(file_146004);
						res_146018 += ((NI) 1);
					} LA11: ;
				}
			}
		}
		LA7: ;
		globfree((&f_146010));
	}
	n_146036 = nospcountProcessors();
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = unlikely((n_146036 == ((NI) 0)));
		if (!LOC14) goto LA15;
		n_146036 = ((NI) 1);
	}
	LA15: ;
	{
		NI res_146058;
		res_146058 = ((NI) 1);
		{
			while (1) {
				NimStringDesc* LOC20;
				NimStringDesc* LOC21;
				NimStringDesc* LOC22;
				TY141637 LOC23;
				Processobj141402* LOC24;
				if (!(res_146058 <= n_146036)) goto LA19;
				i_146053 = res_146058;
				LOC20 = 0;
				LOC21 = 0;
				LOC21 = nosgetCurrentDir();
				LOC22 = 0;
				LOC22 = HEX2F_118492(LOC21, ((NimStringDesc*) &TMP49));
				LOC20 = rawNewString(LOC22->Sup.len + 0);
appendString(LOC20, LOC22);
appendString(LOC20, ((NimStringDesc*) &TMP50));
				memset((void*)LOC23, 0, sizeof(LOC23));
				LOC24 = 0;
				LOC24 = nospstartProcess(LOC20, ((NimStringDesc*) &TMP50), LOC23, 0, NIM_NIL, 8);
				nossleep(((NI) 500));
				res_146058 += ((NI) 1);
			} LA19: ;
		}
	}
}

NIM_EXTERNC N_NOINLINE(void, PKDatInit)(void) {
}

