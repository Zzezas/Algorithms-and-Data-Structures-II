#include "header.h"

int calcula_fatorial(int n){
    // Caso de erro: fatorial é indefinido para números negativos.
    if (n < 0) {
        return -1; // Sinaliza um erro
    }
    
    // Caso Base: O ponto de parada da recursão. Fatorial de 0 é 1.
    if (n == 0) {
        return 1;
    } 
    // Passo Recursivo: A função chama a si mesma com um problema menor (n-1).
    else {
        return n * calcula_fatorial(n - 1);
    }
}