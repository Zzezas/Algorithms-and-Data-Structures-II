#include <stdio.h>
#include "header.h"

int main() {
    int base, expoente;
    long long resultado;

    printf("Digite o valor da base: ");
    scanf("%d", &base);
    printf("Digite o valor do expoente (um numero inteiro nao negativo): ");
    scanf("%d", &expoente);

    // --- Tratamento de Erros ---
    // Garante que o expoente não seja negativo.
    if (expoente < 0) {
        printf("Erro: O expoente deve ser um valor maior ou igual a 0.\n");
        return 1; 
    }

    
    resultado = calcular_potencia(base, expoente);

    printf("%d elevado a %d e: %lld\n", base, expoente, resultado);

    return 0;
}