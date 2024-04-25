#include <stdio.h>
#include <stdlib.h>

char f(int X);

int main() {
    char ch = f(1);
    printf("Resposta: %d", ch);
}

char f (int X) {
    if (X == 1) return('C');
    else if (X == 2) return('D');
    else if (X == 3) return('E');
    else if (X == 4) return('B');
    else if (X == 5) return('E');
    else {
        printf("Nao foi possivel calcular a imagem do ponto indicao.\n");
        exit(0);
    }
}