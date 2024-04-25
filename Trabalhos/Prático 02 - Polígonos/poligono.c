#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um ponto
typedef struct {
    double x;
    double y;
} Ponto;

// Função para calcular a área do polígono
double areaPoligono(Ponto vertices[], int n) {
    double area = 0.0;
    int i, j;

    // Fórmula da área de um polígono (utilizando coordenadas cartesianas)
    for (i = 0; i < n; i++) 
    {
        j = (i + 1) % n;
        area += vertices[i].x * vertices[j].y;
        area -= vertices[j].x * vertices[i].y;
    }

    area = abs(area) / 2.0; // Valor absoluto da área e divisão por 2

    return area;
}

int main() {
    FILE *arquivo;
    int numVertices, i;
    double area;

    // Abre o arquivo para leitura
    arquivo = fopen("trianguloABC.txt", "r");
    if (arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê o número de vértices do polígono do arquivo
    fscanf(arquivo, "%d", &numVertices);

    // Aloca memória para armazenar os vértices
    Ponto *vertices = (Ponto *)malloc(numVertices * sizeof(Ponto));

    // Lê as coordenadas dos vértices do arquivo
    for (i = 0; i < numVertices; i++) 
    {
        fscanf(arquivo, "%lf %lf", &vertices[i].x, &vertices[i].y);
    }

    fclose(arquivo); // Fecha o arquivo

    // Calcula a área do polígono
    area = areaPoligono(vertices, numVertices);

    printf("A area do poligono e %.2lf\n", area);

    // Libera a memória alocada
    free(vertices);

    return 0;
}



