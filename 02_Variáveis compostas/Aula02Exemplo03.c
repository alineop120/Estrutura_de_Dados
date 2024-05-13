#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char Nome[1024];
    int Idade;
    float Altura;
    float Peso;
};

struct Pessoa criarPessoa();
float calcularIMC(struct Pessoa X);
void atualizarIdade(struct Pessoa *X);
void exibirPessoa(struct Pessoa X);

void main() {
    system("cls");
    struct Pessoa Fulano = criarPessoa();
    exibirPessoa(Fulano);
    printf("%.3f\n", calcularIMC(Fulano));
    atualizarIdade(&Fulano);
    exibirPessoa(Fulano);
}

struct Pessoa criarPessoa(){
    struct Pessoa X;
    printf("Digite o nome: ");
    gets(X.Nome);
    printf("Digite a idade: ");
    scanf("%d", &X.Idade);
    printf("Digite a altura: ");
    scanf("%f", &X.Altura);
    printf("Digite o peso: ");
    scanf("%f", &X.Peso);
    return(X);
}

float calcularIMC(struct Pessoa X){
    float R = X.Peso/(X.Altura * X.Altura);
    return(R);
}

void atualizarIdade(struct Pessoa *X){
    X->Idade = X->Idade + 1;
}

void exibirPessoa(struct Pessoa X){
    printf("%s %d %.2f %.2f\n", X.Nome, X.Idade, X.Altura, X.Peso);    
}
