#ifndef FILA_H
#define FILA_H

typedef struct Item {
    int Chave;
    struct Item * Proximo;
} Item;

typedef struct Fila {
    Item * Inicio;
    Item * Fim;
    int Tamanho;
} Fila;

Fila * criarFila();

void enfileirar(Fila *F, Item * Elemento);
void mostrarFila(Fila *F);

Item *desenfileirar(Fila *F);

#endif