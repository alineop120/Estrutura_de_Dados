#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    int c = 10;
    
    Lista *teste = criarLista(c);

    printf("Tamanho do ponteiro: %lu\n", sizeof(teste)); 
    printf("Tamanho do array dentro da lista: %lu\n", sizeof(teste->array[0]) * c);

    free(teste->array);
    free(teste);

    return 0;
}