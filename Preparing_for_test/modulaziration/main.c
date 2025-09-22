#include "header.h"
#include <stdio.h>

int main(){
    int a,b;
    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo valor: ");
    scanf("%d", &b);
    int resultado = calcula_mdc(a,b);
    printf("O mdc de %d e %d e: ", a, b, resultado);
    return 0;
}