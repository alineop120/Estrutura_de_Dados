#include <stdio.h>

// Função para trocar dois elementos do array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função que coloca o pivot (último elemento) na posição correta
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot é o último elemento
    int i = (low - 1); // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        // Se o elemento atual for menor ou igual ao pivot
        if (arr[j] <= pivot) {
            i++; // Incrementa o índice do menor elemento
            swap(&arr[i], &arr[j]); // Troca arr[i] e arr[j]
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Função Quicksort principal
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi é o índice onde o pivot está na posição correta
        int pi = partition(arr, low, high);

        // Separa recursivamente os elementos antes e depois do pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função principal
int main() {
    int X[] = {14, 21, 30, 7, 56, 28, 24, 33, 47, 50, 32};
    int n = sizeof(X) / sizeof(X[0]);
    printf("Array original:\n");
    printArray(X, n);
    quickSort(X, 0, n - 1);
    printf("Array ordenado usando Quicksort:\n");
    printArray(X, n);
    return 0;
}
