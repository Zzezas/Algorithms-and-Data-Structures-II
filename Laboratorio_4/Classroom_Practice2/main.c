#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main(){
    int a, b;

    printf("Informe A e B\n");
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", soma(a,b));
    printf("Produto: %d\n", produto(a,b));
    printf("Subtração: %d\n", subtracao(a,b));
    printf("Divisão: %f", divisao(a,b));
    return 0;
}