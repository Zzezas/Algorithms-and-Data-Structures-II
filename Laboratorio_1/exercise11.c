#include <stdio.h>
#include <string.h>

struct Ficha_cliente {
    char nome[50];
    char endereco[100];
    char email[50];
    int idade;
    int cpf;
    char sexo; // 'M' para masculino, 'F' para feminino
    int data_nascimento; // Formato: DDMMYYYY
    float altura;
    float peso;
    float imc; // Índice de Massa Corporal
};

