#include <stdio.h> 
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
    float altura;
};

int main(void){
    struct pessoa p1 = {"Fernanda", 18, 1.59};

    struct pessoa p2;

    printf("Digite o nome: ");
    fgets(p2.nome, sizeof(p2.nome),stdin);
    p2.nome[strcspn(p2.nome, "\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &p2.idade);

    printf("Digite a altura: ");
    scanf("%f", &p2.altura);

    printf("\n----Pessoa 1 (automática)----\n");
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %2f\n", p1.altura);
    printf("\n----Pessoa 2 (entrada manual)----\n");
    printf("Nome: %s\n", p2.nome);
    printf("Idade: %d\n", p2.idade);
    printf("Altura: %2f\n", p2.altura);
    
}