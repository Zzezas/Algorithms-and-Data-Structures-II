#include "header.h"

long long calcular_potencia(int base, int expoente){
    // Caso Base: Qualquer número (diferente de zero) elevado a 0 é 1.
    if (expoente == 0) {
        return 1;
    }
    else {
        return base * calcular_potencia(base, expoente - 1);
    }
}