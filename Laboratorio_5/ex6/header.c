#include "header.h" // Inclui o nosso próprio arquivo de cabeçalho

// Implementação da função recursiva para contar os dígitos
int contar_digitos(int numero) {
    // Caso Base: Se o número for menor que 10, ele tem apenas 1 dígito.
    // Este é o nosso ponto de parada.
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
