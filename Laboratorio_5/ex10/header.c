#include "header.h"
#include <string.h> // Para usar a função strlen()

// --- Função "Helper" Recursiva ---
// 'static' a torna visível apenas dentro deste arquivo.
// Ela verifica se o trecho da string entre 'inicio' e 'fim' é um palíndromo.
static int eh_palindromo_recursivo(char str[], int inicio, int fim) {
    // Caso Base de Sucesso: Se os marcadores de início e fim se cruzarem
    // ou forem iguais, significa que todos os caracteres foram verificados
    // com sucesso.
    if (inicio >= fim) {
        return 1; // É um palíndromo
    }

    // Caso de Falha Imediata: Se os caracteres nas extremidades forem diferentes,
    // a string não é um palíndromo.
    if (str[inicio] != str[fim]) {
        return 0; // Não é um palíndromo
    }

    // Passo Recursivo: Se os caracteres das extremidades são iguais,
    // chamamos a função novamente para verificar o "miolo" da string,
    // avançando o início e recuando o fim.
    return eh_palindromo_recursivo(str, inicio + 1, fim - 1);
}

// --- Função Principal (Wrapper) ---
// Esta é a função que o main.c chama.
int eh_palindromo(char str[]) {
    int tamanho = strlen(str);

    // Uma string vazia ou com um único caractere é considerada um palíndromo.
    if (tamanho <= 1) {
        return 1;
    }
    
    // Inicia a verificação recursiva com a string inteira (de 0 a tamanho-1).
    return eh_palindromo_recursivo(str, 0, tamanho - 1);
}