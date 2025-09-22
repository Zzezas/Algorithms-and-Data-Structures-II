#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Ficha_cliente{
    char nome[50];
    char email[50];
    char endereco[100];
    int idade;
    char cpf[12];
    char data_nascimento[11];
    char sexo;
    float peso;
    float imc;
    float altura;
};

int main(){
    
    struct Ficha_cliente ficha_de_cliente;
    char id[50];
    printf("---Cadastro de Cliente---\n");

    printf("Nome: ");
    fgets(ficha_de_cliente.nome, sizeof(ficha_de_cliente.nome), stdin);
    ficha_de_cliente.nome[strcspn(ficha_de_cliente.nome, "\n")] = 0;
    printf("Endereco: ");
    fgets(ficha_de_cliente.endereco, sizeof(ficha_de_cliente.endereco), stdin);
    ficha_de_cliente.endereco[strcspn(ficha_de_cliente.endereco, "\n")] = 0;
    printf("Email: ");
    fgets(ficha_de_cliente.email, sizeof(ficha_de_cliente.email), stdin);
    ficha_de_cliente.email[strcspn(ficha_de_cliente.email, "\n")] = 0;
    printf("Idade: ");
    scanf("%d", &ficha_de_cliente.idade);
    getchar();
    printf("CPF: ");
    fgets(ficha_de_cliente.cpf, sizeof(ficha_de_cliente.cpf), stdin);
    ficha_de_cliente.cpf[strcspn(ficha_de_cliente.cpf, "\n")] = 0;
    printf("Data de nascimento (DD/MM/YYYY): ");
    fgets(ficha_de_cliente.data_nascimento, sizeof(ficha_de_cliente.data_nascimento), stdin);
    ficha_de_cliente.data_nascimento[strcspn(ficha_de_cliente.data_nascimento, "\n")] = 0;
    printf("Sexo(M/F): ");
    scanf("%c", &ficha_de_cliente.sexo);
    getchar();
    printf("Altura em metros (EX:1.75): ");
    scanf("%f", &ficha_de_cliente.altura);
    getchar();
    printf("Peso em kg (EX: 72.3kg): ");
    scanf("%f", &ficha_de_cliente.peso);
    getchar();

    ficha_de_cliente.imc = ficha_de_cliente.peso / (ficha_de_cliente.altura * ficha_de_cliente.altura);

    printf("\n--- Dados do Cliente ---\n");
    printf("Nome: %s\n", ficha_de_cliente.nome);
    printf("Endereço: %s\n", ficha_de_cliente.endereco);
    printf("Email: %s\n", ficha_de_cliente.email);
    printf("Idade: %d\n", ficha_de_cliente.idade);
    printf("CPF: %s\n", ficha_de_cliente.cpf);
    printf("Sexo: %c\n", ficha_de_cliente.sexo);
    printf("Data de Nascimento: %s\n", ficha_de_cliente.data_nascimento);
    printf("Altura: %.2f m\n", ficha_de_cliente.altura);
    printf("Peso: %.2f kg\n", ficha_de_cliente.peso);
    printf("IMC: %.2f\n", ficha_de_cliente.imc); 

    printf("---Comparacao de nome---");
    printf("Digite um nome para comparar(id): ");
    getchar();
    fgets(id, sizeof id, stdin);
    id[strcspn(id, "\n")] = 0;

    if(strcmp(ficha_de_cliente.nome, id) == 0){
        printf("O nome %s e igual ao de registro\n", id);
    }
    else{
        printf("O nome %s e diferente do de registro '%s'.", id, ficha_de_cliente.nome);
    }
    return 0;
}