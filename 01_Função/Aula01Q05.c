#include <stdio.h>
#include <stdlib.h>

/*
    Seja 𝑓: ℕ → ℕ a função definida por 𝑓 (𝑥) = {              3, 𝑠𝑒 𝑥 = 0 } 
                                                { 2𝑓 (𝑥 − 1) + 5, 𝑠𝑒 𝑥 > 0 } . Calcule f(4).
*/

/*
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
*/

/*
    E como calcular f(4)?
*/

#define ERRO -1

int f (int X);

int main() {
    int N = 4; // para calcular f(4)
    int Resposta = f(N);
    if (Resposta!=ERRO) printf("f(%d) = %d\n\n", N, Resposta);
    else printf("A funcao nao esta definida para o valor indicado!");
}

int f (int X) {
    if (X == 0) return (3);
    else if (X > 0) return(2 * f(X - 1) + 5);
    else return (ERRO);
}
