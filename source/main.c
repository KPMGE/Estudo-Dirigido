#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "double_t.h"
#include "integer_t.h"
#include "utils.h"

#define MALLOC_MENSAGEM "Espaco insuficiente!"
#define FREE_MENSAGEM "Erro ao liberar a memoria!"

int main(void) {
  double a = 5.0, b = 6.0;
  void *vet[2];
  void *ptc;
  void *ptd = NULL;
  void *soma = NULL;
  void *subtracao = NULL;
  void *multiplicacao = NULL;
  void *divisao = NULL;
  void *raiz = NULL;
  void *quadrado = NULL;

  vet[0] = Double_criar_vals(&a, mallocSeguro, MALLOC_MENSAGEM);
  vet[1] = Double_criar_vals(&b, mallocSeguro, MALLOC_MENSAGEM);
  ptc = Double_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  ptd = Double_criar_copiar(ptc, mallocSeguro, memcpySeguro, MALLOC_MENSAGEM);

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

  soma = Double_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  soma = Double_somar(ptc, ptd, soma);
  printf(" soma = %lf \n", Double_get(soma));

  subtracao = Double_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  subtracao = Double_subtrair(ptc, ptd, subtracao);
  printf("Subtracao = %lf \n", Double_get(subtracao));

  multiplicacao = Double_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  multiplicacao = Double_multiplicar(ptc, ptd, multiplicacao);
  printf("multiplicacao = %lf\n", Double_get(multiplicacao));

  divisao = Double_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  divisao = Double_dividir(ptc, ptd, divisao);
  printf("divisao = %lf\n", Double_get(divisao));

  raiz = Double_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  raiz = Double_calcularRaiz(ptc, raiz);
  printf("raiz de %lf = %lf\n", Double_get(ptc), Double_get(raiz));

  quadrado = Double_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  quadrado = Double_elevarAoQuadrado(ptc, quadrado);
  printf("quadrado de %lf = %lf\n", Double_get(ptc), Double_get(quadrado));

  Double_destruir(vet[0], freeSeguro, FREE_MENSAGEM);
  Double_destruir(vet[1], freeSeguro, FREE_MENSAGEM);
  Double_destruir(ptc, freeSeguro, FREE_MENSAGEM);
  Double_destruir(ptd, freeSeguro, FREE_MENSAGEM);
  Double_destruir(soma, freeSeguro, FREE_MENSAGEM);
  Double_destruir(subtracao, freeSeguro, FREE_MENSAGEM);
  Double_destruir(multiplicacao, freeSeguro, FREE_MENSAGEM);
  Double_destruir(divisao, freeSeguro, FREE_MENSAGEM);
  Double_destruir(raiz, freeSeguro, FREE_MENSAGEM);
  Double_destruir(quadrado, freeSeguro, FREE_MENSAGEM);

  // implementação para inteiros
  int a2 = 5.0, b2 = 6.0;
  void *vet2[2];
  void *ptc2;
  void *ptd2 = NULL;
  void *soma2 = NULL;
  void *subtracao2 = NULL;
  void *multiplicacao2 = NULL;
  void *divisao2 = NULL;
  void *raiz2 = NULL;
  void *quadrado2 = NULL;

  printf("\n\nImplementacao com inteiros ....\n\n");
  vet2[0] = Integer_criar_vals(&a2, mallocSeguro, MALLOC_MENSAGEM);
  vet2[1] = Integer_criar_vals(&b2, mallocSeguro, MALLOC_MENSAGEM);
  ptc2 = Integer_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  ptd2 = Integer_criar_copiar(ptc2, mallocSeguro, memcpySeguro, MALLOC_MENSAGEM);

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

  soma2 = Integer_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  soma2 = Integer_somar(ptc2, ptd2, soma2);
  printf(" soma = %d \n", Integer_get(soma2));

  subtracao2 = Integer_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  subtracao2 = Integer_subtrair(ptc2, ptd2, subtracao2);
  printf("Subtracao = %d \n", Integer_get(subtracao2));

  multiplicacao2 = Integer_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  multiplicacao2 = Integer_multiplicar(ptc2, ptd2, multiplicacao2);
  printf("multiplicacao = %d\n", Integer_get(multiplicacao2));

  divisao2 = Integer_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  divisao2 = Integer_dividir(ptc2, ptd2, divisao2);
  printf("divisao = %d\n", Integer_get(divisao2));

  raiz2 = Integer_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  raiz2 = Integer_calcularRaiz(ptc2, raiz2);
  printf("raiz de %d = %d\n", Integer_get(ptc2), Integer_get(raiz2));

  quadrado2 = Integer_criar_zero(mallocSeguro, MALLOC_MENSAGEM);
  quadrado2 = Integer_elevarAoQuadrado(ptc2, quadrado2);
  printf("quadrado de %d = %d\n", Integer_get(ptc2), Integer_get(quadrado2));

  Integer_destruir(vet2[0], freeSeguro, FREE_MENSAGEM);
  Integer_destruir(vet2[1], freeSeguro, FREE_MENSAGEM);
  Integer_destruir(ptc2, freeSeguro, FREE_MENSAGEM);
  Integer_destruir(ptd2, freeSeguro, FREE_MENSAGEM);
  Integer_destruir(soma2, freeSeguro, FREE_MENSAGEM);
  Integer_destruir(subtracao2, freeSeguro, FREE_MENSAGEM);
  Integer_destruir(multiplicacao2, freeSeguro, FREE_MENSAGEM);
  Integer_destruir(divisao2, freeSeguro, FREE_MENSAGEM);
  Integer_destruir(raiz2, freeSeguro, FREE_MENSAGEM);
  Integer_destruir(quadrado2, freeSeguro, FREE_MENSAGEM);

  return 0;
}
