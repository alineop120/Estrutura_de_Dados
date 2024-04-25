#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

// Estrutura para representar um aluno
typedef struct {
    char nome[MAX_LEN];
    char telefone[MAX_LEN];
    char curso[MAX_LEN];
    double nota1;
    double nota2;
} Aluno;

// Função para determinar a situação do aluno
const char* determinarSituacao(double media) {
    if (media >= 7.0) {
        return "APROVADO";
    } else {
        return "REPROVADO";
    }
}

int main() {
    FILE *entrada, *saida;
    Aluno aluno;
    double media;
    char situacao[MAX_LEN];

    // Abre o arquivo de entrada para leitura
    entrada = fopen("DadosEntrada.csv", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Abre o arquivo de saída para escrita
    saida = fopen("SituacaoFinal.csv", "w");
    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(entrada);
        return 1;
    }

    // Lê os dados de cada aluno do arquivo de entrada
    while (fscanf(entrada, "%[^,],%[^,],%[^,],%lf,%lf\n", aluno.nome, aluno.telefone, aluno.curso, &aluno.nota1, &aluno.nota2) == 5) {
        // Calcula a média das notas
        media = (aluno.nota1 + aluno.nota2) / 2.0;

        // Determina a situação do aluno
        strcpy(situacao, determinarSituacao(media));

        // Escreve os dados no arquivo de saída
        fprintf(saida, "%s, %.2lf, %s\n", aluno.nome, media, situacao);
    }

    // Fecha os arquivos
    fclose(entrada);
    fclose(saida);

    printf("Processamento concluido. O arquivo SituacaoFinal.csv foi gerado com sucesso.\n");

    return 0;
}
