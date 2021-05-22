#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "integer_t.h"
#include "double_t.h"

int main(void) {
  double a = 5.0, b = 6.0;
  void *vet[2];
  void *ptc;
  void *ptd = NULL;
  void *soma = NULL;
  void *subtracao = NULL;
  void *multiplicacao = NULL;

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

  subtracao = Double_criar_zero(malloc);
  subtracao = Double_subtrair(ptc, ptd, subtracao);
  printf("Subtracao = %lf \n", Double_get(subtracao));


  multiplicacao = Double_criar_zero(malloc);
  multiplicacao = Double_multiplicar(ptc, ptd, multiplicacao);
  printf("multiplicacao = %lf\n", Double_get(multiplicacao));

  Double_destruir(vet[0], free);
  Double_destruir(vet[1], free);
  Double_destruir(ptc, free);
  Double_destruir(ptd, free);
  Double_destruir(soma, free);
  Double_destruir(subtracao, free);
  Double_destruir(multiplicacao, free);


  // implementação para inteiros
  int a2 = 5.0, b2 = 6.0;
  void *vet2[2];
  void *ptc2;
  void *ptd2 = NULL;
  void *soma2 = NULL;
  void *subtracao2 = NULL;
  void *multiplicacao2 = NULL;


  printf("\n\nImplementacao com inteiros ....\n\n");
  vet2[0] = Integer_criar_vals(&a2, malloc);
  vet2[1] = Integer_criar_vals(&b2, malloc);
  ptc2 = Integer_criar_zero(malloc);
  ptd2 = Integer_criar_copiar(ptc2, malloc, memcpy);

  printf("vet[0] = %d \n", Integer_get(vet2[0]));
  printf("vet[1] = %d\n", Integer_get(vet2[1]));
  printf(" ptc = %d\n", Integer_get(ptc2));
  printf(" ptd = %d\n", Integer_get(ptd2));

  Integer_set(ptc2, &a2);
  Integer_set(ptd2, &b2);

  printf("Atribuindo 7.0 e 8.0 a ptc e ptd...\n");
  printf(" ptc = %d \n", Integer_get(ptc2));
  printf(" ptd = %d \n", Integer_get(ptd2));
  printf("Somando ptc e ptd...\n");

  soma2 = Integer_criar_zero(malloc);
  soma2 = Integer_somar(ptc2, ptd2, soma2);
  printf(" soma = %d \n", Integer_get(soma2));

  subtracao2 = Integer_criar_zero(malloc);
  subtracao2 = Integer_subtrair(ptc2, ptd2, subtracao2);
  printf("Subtracao = %d \n", Integer_get(subtracao2));

  multiplicacao2 = Integer_criar_zero(malloc);
  multiplicacao2 = Integer_multiplicar(ptc2, ptd2, multiplicacao2);
  printf("multiplicacao = %d\n", Integer_get(multiplicacao2));

  Integer_destruir(vet2[0], free);
  Integer_destruir(vet2[1], free);
  Integer_destruir(ptc2, free);
  Integer_destruir(ptd2, free);
  Integer_destruir(soma2, free);
  Integer_destruir(subtracao2, free);
  Integer_destruir(multiplicacao2, free);

  return 0;
}
