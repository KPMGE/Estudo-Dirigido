#ifndef UTILS_H
#define UTILS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *mallocSeguro(size_t tamanho, char *mensagem);
void freeSeguro(void *um, char *mensagem);
void *memcpySeguro(void  *restrict um, const void *restrict dois, unsigned long int tamanho,
                  char *mensagem);

#endif
