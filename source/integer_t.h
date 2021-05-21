#ifndef INTEGER_T
#define INTEGER_T

#undef CONVERTE_NATIVO
#undef NATIVO_
#undef PREF_
#define NATIVO_ int
#define PREF_(COISA) Integer_##COISA
#include "convertenativo.h"

#endif
