#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

Lista *criarLista(int capacidade) {
    // Aloca memória para a estrutura Lista
    Lista *X = (Lista*)malloc(sizeof(Lista));
    if (X == NULL) {
        perror("Erro ao alocar memória para a lista");
        exit(1);
    }

    // Aloca memória para o array
    X->array = (Item*)malloc(capacidade * sizeof(Item));
    if (X->array == NULL) {
        perror("Erro ao alocar memória para o array da lista");
        free(X); // Libera a memória alocada para Lista
        exit(1);
    }

    // Inicializa os membros
    X->tamanho = 0;
    X->capacidade = capacidade;

    return X;
}
