#include <stdio.h>
#include "header.h"

int main() {
    int num1, num2;

    // Solicita e lê o primeiro número
    printf("Digite o primeiro numero inteiro positivo: ");
    scanf("%d", &num1);

    // Solicita e lê o segundo número
    printf("Digite o segundo numero inteiro positivo: ");
    scanf("%d", &num2);

    // --- Tratamento de Erros ---
    // Valida se ambos os números são maiores que zero.
    if (num1 <= 0 || num2 <= 0) {
        printf("Erro: Ambos os numeros devem ser positivos.\n");
        return 1; // Termina o programa com um código de erro
    }

    // Chama a função para calcular o MDC e armazena o resultado
    int resultado = calcular_mdc(num1, num2);

    // Exibe o resultado
    printf("O MDC de %d e %d e: %d\n", num1, num2, resultado);

    return 0; // Indica que o programa foi executado com sucesso
}