/* Generated by Nim Compiler v0.11.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <math.h>
typedef struct TY141293 TY141293;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct TY141293 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, randomize_138224)(void);
N_NIMCALL(NI, random_138212)(NI max);
N_NIMCALL(NF, random_138218)(NF max);

N_NIMCALL(void, shuffle_140004)(TY141293** x) {
	randomize_138224();
	{
		NI i_140020;
		NI HEX3Atmp_140033;
		NI res_140036;
		i_140020 = 0;
		HEX3Atmp_140033 = 0;
		HEX3Atmp_140033 = ((*x) ? ((*x)->Sup.len-1) : -1);
		res_140036 = HEX3Atmp_140033;
		{
			while (1) {
				NI j;
				NI LOC4;
				if (!(((NI) 0) <= res_140036)) goto LA3;
				i_140020 = res_140036;
				j = random_138212((NI)(i_140020 + ((NI) 1)));
				LOC4 = 0;
				LOC4 = (*x)->data[i_140020];
				(*x)->data[i_140020] = (*x)->data[j];
				(*x)->data[j] = LOC4;
				res_140036 -= ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, weakshuffle_140055)(TY141293** x) {
	randomize_138224();
	{
		NI i_140071;
		NI HEX3Atmp_140084;
		NI res_140087;
		i_140071 = 0;
		HEX3Atmp_140084 = 0;
		HEX3Atmp_140084 = (NI)(((*x) ? ((*x)->Sup.len-1) : -1) - ((NI) 1));
		res_140087 = HEX3Atmp_140084;
		{
			while (1) {
				NI j;
				NI LOC4;
				NI LOC5;
				if (!(((NI) 1) <= res_140087)) goto LA3;
				i_140071 = res_140087;
				LOC4 = 0;
				LOC4 = random_138212(((NI) 2));
				j = (NI)((NI)(i_140071 + ((NI) 1)) - LOC4);
				LOC5 = 0;
				LOC5 = (*x)->data[i_140071];
				(*x)->data[i_140071] = (*x)->data[j];
				(*x)->data[j] = LOC5;
				res_140087 -= ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NI, gaussrand_140106)(NI lHEXC3HEXA4nge) {
	NI result;
	result = 0;
	randomize_138224();
	result = ((NI) -1);
	{
		while (1) {
			NF tmp;
			NF LOC3;
			NF LOC4;
			NF LOC5;
			NF LOC6;
			NF LOC7;
			if (!(result < ((NI) 0))) goto LA2;
			LOC3 = 0;
			LOC3 = random_138218(1.0000000000000000e+00);
			LOC4 = 0;
			LOC4 = cos(((NF)(6.2831853071795862e+00) * (NF)(LOC3)));
			LOC5 = 0;
			LOC5 = random_138218(1.0000000000000000e+00);
			LOC6 = 0;
			LOC6 = log10(LOC5);
			LOC7 = 0;
			LOC7 = sqrt(((NF)(-2.0000000000000000e+00) * (NF)(LOC6)));
			tmp = ((NF)(1.0000000000000000e+00) + (NF)(((NF)(((NF)(((NF)(((double) (lHEXC3HEXA4nge))) / (NF)(3.1415926535897931e+00))) * (NF)(LOC4))) * (NF)(LOC7))));
			result = float64ToInt32(tmp);
		} LA2: ;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_shuffleInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_shuffleDatInit)(void) {
}

