#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamString(char *str) {
    int tamanho;
    for(tamanho = 0; str[tamanho] != '\0'; tamanho++);
    return(tamanho);
}

int main () {
    char nome[10] = "Exemplo";
    int tamanho1 = strlen(nome);
    int tamanho2 = tamString(nome);

    printf("strlen: %d\n", tamanho1);
    printf("minha versao: %d\n", tamanho2);

    // Obs: o 8° caracter é \0

}









