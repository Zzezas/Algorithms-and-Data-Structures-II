#include <stdio.h>
#include "header.h"

int main() {
    int numero;

    // Solicita a entrada do usuário
    printf("Digite um numero inteiro positivo para verificar se e primo: ");
    scanf("%d", &numero);

    // --- Tratamento de Erros ---
    // Certifica-se de que o número é positivo.
    if (numero <= 0) {
        printf("Erro: O numero fornecido deve ser positivo.\n");
        return 1; // Termina o programa com um código de erro
    }

    // Chama a função e verifica o resultado (1 para verdadeiro, 0 para falso)
    if (eh_primo(numero)) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0; // Indica que o programa foi executado com sucesso
}