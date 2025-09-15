#include "header.h" // Inclui o nosso próprio arquivo de cabeçalho

// --- Função "Helper" Recursiva ---
// 'static' significa que esta função só pode ser usada dentro deste arquivo.
// 'numero_restante' é o que ainda falta processar.
// 'numero_invertido' é o resultado acumulado até agora.
static int inverter_recursivo(int numero_restante, int numero_invertido) {
    // Caso Base: Se não há mais dígitos para processar,
    // o resultado acumulado é o número final invertido.
    if (numero_restante == 0) {
        return numero_invertido;
    }
    
    // Passo Recursivo:
    // 1. Pega o último dígito do número restante.
    int ultimo_digito = numero_restante % 10;
    
    // 2. Adiciona esse dígito ao final do número já invertido.
    // (multiplica por 10 para "abrir espaço" e depois soma)
    int novo_invertido = (numero_invertido * 10) + ultimo_digito;
    
    // 3. Chama a função novamente com o restante do número (sem o último dígito)
    // e com o novo resultado parcial.
    return inverter_recursivo(numero_restante / 10, novo_invertido);
}

// --- Função Principal (Wrapper) ---
// Esta é a função chamada pelo main.c.
int inverter_numero(int n) {
    // Inicia o processo recursivo. O número a ser processado é 'n'
    // e o resultado acumulado inicial é 0.
    return inverter_recursivo(n, 0);
}