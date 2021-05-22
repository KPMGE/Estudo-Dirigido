#include "utils.h"

void* mallocSeguro(size_t tamanho, char* mensagem) {
  void* resultado = malloc(tamanho);

  if (resultado == NULL) {
    printf("%s", mensagem);
    exit(1);
  }

  return resultado;
}

void freeSeguro(void* um, char* mensagem) {
  if (um == NULL) {
    printf("%s", mensagem);
    exit(1);
  }

  free(um);
}

void *memcpySeguro(void *restrict um, const void *restrict dois, unsigned long int tamanho,
                  char *mensagem) {
  if (um == NULL || dois == NULL) {
    printf("%s", mensagem);
    exit(1);
  }
  memcpy(um, dois, tamanho);
  
  return ((void*)dois);
}


