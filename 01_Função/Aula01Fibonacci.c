#include <stdio.h>
#include <stdlib.h>

#define ERRO -2

int Fib (int X);

int main() {
    system("cls");
    int N;
    printf("Digite um numero nao negativo: ");
    scanf("%d", &N);
    int Resposta = Fib(N);
    if (Resposta!=ERRO) printf("Resposta: %d. \n\n", Resposta);
    else printf("Nao existe fatorial de numero negativo!");
}

int Fib (int X) {
    if (X == 1 || X == 2) return (1);
    else if (X > 2) return(Fib(X - 1) + Fib(X - 2));
    else return (ERRO);
}








