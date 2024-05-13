#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAMANHO 500000

int main() {
    int V[TAMANHO];
    srand(time(NULL));
    for (int i = 0; i < TAMANHO; i++) V[i] = rand() % 100;
    for (int i = 0; i < TAMANHO; i++) printf("%d\t", V[i]);
}