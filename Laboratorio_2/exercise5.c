#include <stdio.h>
#include <string.h>

struct Endereco {
    char rua[50], cidade[50];
    int numero;
};

struct Pessoa {
    char nome[50];
    struct Endereco endereco;
};

void main() {
    struct Pessoa user;

    printf("Nome: ");
    fgets(user.nome, sizeof(user.nome), stdin);
    user.nome[strcspn(user.nome, "\n")] = '\0';

    printf("Rua: ");
    fgets(user.endereco.rua, sizeof(user.endereco.rua), stdin);
    user.endereco.rua[strcspn(user.endereco.rua, "\n")] = '\0';

    printf("Numero:");
    scanf("%d", &user.endereco.numero);
    getchar();

    printf("Cidade: ");
    fgets(user.endereco.cidade, sizeof(user.endereco.cidade), stdin);
    user.endereco.cidade[strcspn(user.endereco.cidade, "\n")] = '\0';

    printf("\n\nNome: %s\nRua: %s\nNumero: %d\nCidade: %s\n", user.nome, user.endereco.rua, user.endereco.numero, user.endereco.cidade);
}