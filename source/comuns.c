#include "comuns.h"
void destruir(void *amim, func0_1void_1str_t liberar, char *mensagem) {
  liberar(amim, mensagem);
}

void *criar_copiar(void *amim, size_t tamanho, func1_1size_1str_t criar, 
                          func1_2void_1size_1str_t copiar, char *mensagem) {
  void* retorno = criar(tamanho, mensagem);
  copiar(retorno, amim, tamanho, mensagem);
  return retorno;
}


void *criar_zero(size_t tamanho, func1_1size_1str_t criar, char *mensagem,
                 func0_1void_t zerar) {
  void *retorno = criar(tamanho, mensagem);
  zerar(retorno);

  return retorno;
}
