#ifndef CONVERTE_NATIVO
#define CONVERTE_NATIVO
#include "tiposfuncoes.h"

typedef struct PREF_(st) * PREF_(pt);

size_t PREF_(tamanho)(void);
void *PREF_(criar_vals)(void *val, func1_1size_1str_t criar, char *mensagem);
void PREF_(zerar)(void *num);

void PREF_(set)(void *amim, NATIVO_ *valor);
NATIVO_ PREF_(get)(void *demim);
void *PREF_(somar)(void *a, void *b, void *soma);
void *PREF_(subtrair)(void *a, void *b, void *resultado);
void *PREF_(multiplicar)(void *a, void *b, void *resultado);
void *PREF_(dividir)(void *a, void *b, void *resultado);
void *PREF_(calcularRaiz)(void *a, void *resultado);
void *PREF_(elevarAoQuadrado)(void *a, void *resultado);

#endif
