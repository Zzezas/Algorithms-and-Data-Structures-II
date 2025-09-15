#include <stdio.h>
#include "header.h"

int main(){
    int numero;
    int resultado;

    // Solicita a entrada do usuário
    printf("Digite um numero inteiro nao negativo para calcular o fatorial: ");
    scanf("%d", &numero);

    // --- Tratamento de Erros ---
    // Garante que o número seja maior ou igual a zero antes de chamar a função.
    if (numero < 0) {
        printf("Erro: O valor de 'n' deve ser maior ou igual a 0.\n");
        return 1; // Retorna 1 para indicar que o programa terminou com erro
    }

    // Chama a função implementada em header.c
    resultado = calcula_fatorial(numero);

    // Exibe o resultado para o usuário
    printf("O fatorial de %d e: %d\n", numero, resultado);

    return 0; // Retorna 0 para indicar sucesso na execução
}