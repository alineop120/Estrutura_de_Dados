#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo;
    int Numero = 190;
    char Frase[] = "Num reino tão tão distante...";

    arquivo = fopen("teste03.txt", "a"); 

    // Observação:
    // Modo: a
    // 1) Usado para acrescentar informações no arquivo.
    // 2) Se o arquivo não existe, ele será criado.

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    fprintf(arquivo, "\n%d %s", Numero, Frase);

    fclose(arquivo);





    return 0;
}