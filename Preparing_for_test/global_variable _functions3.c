#include <stdio.h>

int g_N;

int calcula_fatorial(){
    // Defino de inicio a varivel resultado = 1, para quando chamada assumir o primeiro valor.
    int resultado = 1;
// explicitando que fatorial de 0 é 1;
    if(g_N == 0){
        return 1;
    }
// tratamento de erro para casos de input negativos.
    if(g_N < 0){
        printf("Erro! Fatorial nao esta para numeros negativos.");
    }

    for(int i = g_N; i >= 1; i--){
        resultado *= i;
    }
    return resultado;
}

int main(){
    printf("Insira um numero para calcular seu fatorial: ");
    scanf("%d", &g_N);
    int fatorial = calcula_fatorial();
    printf("O fatorial de %d! e: %d", g_N, fatorial);
}