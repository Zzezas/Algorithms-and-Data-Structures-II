#include <stdio.h>
#include "header.h"

int main() {
    int numero;

    printf("Digite um numero inteiro positivo para verificar se e primo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: O numero fornecido deve ser positivo.\n");
        return 1; 
    }

    // Chama a função e verifica o resultado (1 para verdadeiro, 0 para falso)
    if (eh_primo(numero)) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;
}