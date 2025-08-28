#include <stdio.h>

int g_NUM;

int calcula_soma(){
    int x, soma;
    printf("Insira o primeiro valor para ser somado");
    scanf("%d", &g_NUM);
    printf("Insira o segundo valor para ser somado");
    scanf("%d", &x);
    soma = g_NUM + x;
    return soma;
}

int main(){
    int resultado = calcula_soma();
    printf("O resultado da soma é: %d", resultado);
    return 0;
}