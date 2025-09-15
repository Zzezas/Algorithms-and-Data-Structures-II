#include "header.h"

// Implementação da função recursiva para a sequência de Fibonacci
long long calcular_fibonacci(int n) {
    // Caso Base 1: O primeiro termo (posição 0) da sequência é 0.
    if (n == 0) {
        return 0;
    }
    // Caso Base 2: O segundo termo (posição 1) da sequência é 1.
    // Estes são os nossos pontos de parada.
    else if (n == 1) {
        return 1;
    }
    // Passo Recursivo: Todo termo, a partir do terceiro, é a soma
    // dos dois termos anteriores. F(n) = F(n-1) + F(n-2)
    else {
        return calcular_fibonacci(n - 1) + calcular_fibonacci(n - 2);
    }
}