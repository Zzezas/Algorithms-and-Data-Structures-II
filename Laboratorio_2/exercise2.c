#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[50];
    int idade;
    float nota;
};

void main() {
    float soma;
    struct aluno a[3];

    for (int i = 0; i < 3; i++) {
        printf("Insira o nome: ");
        scanf("%s", a[i].nome);
        fflush(stdin);

        printf("Insira a idade: ");
        scanf("%d", &a[i].idade);

        printf("Insira a nota: ");
        scanf("%f", &a[i].nota);

        soma += a[i].nota;
    }

    printf("\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Nome do %do aluno: %s\nIdade do %do aluno: %d\nNota do %d aluno: %.1f\n\n", i + 1, a[i].nome, i + 1, a[i].idade, i + 1, a[i].nota);
    }

    printf("\nMédia das notas da turma: %.1f\n\n", soma / 3);
}