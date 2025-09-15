#include <stdio.h>
#include "header.h" 

int main() {
    int n;
    long long resultado;

    // Solicita a entrada do usuário
    printf("Digite a posicao (n) do termo da sequencia de Fibonacci que deseja encontrar: ");
    scanf("%d", &n);

    // --- Tratamento de Erros ---
    // Garante que o número seja maior ou igual a zero.
    if (n < 0) {
        printf("Erro: A posicao 'n' deve ser um numero maior ou igual a 0.\n");
        return 1; // Retorna 1 para indicar que o programa terminou com erro
    }

    // Chama a função implementada em fibonacci.c
    resultado = calcular_fibonacci(n);

    // Exibe o resultado para o usuário
    // A especificação de formato %lld é para 'long long int'
    printf("O termo da posicao %d na sequencia de Fibonacci e: %lld\n", n, resultado);

    return 0; // Retorna 0 para indicar sucesso na execução
}