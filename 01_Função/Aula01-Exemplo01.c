#include <stdio.h>

// Função para calaclar a area do quadrado
double calcularAreaQuadrado(double L) {
    double A = L * L;
    return A;
}

int main() {
    // Variavel
    double lado, area;

    // Entrada de Dados
    printf("digite o valor do lado do quadrado: ");
    scanf("%lf", &lado);

    // Implementar a função
    area = calcularAreaQuadrado(lado);

    // Saída de Dados
    printf("A area do quadrado com lado %.2lf é %2.lf\n", lado, area);
    return 0; 
}