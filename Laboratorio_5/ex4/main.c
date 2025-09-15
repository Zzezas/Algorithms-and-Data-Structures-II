#include <stdio.h>
#include "header.h"

int main() {
    int base, expoente;
    long long resultado;

    // Solicita a base
    printf("Digite o valor da base: ");
    scanf("%d", &base);

    // Solicita o expoente
    printf("Digite o valor do expoente (um numero inteiro nao negativo): ");
    scanf("%d", &expoente);

    // --- Tratamento de Erros ---
    // Garante que o expoente não seja negativo.
    if (expoente < 0) {
        printf("Erro: O expoente deve ser um valor maior ou igual a 0.\n");
        return 1; // Termina o programa com um código de erro
    }

    // Chama a função definida em potencia.c
    resultado = calcular_potencia(base, expoente);

    // Exibe o resultado para o usuário
    // A especificação de formato %lld é para 'long long int'
    printf("%d elevado a %d e: %lld\n", base, expoente, resultado);

    return 0; // Indica que o programa foi executado com sucesso
}