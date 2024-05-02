#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
    char Produto[50];
    int Quantidade;
    float Preco;
};

int main() {

    FILE *arquivo;
    struct Item X;

    arquivo = fopen("listadecompra.txt", "r"); 

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    system ("cls");

    int I = 0;
    float Total = 0.0;

    //EOF: End Of File (onde o arquivo termina)

    while(fscanf(arquivo, "%s %d %f", X.Produto, &X.Quantidade, &X.Preco) != EOF) {
        
        float SubTotal = X.Quantidade * X.Preco;
        I++;

        printf("%d)\t", I);
        printf("%s\t", X.Produto);
        printf(":\t");
        printf("%d * %.2f = %.2f", X.Quantidade, X.Preco, SubTotal);
        printf("\n");

        Total = Total + SubTotal;
    }

    fclose(arquivo);
    arquivo = fopen("listadecompra.txt", "a"); 

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    fprintf(arquivo, "\n\nTotal: R$ %.2f", Total);

    return 0;
}