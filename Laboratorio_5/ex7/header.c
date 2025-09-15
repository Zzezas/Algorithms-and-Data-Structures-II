#include "header.h" 

static int eh_primo_recursivo(int n, int divisor) {
    // Caso Base de Sucesso: Se o divisor ao quadrado for maior que n,
    // significa que não encontramos nenhum fator, então n é primo.
    // Esta é uma otimização para não ter que testar até n/2.
    if (divisor * divisor > n) {
        return 1; // É primo
    }

    // Caso de Falha Imediata: Se n for divisível pelo divisor atual,
    // ele não é primo. A recursão para aqui.
    if (n % divisor == 0) {
        return 0; // Não é primo
    }
    return eh_primo_recursivo(n, divisor + 1);
}

int eh_primo(int n) {
    // Tratamento de casos especiais: 0 e 1 não são primos.
    // Números negativos são invalidados na função main.
    if (n <= 1) {
        return 0; // Não é primo
    }
    
    // Inicia a verificação recursiva com o primeiro divisor possível, que é 2.
    return eh_primo_recursivo(n, 2);
}
