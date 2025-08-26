#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct aluno a[5];

    printf("--- Cadastro de Alunos ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Insira o nome: ");
        scanf("%s", a[i].nome);

        printf("Insira a idade: ");
        scanf("%d", &a[i].idade);

        printf("Insira a nota: ");
        scanf("%f", &a[i].nota);
    }

    printf("\n--- Dados dos Alunos ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", a[i].nome);
        printf("Idade: %d\n", a[i].idade);
        printf("Nota: %.1f\n", a[i].nota);
    }

    return 0;
}