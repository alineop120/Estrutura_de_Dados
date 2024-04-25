#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo;

    arquivo = fopen("teste01.txt", "w"); 

    // Observação:
    // Modo: w
    // 1) Se o arquivo não existe, ele será criado.
    // 2) Se o arquivo existe, seu conteúdo será apagado.

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    fclose(arquivo);





    return 0;
}