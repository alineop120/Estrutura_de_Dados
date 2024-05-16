#ifndef FRACAO
#define FRACAO

typedef struct {
    int Chave;
    // Outros campos ...
} Item;

typedef struct {
    Item *array;
    int tamanho;
    int capacidade; // Adicionada um ponto e vírgula aqui
} Lista;

Lista *criarLista(int capacidade);

#endif // #ifndef _FRACAO