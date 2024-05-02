#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *criarArray(int tamanho) {
    int *array = malloc(tamanho * sizeof(int));
    // Preencher o array
    for (int i = 0; i < tamanho; i++) array[i] = i + 1;
    return array;
}

void main() {
    int tamanho;
    printf("Ditite o tamanho: ");
    scanf("%d", &tamanho);
    int *meuArray = criarArray(tamanho);
    // Usar o array retornado
    for (int i = 0; i < tamanho; i++) printf("%d ", meuArray[i]);
    free(meuArray); // Liberar a memória alocada  
    return 0;
}
