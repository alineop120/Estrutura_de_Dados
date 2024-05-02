#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    O comando return (valor) causa o retorno imediato do fluxo do programa ao ponto de chamada da 
função causando atribuição de valor a uma expressão.
*/

// Função
char minusculo () {
    char ch = getche();
    if ((ch >= 'A') && (ch <= 'Z')) 
    {
        return (ch + 32);
    }
    else 
    {
        return (ch);
    }
}

// Código Principal
int main() {
    // Implementando a função
    char letra = minusculo();

    // Saída de dados
    printf("\n%c", letra);
    return 0;
}
