#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

Fila * criarFila() {
    Fila * F = (Fila *)malloc(sizeof(Fila));
    if (F == NULL) {
        printf("ERRO: não foi possíel alocar memória para a fila!\n");
        exit(1);
    }
    F->Inicio = NULL;
    F->Fim = NULL;
    F->Tamanho = 0;
    return F;
}

void enfileirar(Fila *F, Item * Elemento) {
    if (Elemento == NULL) {
        printf("ERRO: não é possível inserir elemento nulo!\n");
        return;
    }

    if(F->Tamanho == 0) {  // Inserindo elemento em lista vazia
        F->Inicio = Elemento;
        F->Fim = Elemento;
    } 
    else { // A lista não está vazia.
        F->Fim->Proximo = Elemento;
        F->Fim = Elemento;
    }

    F->Tamanho++;
}

void mostrarFila(Fila *F){
    Item *Atual = F->Inicio;
    while (Atual != NULL) {
        printf("%d ", Atual->Chave);
        Atual = Atual->Proximo;
    }
    printf("\n");
}

Item *desenfileirar(Fila *F) {
    if(F->Tamanho == 0) {
        printf("ERRO: a fila está vazia!\n");
        return NULL;
    }

    Item *temp = F->Inicio;
    F->Inicio = temp->Proximo;
    if(F->Inicio == NULL) F->Fim = NULL;
    F->Tamanho--;
    return temp;
}