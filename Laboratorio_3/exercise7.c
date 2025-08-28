#include  <stdio.h>

int g_N;

int calcula_fatorial(){
    int resultado = 1;
    if(g_N == 0){
        return 1;
    }
    if(g_N < 0){
        printf("ERROR! Fatorial nao e definido para numeros negativos");
        return -1;
    }

    for(int i = g_N; i >= 1; i--){
        resultado *= i;
    }
    return resultado;
}

int main(){
    printf("Insira o valor para calcular a fatorial: ");
    scanf("%d", &g_N);
    int result = calcula_fatorial();
    printf("Resultado de %d! = %d", g_N, result);
    return 0;
}