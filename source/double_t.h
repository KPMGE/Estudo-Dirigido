#ifndef DOUBLE_T
#define DOUBLE_T

#undef CONVERTE_NATIVO  
#undef NATIVO_
#undef PREF_
#define NATIVO_ double
#define PREF_(COISA) Double_ ## COISA
#include "convertenativo.h"

#endif
