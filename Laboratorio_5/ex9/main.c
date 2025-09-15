#include <stdio.h>
#include "header.h"

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro positivo: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro positivo: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Erro: Ambos os numeros devem ser positivos.\n");
        return 1;
    }

    // Chama a função para calcular o MDC e armazena o resultado
    int resultado = calcular_mdc(num1, num2);

    printf("O MDC de %d e %d e: %d\n", num1, num2, resultado);

    return 0;
}