#include "header.h" 

int contar_digitos(int numero) {
    if (numero < 10) {
        return 1;
    }
    // Passo Recursivo: O número de dígitos é 1 (o dígito atual) mais
    // o número de dígitos do restante do número (numero / 10).
    // A divisão inteira "remove" o último dígito.
    else {
        return 1 + contar_digitos(numero / 10);
    }
}
