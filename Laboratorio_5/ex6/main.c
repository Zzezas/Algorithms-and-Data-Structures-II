#include <stdio.h>
#include "header.h"

int main() {
    int numero;
    int quantidade;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: O numero deve ser maior que zero.\n");
        return 1;
    }
    quantidade = contar_digitos(numero);

    if (quantidade == 1) {
         printf("O numero %d possui %d digito.\n", numero, quantidade);
    } else {
         printf("O numero %d possui %d digitos.\n", numero, quantidade);
    }

    return 0;
}