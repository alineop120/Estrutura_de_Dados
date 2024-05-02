#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int Fatorial(int N);

int main() {
    int N;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &N);
    printf("%d", Fatorial(N));
}

int Fatorial(int N){
    int Resposta = 1;
    if (N >= 0) for (int i = 1; i <= N; i++) Resposta = Resposta * i;
    else Resposta = ERRO;
    return(Resposta);
}

