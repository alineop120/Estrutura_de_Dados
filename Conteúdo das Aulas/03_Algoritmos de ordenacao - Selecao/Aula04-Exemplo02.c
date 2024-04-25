#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAMANHO 50000

int main() {
    typedef int Numero;
    Numero V[TAMANHO];
    clock_t Inicio, Fim;
    double TempoCPU;

    srand(time(NULL));
    
    for (int i = 0; i < TAMANHO; i++) V[i] = rand() % 100;

    Inicio = clock();
    for (int i = 0; i < TAMANHO; i++) printf("%d\t", V[i]);
    Fim = clock();

    TempoCPU = ((double)(Fim - Inicio)) / CLOCKS_PER_SEC; 
    printf("\n");
    printf("Tempo de CPU: %lf segundos.", TempoCPU);
    printf("\n");
     
}