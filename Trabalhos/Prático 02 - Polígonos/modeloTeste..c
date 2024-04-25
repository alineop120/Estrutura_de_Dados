#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um ponto
typedef struct {
    double x;
    double y;
} Point;

// Função para calcular a área do polígono
double areaPoligono(Point vertices[], int n) {
    double area = 0.0;
    int i, j;

    // Aplica a fórmula da área de um polígono usando coordenadas cartesianas
    for (i = 0; i < n; i++) {
        j = (i + 1) % n;
        area += vertices[i].x * vertices[j].y;
        area -= vertices[j].x * vertices[i].y;
    }

    area = abs(area) / 2.0; // Valor absoluto da área e divisão por 2

    return area;
}

int main() {
    FILE *file;
    int numVertices, i;
    char filename[100];
    
    // Solicita o nome do arquivo
    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);

    // Abre o arquivo para leitura
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê o número de vértices do polígono
    fscanf(file, "%d", &numVertices);

    // Aloca memória para armazenar os vértices
    Point *vertices = (Point *)malloc(numVertices * sizeof(Point));

    // Lê as coordenadas dos vértices do arquivo
    for (i = 0; i < numVertices; i++) {
        fscanf(file, "%lf %lf", &vertices[i].x, &vertices[i].y);
    }

    // Fecha o arquivo
    fclose(file);

    // Calcula a área do polígono
    double area = areaPoligono(vertices, numVertices);

    // Exibe a área do polígono
    printf("A área do polígono é %.2lf\n", area);

    // Libera a memória alocada
    free(vertices);

    return 0;
}
