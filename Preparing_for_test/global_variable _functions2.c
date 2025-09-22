#include <stdio.h>

int g_N;

int calcula_fibonacci(){
    if(g_N < 0){
        printf("Erro! Fibonacci nao esta para numeros negativos");
    }
    if(g_N <= 1){
        return 1;
    }

    int a = 0;
    int b = 1;
    int proximo;

    for(int i = 2; i <= g_N; i++){
        proximo = a + b;
        a = b;
        b = proximo;
    }
    return b;
}
int main(){
    printf("Insira um numero para saber seu fibonacci: ");
    scanf("%d", &g_N);
    int resultado = calcula_fibonacci();
    printf("O fibonacci de %d e: %d", g_N, resultado);
    return 0;
}