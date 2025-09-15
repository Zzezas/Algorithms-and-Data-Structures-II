#include <stdio.h>
#include "header.h"

int main() {
    int numero;
    int quantidade;

    // Solicita a entrada do usuário
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // --- Tratamento de Erros ---
    // Valida se o número fornecido é maior que zero.
    if (numero <= 0) {
        printf("Erro: O numero deve ser maior que zero.\n");
        return 1; // Termina o programa com um código de erro
    }

    // Chama a função implementada em digitos.c
    quantidade = contar_digitos(numero);

    // Exibe o resultado de forma amigável
    if (quantidade == 1) {
         printf("O numero %d possui %d digito.\n", numero, quantidade);
    } else {
         printf("O numero %d possui %d digitos.\n", numero, quantidade);
    }

    return 0; // Indica que o programa foi executado com sucesso
}