#include <stdio.h>
#include <string.h>
#include "header.h"

int main() {
    char texto[100]; // Define um buffer para a string

    printf("Digite uma palavra para verificar se e um palindromo: ");
    
    // fgets é mais seguro que scanf para ler strings, pois evita estouro de buffer
    // e pode ler espaços (embora para este problema, scanf funcionaria bem para palavras únicas).
    fgets(texto, sizeof(texto), stdin);
    
    // IMPORTANTE: fgets inclui o caractere de nova linha '\n' no final da string.
    // Precisamos removê-lo para a lógica do palíndromo funcionar corretamente.
    texto[strcspn(texto, "\n")] = '\0';

    if (eh_palindromo(texto)) {
        printf("A palavra \"%s\" e um palindromo.\n", texto);
    } else {
        printf("A palavra \"%s\" nao e um palindromo.\n", texto);
    }

    return 0;
}