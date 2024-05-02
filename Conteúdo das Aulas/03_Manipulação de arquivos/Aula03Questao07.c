#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo;
    char Linha[50];
    arquivo = fopen("listadecompra.txt", "r"); 

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    system ("cls");

    while(fgets(Linha, sizeof(Linha), arquivo) != NULL) {        
        printf("%s", Linha);
    }

    fclose(arquivo);
    return 0;
}