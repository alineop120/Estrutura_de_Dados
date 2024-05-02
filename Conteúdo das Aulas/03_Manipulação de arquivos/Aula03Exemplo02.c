#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo;

    arquivo = fopen("teste02.txt", "r"); 

    // Observação:
    // Modo: r
    // 1) Usado para abrir arquivo EXISTENTE
    // 2) Se o arquivo não existe, o ponteiro será NULL

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    fclose(arquivo);





    return 0;
}