#ifndef TIPOS_FUNCOES
#define TIPOS_FUNCOES
#include <stddef.h>

/* typedef para o zerar */
typedef void (*func0_1void_t)(void* num);
/* typedef do malloc */
typedef void *(*func1_1size_1str_t)(size_t tamanho, char* mensagem);
/* typedef do memcpy */
typedef void *(*func1_2void_1size_1str_t)(void *restrict um,
                                     const void *restrict dois,
                                     long unsigned int tamanho, char* mensagem);
/* typedef do free */
typedef void (*func0_1void_1str_t)(void *um, char* mensagem);

#endif
