#include <stdio.h>
#include "header.h"

int main() {
    int numero;
    int invertido;

    // Solicita a entrada do usuário
    printf("Digite um numero inteiro positivo para inverter: ");
    scanf("%d", &numero);

    // --- Tratamento de Erros ---
    // Valida se o número fornecido é maior que zero.
    if (numero <= 0) {
        printf("Erro: O numero deve ser maior que zero.\n");
        return 1; // Termina o programa com um código de erro
    }

    // Chama a função implementada em inverter.c
    invertido = inverter_numero(numero);

    // Exibe o resultado
    printf("O numero %d invertido e: %d\n", numero, invertido);

    return 0; // Indica que o programa foi executado com sucesso
}