#include <stdio.h>

/*
    Implemente uma função para calcular a média de 3 valores passados como parâmetros.
*/

// Função para calcular média dos 3 valores no parâmetro
double calcularMedia_3Valores(double val01, double val02, double val03) {
    double soma_3Valores;
    double media_3Valores;
    soma_3Valores = val01 + val02 + val03;
    media_3Valores = soma_3Valores / 3;
    return media_3Valores; // Retornar a média calculada
}

int main() {
    // Variáveis
    double num1, num2, num3, media;

    // Entrada de Dados
    printf("Informe o primeiro numero inteiro: ");
    scanf("%lf", &num1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%lf", &num2);
    printf("Informe o terceiro numero inteiro: ");
    scanf("%lf", &num3);

    // Implementando a função
    media = calcularMedia_3Valores(num1, num2, num3);

    // Saída de Dados
    printf("A media dos 3 valores e: %.2lf", media);
    
    return 0; // Retorno da função main
}
