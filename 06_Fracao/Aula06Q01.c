#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int N; // Numerador
    int D; // Denominador
} Fracao;

Fracao criarFracao(int Numerador, int Denominador);
Fracao simplificarFracao(Fracao X);
void mostrarFracao(Fracao X);

int mdc(int a, int b);

int main(){
    Fracao F = criarFracao(16, 24);
    F = simplificarFracao(F);
    mostrarFracao(F);
    return 0;
}

Fracao criarFracao(int Numerador, int Denominador){
    Fracao f;
    f.N = Numerador;
    f.D = Denominador;
    return f;
}

int mdc(int a, int b){
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fracao simplificarFracao(Fracao X){
    int M = mdc(X.N, X.D);
    Fracao f;
    f.N = X.N / M;
    f.D = X.D / M;
    return f;
}

void mostrarFracao(Fracao X){
    printf("%d/%d\n", X.N, X.D);
}
