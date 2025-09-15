#include "header.h" // Inclui o nosso próprio arquivo de cabeçalho

// --- Função "Helper" Recursiva ---
// Esta função é 'static' porque é um detalhe de implementação e
// não precisa ser visível fora deste arquivo .c
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

    // Passo Recursivo: Se nenhuma das condições acima foi atendida,
    // chama a função novamente para testar o próximo divisor.
    return eh_primo_recursivo(n, divisor + 1);
}

// --- Função Principal (Wrapper) ---
// Esta é a função que será chamada pelo main.c
int eh_primo(int n) {
    // Tratamento de casos especiais: 0 e 1 não são primos.
    // Números negativos são invalidados na função main.
    if (n <= 1) {
        return 0; // Não é primo
    }
    
    // Inicia a verificação recursiva com o primeiro divisor possível, que é 2.
    return eh_primo_recursivo(n, 2);
}
