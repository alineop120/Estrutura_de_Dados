#include <stdio.h>

// Função para trocar dois elementos de um vetor
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particao(int Vetor[], int inf, int sup){

    int pivot = Vetor[(inf + sup) / 2]; // escolha do pivô como elemento central
    int i = inf - 1; // Em função do do { .. } while(Vetor[i] < pivot);
    int j = sup + 1; // Em função do do { .. } while(Vetor[j] > pivot);
    
    while (1) {
        do {
            i++;
        } while (Vetor[i] < pivot);
        do {
            j--;
        } while (Vetor[j] > pivot);
        if (i >= j) return i; // Os índices se cruzaram
        
        swap(&Vetor[i], &Vetor[j]);
    } 
}

// Função Quicksort principal
void quicksort(int Vetor[], int inf, int sup) {
    if (inf < sup) {

        // Encontre a posição do pivô
        int p = partition(Vetor, inf, sup);

        // Ordena os elementos antes e depois da partição
        quicksort(Vetor, inf, p - 1);
        quicksort(Vetor, p + 1, sup);
    }
}

int main() {
    int arr[20] = {25, 17, 31, 13, 2, 19, 8, 14, 7, 1, 22, 10, 3, 12, 9, 5, 6, 16, 11, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Vetor desordenado:\n");
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    
    quicksort(arr, 0, n - 1);

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
