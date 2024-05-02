#include <stdio.h>
#include <stdio.h>
#include <string.h>


void exibirVetor(int V[], int tamanho) {
    for(int i = 0; i < tamanho; i++)
        printf("%d\t", V[i]);
    printf("\n");
}

// Na função a seguir, V é o ENDEREÇO de memória de um int

void modificarVetor(int *V, int tamanho) {
    for(int i = 0; i < tamanho; i++) 
        V[i] = V[i] * 2;
}

// Testando...

void testarVetor(int *V, int tamanho) {
    printf("%d\n", V);  // Mostrar o endereço de memória do primeiro elemento de V
    printf("%d\n", &V[0]);  
    printf("%d\n", &V[1]);  
    printf("%d\n", &V[2]);  
    printf("%d\n", &V[3]);  
    printf("%d\n", &V[4]);  
    printf("%d\n", &V[5]);  
    printf("%d\n", &V[6]);  
    printf("%d\n", &V[7]);  
    printf("%d\n", &V[8]);  





}


void main() {
    system("cls");
    int V[] = {3, 1, 9, 0, 5, -8, 'c'};
    int tamanho = sizeof(V)/sizeof(int);

    exibirVetor(V, tamanho);
    modificarVetor(V, tamanho);   
    exibirVetor(V, tamanho);
    testarVetor(V, tamanho);
    
}