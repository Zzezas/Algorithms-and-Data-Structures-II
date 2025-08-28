#include <stdio.h>

int g_N;

int calcula_fibonacci(){
    if(g_N <= 1){
        return g_N;
    }
    
    int a = 0;
    int b = 1;
    int proximo;

    for(int i = 2; i<= g_N; i++){
        proximo = a + b;
        a = b;
        b = proximo;
    }
    return b;
}

int main(){
    printf("Insira um valor para descobrir o seu fibonacci");
    scanf("%d", &g_N);

    if(g_N < 0){
        printf("ERRO! Fibonacci nao esta definido para numeros negativos.");
        return 1;
    }
    int resultado = calcula_fibonacci();

    printf("O valor do fibonacci %d e %d\n", g_N, resultado);
}
