#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int f (int X);

int main() {
    system("cls");
    int N = -2;
    int Resposta = f(N);
    if (Resposta!=ERRO) printf("f(%d) = %d\n\n", N, Resposta);
    else printf("A funcao nao esta definida para o valor indicado!");
}

int f (int X) {
    if (X == 0) return (3);
    else if (X > 0) return(2 * f(X - 1) + 5);
    else return (ERRO);
}








