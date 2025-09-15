#include "header.h"

// Implementação da função recursiva para o MDC (Algoritmo de Euclides)
int calcular_mdc(int a, int b) {
    // Caso Base: Se b é 0, então o MDC é a.
    // Este é o ponto de parada da recursão.
    if (b == 0) {
        return a;
    }
    // Passo Recursivo: O MDC de a e b é o mesmo que o MDC de b
    // e o resto da divisão de a por b.
    else {
        return calcular_mdc(b, a % b);
    }
}