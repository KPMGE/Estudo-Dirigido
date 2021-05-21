#ifndef TIPOS_FUNCOES
#define TIPOS_FUNCOES

/* typedef do malloc */
typedef void *(*func1_1size_t)(size_t tamanho);
/* typedef do memcpy */
typedef void *(*func1_2void_1size_t)(void *restrict um,
                                     const void *restrict dois,
                                     size_t tamanho);
/* typedef do free */
typedef void (*func0_1void_t)(void *um);

#endif
