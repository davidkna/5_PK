/* Generated by Nim Compiler v0.11.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
STRING_LITERAL(TMP46, "", 0);

N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start) {
	NI result;
{	result = 0;
	{
		NI i_98024;
		NI HEX3Atmp_98026;
		NI res_98029;
		i_98024 = 0;
		HEX3Atmp_98026 = 0;
		HEX3Atmp_98026 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res_98029 = ((NI) (start));
		{
			while (1) {
				if (!(res_98029 <= HEX3Atmp_98026)) goto LA3;
				i_98024 = res_98029;
				{
					if (!((NU8)(sub) == (NU8)(s->data[i_98024]))) goto LA6;
					result = i_98024;
					goto BeforeRet;
				}
				LA6: ;
				res_98029 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep) {
	NimStringDesc* result;
	result = 0;
	{
		NI L;
		if (!(((NI) 0) < aLen0)) goto LA3;
		L = (NI)((sep ? sep->Sup.len : 0) * (NI)(aLen0 - ((NI) 1)));
		{
			NI i_97575;
			NI HEX3Atmp_97597;
			NI res_97600;
			i_97575 = 0;
			HEX3Atmp_97597 = 0;
			HEX3Atmp_97597 = (aLen0-1);
			res_97600 = ((NI) 0);
			{
				while (1) {
					if (!(res_97600 <= HEX3Atmp_97597)) goto LA7;
					i_97575 = res_97600;
					L += (a[i_97575] ? a[i_97575]->Sup.len : 0);
					res_97600 += ((NI) 1);
				} LA7: ;
			}
		}
		result = rawNewString(((NI) (L)));
		result = resizeString(result, a[((NI) 0)]->Sup.len + 0);
appendString(result, a[((NI) 0)]);
		{
			NI i_97595;
			NI HEX3Atmp_97605;
			NI res_97608;
			i_97595 = 0;
			HEX3Atmp_97605 = 0;
			HEX3Atmp_97605 = (aLen0-1);
			res_97608 = ((NI) 1);
			{
				while (1) {
					if (!(res_97608 <= HEX3Atmp_97605)) goto LA10;
					i_97595 = res_97608;
					result = resizeString(result, sep->Sup.len + 0);
appendString(result, sep);
					result = resizeString(result, a[i_97595]->Sup.len + 0);
appendString(result, a[i_97595]);
					res_97608 += ((NI) 1);
				} LA10: ;
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP46));
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit)(void) {
}

