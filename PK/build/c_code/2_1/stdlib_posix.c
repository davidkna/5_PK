/* Generated by Nim Compiler v0.11.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <sys/types.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
TNimType NTI106285; /* TPid */
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit)(void) {
NTI106285.size = sizeof(pid_t);
NTI106285.kind = 31;
NTI106285.base = 0;
NTI106285.flags = 3;
}

