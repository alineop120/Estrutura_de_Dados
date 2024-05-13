#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAMANHO 200000

void selectionSort(int *arr, int n);

int main() {
    typedef int Numero;
    Numero V[TAMANHO];
    clock_t Inicio, Fim;
    double TempoCPU;

    srand(time(NULL));
    
    for (int i = 0; i < TAMANHO; i++) V[i] = rand() % 100;
    for (int i = 0; i < TAMANHO; i++) printf("%d\n", V[i]);

    Inicio = clock();
    selectionSort(&V, TAMANHO);
    Fim = clock();

    printf("\n\nVetor ordenado: \n");
    for (int i = 0; i < TAMANHO; i++) printf("%d\n", V[i]);

    TempoCPU = ((double)(Fim - Inicio)) / CLOCKS_PER_SEC; 
    printf("\n");
    printf("Tempo de CPU: %lf segundos.", TempoCPU);
    printf("\n");
     
}


void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
            // Encontra o índice do elemento mínimo na parte não classificada
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Troca o elemento mínimo com o primeiro elemento não classificado
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
