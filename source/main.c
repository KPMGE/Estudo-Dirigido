#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "double_t.h"

int main(void) {
  double a = 5.0, b = 6.0;
  void *vet[2];
  void *ptc;
  void *ptd = NULL;
  void *soma = NULL;

  vet[0] = Double_criar_vals(&a, malloc);
  vet[1] = Double_criar_vals(&b, malloc);
  ptc = Double_criar_zero(malloc);
  ptd = Double_criar_copiar(ptc, malloc, memcpy);

  printf("vet[0] = %lf \n", Double_get(vet[0]));
  printf("vet[1] = %lf \n", Double_get(vet[1]));
  printf(" ptc = %lf \n", Double_get(ptc));
  printf(" ptd = %lf \n", Double_get(ptd));

  Double_set(ptc, &a);
  Double_set(ptd, &b);

  printf("Atribuindo 7.0 e 8.0 a ptc e ptd...\n");
  printf(" ptc = %lf \n", Double_get(ptc));
  printf(" ptd = %lf \n", Double_get(ptd));
  printf("Somando ptc e ptd...\n");

  soma = Double_criar_zero(malloc);
  soma = Double_somar(ptc, ptd, soma);

  printf(" soma = %lf \n", Double_get(soma));

  Double_destruir(vet[0], free);

  Double_destruir(vet[1], free);
  Double_destruir(ptc, free);
  Double_destruir(ptd, free);
  Double_destruir(soma, free);

  return 0;
}
