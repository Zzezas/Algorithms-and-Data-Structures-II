#include <stdio.h>
#include "header.h"

int main(void){
    int n;
    printf("Insira um numero para somar todos os numeros ate ele: ");
    scanf("%d", &n);
    printf("A soma de 1 ate %d e: %d\n", n, soma_de_numeros(n));
    return 0;
}