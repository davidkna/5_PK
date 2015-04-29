/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct TY141293 TY141293;
typedef struct TY143093 TY143093;
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
typedef struct TNimNode TNimNode;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY141293 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY143093 {
  TGenericSeq Sup;
  TY141293* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY143093*, newseq_143088)(NI len);
N_NIMCALL(TY141293*, newseq_141011)(NI len);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_83004, TNimType* mt);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(TY141293*, concat_143225)(TY141293** seqs, NI seqsLen0);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, HEX2AHEX3D_142026)(NI* x, NI y);
N_NIMCALL(void, quicksort_145507)(NI* liste, NI listeLen0, NI inl, NI inr);
N_NIMCALL(NI, medianvon3_145524)(NI* liste, NI listeLen0, NI a, NI b, NI c);
extern Tgcheap48216 gch_48244;
extern TNimType NTI143093; /* seq[seq[int]] */

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46346))))));
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, HEX2AHEX3D_142026)(NI* x, NI y) {
	(*x) = (NI)((*x) * y);
}

N_NIMCALL(void, radixsort_143063)(TY141293** liste, NI radix) {
	NIM_BOOL maxlength;
	NI tmp;
	NI placement;
	maxlength = NIM_FALSE;
	tmp = ((NI) -1);
	placement = ((NI) 1);
	{
		while (1) {
			TY143093* buckets;
			TY143093* result_143076;
			if (!!(maxlength)) goto LA2;
			maxlength = NIM_TRUE;
			result_143076 = newseq_143088(((NI) (radix)));
			{
				NI i_143078;
				NI HEX3Atmp_143603;
				NI res_143606;
				i_143078 = 0;
				HEX3Atmp_143603 = 0;
				HEX3Atmp_143603 = (radix - 1);
				res_143606 = ((NI) 0);
				{
					while (1) {
						if (!(res_143606 <= HEX3Atmp_143603)) goto LA5;
						i_143078 = res_143606;
						asgnRefNoCycle((void**) (&result_143076->data[i_143078]), newseq_141011(((NI) 0)));
						res_143606 += ((NI) 1);
					} LA5: ;
				}
			}
			genericSeqAssign((&buckets), result_143076, (&NTI143093));
			{
				NI i_143211;
				TY141293* HEX3Atmp_143611;
				NI i_143614;
				NI L_143616;
				i_143211 = 0;
				HEX3Atmp_143611 = 0;
				HEX3Atmp_143611 = (*liste);
				i_143614 = ((NI) 0);
				L_143616 = (HEX3Atmp_143611 ? HEX3Atmp_143611->Sup.len : 0);
				{
					while (1) {
						if (!(i_143614 < L_143616)) goto LA8;
						i_143211 = HEX3Atmp_143611->data[i_143614];
						tmp = (NI)(i_143211 / placement);
						buckets->data[(NI)(tmp % radix)] = (TY141293*) incrSeq(&(buckets->data[(NI)(tmp % radix)])->Sup, sizeof(NI));
						buckets->data[(NI)(tmp % radix)]->data[buckets->data[(NI)(tmp % radix)]->Sup.len-1] = i_143211;
						{
							NIM_BOOL LOC11;
							LOC11 = 0;
							LOC11 = maxlength;
							if (!(LOC11)) goto LA12;
							LOC11 = (((NI) 0) < tmp);
							LA12: ;
							if (!LOC11) goto LA13;
							maxlength = NIM_FALSE;
						}
						LA13: ;
						i_143614 += ((NI) 1);
					} LA8: ;
				}
			}
			unsureAsgnRef((void**) (&(*liste)), concat_143225(buckets->data, buckets->Sup.len));
			HEX2AHEX3D_142026((&placement), radix);
		} LA2: ;
	}
}

