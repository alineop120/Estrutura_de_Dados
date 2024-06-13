#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

int main() {

    printf("Teste 01: criando fila vazia!\n");
    Fila *MinhaFila = criarFila();
    printf("Tamanho: %d\n", MinhaFila->Tamanho);
    printf("\n");

    printf("Teste 02: inserindo alguns elementos na fila!\n");
    Item *E1 = (Item *)malloc(sizeof(Item));
    E1->Chave = 43;
    E1->Proximo = NULL;
    enfileirar(MinhaFila, E1);

    Item *E2 = (Item *)malloc(sizeof(Item));
    E2->Chave = 17;
    E2->Proximo = NULL;
    enfileirar(MinhaFila, E2);

    Item *E3 = (Item *)malloc(sizeof(Item));
    E3->Chave = 31;
    E3->Proximo = NULL;
    enfileirar(MinhaFila, E3);

    Item *E4 = (Item *)malloc(sizeof(Item));
    E4->Chave = 47;
    E4->Proximo = NULL;
    enfileirar(MinhaFila, E4);

    Item *E5 = (Item *)malloc(sizeof(Item));
    E5->Chave = 53;
    E5->Proximo = NULL;
    enfileirar(MinhaFila, E5);

    Item *E6 = (Item *)malloc(sizeof(Item));
    E6->Chave = 61;
    E6->Proximo = NULL;
    enfileirar(MinhaFila, E6);

    printf("Tamanho: %d\n", MinhaFila->Tamanho);

    printf("Teste 03: exibindo a fila!\n");
    mostrarFila(MinhaFila);
    printf("\n");

    printf("Teste 04: retirando um elemento da fila!\n");
    Item *X = desenfileirar(MinhaFila);
    mostrarFila(MinhaFila);
    printf("O elemento retirado é %d\n", X->Chave);
    free(X);
    printf("\n");




}