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

    fscanf(arquivo, "%d %s", &Pontos, Time);
    printf("A equipe %s conquistou %d pontos.\n", Time, Pontos);

    fscanf(arquivo, "%d %s", &Pontos, Time);
    printf("A equipe %s conquistou %d pontos.\n", Time, Pontos);

    fscanf(arquivo, "%d", &Pontos);
    fscanf(arquivo, "%s", Time);
    printf("A equipe %s conquistou %d pontos.\n", Time, Pontos);

    fscanf(arquivo, "%d", &Pontos);
    fscanf(arquivo, "%s", Time);
    printf("A equipe %s conquistou %d pontos.\n", Time, Pontos);

    fclose(arquivo);





    return 0;
}