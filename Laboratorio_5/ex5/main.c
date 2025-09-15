#include <stdio.h>
#include "header.h" 

int main() {
    int n;
    long long resultado;

    printf("Digite a posicao (n) do termo da sequencia de Fibonacci que deseja encontrar: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: A posicao 'n' deve ser um numero maior ou igual a 0.\n");
        return 1;
    }
    resultado = calcular_fibonacci(n);

    printf("O termo da posicao %d na sequencia de Fibonacci e: %lld\n", n, resultado);

    return 0; 
}