#include <stdio.h>
#include <string.h>

// 13 - Crie uma estrutura representando os alunos de um determinado curso.
struct Aluno {
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
};

// Função para limpar o buffer de entrada em C
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // a) Declare duas variáveis x e y.
    struct Aluno x, y;

    // b) Faça a leitura dos campos das variáveis x e y.
    printf("--- Cadastro do Aluno 1 ---\n");
    printf("Digite a matricula: ");
    scanf("%d", &x.matricula);
    limpar_buffer();
    printf("Digite o nome: ");
    fgets(x.nome, 100, stdin);
    x.nome[strcspn(x.nome, "\n")] = 0; // Remove o '\n' lido pelo fgets
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &x.nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &x.nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &x.nota3);

    printf("\n--- Cadastro do Aluno 2 ---\n");
    printf("Digite a matricula: ");
    scanf("%d", &y.matricula);
    limpar_buffer();
    printf("Digite o nome: ");
    fgets(y.nome, 100, stdin);
    y.nome[strcspn(y.nome, "\n")] = 0;
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &y.nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &y.nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &y.nota3);

    printf("\n--- Resultados ---\n");

    // c) Encontre o aluno com maior nota na primeira prova.
    if (x.nota1 > y.nota1) {
        printf("Aluno com maior nota na P1: %s (Nota: %.1f)\n", x.nome, x.nota1);
    } else if (y.nota1 > x.nota1) {
        printf("Aluno com maior nota na P1: %s (Nota: %.1f)\n", y.nome, y.nota1);
    } else {
        printf("Os dois alunos tiveram a mesma nota na P1.\n");
    }

    float mediaX = (x.nota1 + x.nota2 + x.nota3) / 3.0f;
    float mediaY = (y.nota1 + y.nota2 + y.nota3) / 3.0f;

    // d) Encontre o aluno com maior média geral.
    if (mediaX > mediaY) {
        printf("Aluno com maior media geral: %s (Media: %.2f)\n", x.nome, mediaX);
    } else if (mediaY > mediaX) {
        printf("Aluno com maior media geral: %s (Media: %.2f)\n", y.nome, mediaY);
    } else {
        printf("Os dois alunos tiveram a mesma media geral.\n");
    }

    // e) Encontre o aluno com menor média geral.
    if (mediaX < mediaY) {
        printf("Aluno com menor media geral: %s (Media: %.2f)\n", x.nome, mediaX);
    } else if (mediaY < mediaX) {
        printf("Aluno com menor media geral: %s (Media: %.2f)\n", y.nome, mediaY);
    }

    // f) Para cada aluno diga se ele foi aprovado ou reprovado.
    printf("\n--- Situacao dos Alunos ---\n");
    printf("O aluno %s esta: %s\n", x.nome, (mediaX >= 6.0) ? "APROVADO" : "REPROVADO");
    printf("O aluno %s esta: %s\n", y.nome, (mediaY >= 6.0) ? "APROVADO" : "REPROVADO");

    return 0;
}