N_NIMCALL(NI, medianvon3_145524)(NI* liste, NI listeLen0, NI a, NI b, NI c) {
	NI result;
{	result = 0;
	{
		if (!(liste[a] < liste[b])) goto LA3;
		{
			if (!(liste[b] < liste[c])) goto LA7;
			result = b;
			goto BeforeRet;
		}
		goto LA5;
		LA7: ;
		{
			if (!(liste[a] < liste[c])) goto LA10;
			result = c;
			goto BeforeRet;
		}
		goto LA5;
		LA10: ;
		{
			result = a;
			goto BeforeRet;
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!(liste[c] < liste[b])) goto LA16;
			result = b;
			goto BeforeRet;
		}
		goto LA14;
		LA16: ;
		{
			if (!(liste[c] < liste[a])) goto LA19;
			result = c;
			goto BeforeRet;
		}
		goto LA14;
		LA19: ;
		{
			result = a;
			goto BeforeRet;
		}
		LA14: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, quicksort_145507)(NI* liste, NI listeLen0, NI inl, NI inr) {
	NI r;
	NI l;
	NI n;
	NI p;
{	r = inr;
	l = inl;
	n = (NI)((NI)(r - l) + ((NI) 1));
	{
		if (!(n < ((NI) 2))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		{
			NI m;
			NI LOC10;
			if (!(n <= ((NI) 40))) goto LA8;
			m = medianvon3_145524(liste, listeLen0, l, (NI)(l + (NI)(n / ((NI) 2))), r);
			LOC10 = 0;
			LOC10 = liste[m];
			liste[m] = liste[inr];
			liste[inr] = LOC10;
		}
		goto LA6;
		LA8: ;
		{
			NI eps;
			NI mid;
			NI m1;
			NI m2;
			NI m3;
			NI ninther;
			NI LOC12;
			eps = (NI)(n / ((NI) 8));
			mid = (NI)(l + (NI)(n / ((NI) 2)));
			m1 = medianvon3_145524(liste, listeLen0, l, (NI)(l + eps), (NI)((NI)(l + eps) + eps));
			m2 = medianvon3_145524(liste, listeLen0, (NI)(mid - eps), mid, (NI)(mid + eps));
			m3 = medianvon3_145524(liste, listeLen0, (NI)((NI)(r - eps) - eps), (NI)(r - eps), r);
			ninther = medianvon3_145524(liste, listeLen0, m1, m2, m3);
			LOC12 = 0;
			LOC12 = liste[ninther];
			liste[ninther] = liste[inr];
			liste[inr] = LOC12;
		}
		LA6: ;
	}
	p = liste[inr];
	{
		while (1) {
			if (!(l <= r)) goto LA14;
			{
				{
					if (!(liste[l] < p)) goto LA18;
					l += ((NI) 1);
					goto LA15;
				}
				LA18: ;
				{
					if (!(p < liste[r])) goto LA22;
					r -= ((NI) 1);
					goto LA15;
				}
				LA22: ;
				{
					NI LOC28;
					if (!(l <= r)) goto LA26;
					LOC28 = 0;
					LOC28 = liste[l];
					liste[l] = liste[r];
					liste[r] = LOC28;
					l += ((NI) 1);
					r -= ((NI) 1);
				}
				LA26: ;
			} LA15: ;
		} LA14: ;
	}
	quicksort_145507(liste, listeLen0, inl, r);
	quicksort_145507(liste, listeLen0, l, inr);
	}BeforeRet: ;
}

N_NIMCALL(void, quicksort_145492)(NI* liste, NI listeLen0) {
	quicksort_145507(liste, listeLen0, ((NI) 0), (listeLen0-1));
}

N_NIMCALL(void, insertionsort_146125)(NI* liste, NI listeLen0) {
	{
		NI i_146157;
		NI HEX3Atmp_146203;
		NI res_146206;
		i_146157 = 0;
		HEX3Atmp_146203 = 0;
		HEX3Atmp_146203 = (listeLen0 - 1);
		res_146206 = ((NI) 1);
		{
			while (1) {
				NI wert;
				NI j;
				if (!(res_146206 <= HEX3Atmp_146203)) goto LA3;
				i_146157 = res_146206;
				wert = liste[i_146157];
				j = i_146157;
				{
					while (1) {
						NIM_BOOL LOC6;
						LOC6 = 0;
						LOC6 = (((NI) 0) < j);
						if (!(LOC6)) goto LA7;
						LOC6 = (wert < liste[(NI)(j - ((NI) 1))]);
						LA7: ;
						if (!LOC6) goto LA5;
						liste[j] = liste[(NI)(j - ((NI) 1))];
						j -= ((NI) 1);
						liste[j] = wert;
					} LA5: ;
				}
				res_146206 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, simplequicksort_150684)(NI* liste, NI listeLen0) {
	quicksort_145507(liste, listeLen0, ((NI) 0), (listeLen0-1));
}
NIM_EXTERNC N_NOINLINE(void, HEX00_sortsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_sortsDatInit)(void) {
}

