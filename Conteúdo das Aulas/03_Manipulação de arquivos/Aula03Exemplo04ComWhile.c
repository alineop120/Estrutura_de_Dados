#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo;

    int Pontos;
    char Time[20];

    arquivo = fopen("teste04.txt", "r"); 

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    system ("cls");
    int Posicao = 0;

    //EOF: End Of File (onde o arquivo termina)

    while(fscanf(arquivo, "%d %s", &Pontos, Time) != EOF) {
        Posicao++;
        printf("%d\t%s\t%d\n", Posicao, Time, Pontos);
    }

    fclose(arquivo);





    return 0;
}