#include <stdio.h>
#include "header.h"

int main() {
    int numero;
    int invertido;

    printf("Digite um numero inteiro positivo para inverter: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: O numero deve ser maior que zero.\n");
        return 1; 
    }

    invertido = inverter_numero(numero);

    printf("O numero %d invertido e: %d\n", numero, invertido);

    return 0;
}