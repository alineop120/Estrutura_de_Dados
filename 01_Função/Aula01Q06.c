#include <stdio.h>
#include <stdlib.h>

/*
    Seja 𝑔: ℕ → ℕ a função definida por 𝑔 (𝑥) = {             −1, 𝑠𝑒 𝑥 = 0 }
                                                { 4𝑔 (𝑥 − 1) + 6, 𝑠𝑒 𝑥 > 0 }. Calcule g(3).
*/

/*
#define ERRO -2

int g (int X);

int main() {
    system("cls");
    int N;
    printf("Digite um numero nao negativo: ");
    scanf("%d", &N);
    int Resposta = g(N);
    if (Resposta!=ERRO) printf("g(%d) = %d\n\n", N, Resposta);
    else printf("A funcao nao esta definida para o valor indicado!");
}

int g (int X) {
    if (X == 0) return (-1);
    else if (X > 0) return(4 * g(X - 1) + 6);
    else return (ERRO);
}
*/

/*
    E como calcular g(3)?
*/

#define ERRO -2

int g (int X);

int main() {
    int N = 3; // para calcular g(3)
    printf("Digite um numero (nao negativo): ");
    scanf("%d", &N);
    int Resposta = g(N);
    if (Resposta!=ERRO) printf("g(%d) = %d\n\n", N, Resposta);
    else printf("A funcao nao esta definida para o valor indicado!");
}

int g (int X) {
    if (X == 0) return (-1);
    else if (X > 0) return(4 * g(X - 1) + 6);
    else return (ERRO);
}








