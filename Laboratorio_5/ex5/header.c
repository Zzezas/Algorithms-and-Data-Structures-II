#include "header.h"


long long calcular_fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    // Passo Recursivo: Todo termo, a partir do terceiro, é a soma
    // dos dois termos anteriores. F(n) = F(n-1) + F(n-2)
    else {
        return calcular_fibonacci(n - 1) + calcular_fibonacci(n - 2);
    }
}