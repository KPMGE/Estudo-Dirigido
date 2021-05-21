#ifdef PREF_
#ifdef NATIVO_
#include "convertenativo.h"

struct PREF_(st) {
  NATIVO_ valor;
};

size_t PREF_(tamanho)(void) { return (sizeof(struct PREF_(st))); }

void *PREF_(criar_zero)(func1_1size_t criar) {
  size_t tamanho = PREF_(tamanho)();
  void *retorno = criar(tamanho);

  PREF_(pt) temp;

  temp = (PREF_(pt))retorno;
  temp->valor = (NATIVO_)(0);

  return (retorno);
}

void *PREF_(criar_vals)(void *val, func1_1size_t criar) {
  size_t tamanho = PREF_(tamanho)();

  PREF_(pt) retorno = (PREF_(pt))criar(tamanho);
  retorno->valor = *((NATIVO_ *)val);

  return ((void *)retorno);
}

/* copiar criando a copia que ainda nao existe*/
void *PREF_(criar_copiar)(void *orig, func1_1size_t criar,
                          func1_2void_1size_t copiar) {

  size_t tamanho = PREF_(tamanho)();
  PREF_(pt) retorno = (PREF_(pt))criar(tamanho);
  copiar(retorno, orig, tamanho);

  return ((void *)retorno);
}

void PREF_(destruir)(void *amim, func0_1void_t liberar) { liberar(amim); }

void PREF_(set)(void *amim, NATIVO_ *valor) {
  ((PREF_(pt))amim)->valor = *valor;
}

NATIVO_ PREF_(get)(void *demim) { return (((PREF_(pt))demim)->valor); }

void *PREF_(somar)(void *a, void *b, void *resultado) {
  NATIVO_ avalue = PREF_(get)(a);
  NATIVO_ bvalue = PREF_(get)(b);
  avalue += bvalue;

  PREF_(set)(resultado, &avalue);

  return ((void *)resultado);
}

#endif
#endif
