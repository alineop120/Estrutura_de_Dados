#include <stdio.h>
#include <stdlib.h>

#define ERRO -2

int fat (int X);

int main() {
    system("cls");
    int N;
    printf("Digite um numero nao negativo: ");
    scanf("%d", &N);
    int Resposta = fat(N);
    if (Resposta!=ERRO) printf("%d! = %d\n\n", N, Resposta);
    else printf("Nao existe fatorial de numero negativo!");
}

int fat (int X) {
    if (X == 0) return (1);
    else if (X > 0) return(X * fat(X-1));
    else return (ERRO);
}








