#ifdef PREF_
#ifdef NATIVO_
#include "convertenativo.h"

struct PREF_(st) {
  NATIVO_ valor;
};

size_t PREF_(tamanho)(void) { return (sizeof(struct PREF_(st))); }

void *PREF_(criar_zero)(func1_1size_1str_t criar, char *mensagem) {
  size_t tamanho = PREF_(tamanho)();
  void *retorno = criar(tamanho, mensagem);

  PREF_(pt) temp;

  temp = (PREF_(pt))retorno;
  temp->valor = (NATIVO_)(0);

  return (retorno);
}

void *PREF_(criar_vals)(void *val, func1_1size_1str_t criar, char *mensagem) {
  size_t tamanho = PREF_(tamanho)();

  PREF_(pt) retorno = (PREF_(pt))criar(tamanho, mensagem);
  retorno->valor = *((NATIVO_ *)val);

  return ((void *)retorno);
}

/* copiar criando a copia que ainda nao existe*/
void *PREF_(criar_copiar)(void *amim, func1_1size_1str_t criar,
                          func1_2void_1size_1str_t copiar, char *mensagem) {

  size_t tamanho = PREF_(tamanho)();
  PREF_(pt) retorno = (PREF_(pt))criar(tamanho, mensagem);
  copiar(retorno, amim, tamanho, mensagem);

  return ((void *)retorno);
}

void PREF_(destruir)(void *amim, func0_1void_1str_t liberar, char *mensagem) {
  liberar(amim, mensagem);
}

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

void *PREF_(subtrair)(void *a, void *b, void *resultado) {
  NATIVO_ avalue = PREF_(get)(a);
  NATIVO_ bvalue = PREF_(get)(b);
  avalue -= bvalue;

  PREF_(set)(resultado, &avalue);

  return ((void *)resultado);
}

void *PREF_(multiplicar)(void *a, void *b, void *resultado) {
  NATIVO_ avalue = PREF_(get)(a);
  NATIVO_ bvalue = PREF_(get)(b);
  avalue *= bvalue;

  PREF_(set)(resultado, &avalue);

  return ((void *)resultado);
}

void *PREF_(dividir)(void *a, void *b, void *resultado) {
  NATIVO_ avalue = PREF_(get)(a);
  NATIVO_ bvalue = PREF_(get)(b);

  if (bvalue == 0) {
    printf("Divisao invalida!");
    exit(1);
  }

  avalue /= bvalue;

  PREF_(set)(resultado, &avalue);

  return ((void *)resultado);
}

void *PREF_(calcularRaiz)(void *a, void *resultado) {
  NATIVO_ avalue = PREF_(get)(a);

  if (avalue < 0) {
    printf("Radiciacao invalida!");
    exit(1);
  }

  avalue = sqrt(avalue);

  PREF_(set)(resultado, &avalue);

  return ((void *)resultado);
}

void *PREF_(elevarAoQuadrado)(void *a, void *resultado) {
  NATIVO_ avalue = PREF_(get)(a);
  avalue = (avalue * avalue);

  PREF_(set)(resultado, &avalue);

  return ((void *)resultado);
}

#endif
#endif
