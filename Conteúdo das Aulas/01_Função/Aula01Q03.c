# include <stdio.h>

// Função para calcular média dos 3 valores no parâmetros
float calcularMedia_3Valores (float val01, float val02, float val03) {
    float soma_3Valores, media_3Valores;
    soma_3Valores = val01 + val02 + val03;
    media_3Valores = soma_3Valores / 3;
}

int main(){
    // Variáveis
    float num1, num2, num3, media;

    // Entrada de Dados
    printf("Infoorme o primeiro número inteiro: ");
    scanf("%lf", num1);
    printf("Infoorme o segundo número inteiro: ");
    scanf("%lf", num2);
    printf("Infoorme o terceiro número inteiro: ");
    scanf("%lf", num3);

    //Implementando a função
    media = calcularMedia_3Valores(num1, num2, num3);

    //Saida de Dados
    printf("Media dos 3 valores e: %lf", media);
}
