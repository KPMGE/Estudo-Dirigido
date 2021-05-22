#ifndef CONVERTE_NATIVO
#define CONVERTE_NATIVO
#include "tiposfuncoes.h"

typedef struct PREF_(st) * PREF_(pt);

size_t PREF_(tamanho)(void);
void *PREF_(criar_zero)(func1_1size_t criar);
void *PREF_(criar_vals)(void *val, func1_1size_t criar);

void *PREF_(criar_copiar)(void *amim, func1_1size_t criar,
                          func1_2void_1size_t copiar);
void PREF_(set)(void *amim, NATIVO_ *valor);
NATIVO_ PREF_(get)(void *demim);
void *PREF_(somar)(void *a, void *b, void *soma);
void *PREF_(subtrair)(void* a, void* b, void* resultado);
void *PREF_(multiplicar)(void* a, void* b, void* resultado);
void PREF_(destruir)(void *amim, func0_1void_t liberar);

#endif
