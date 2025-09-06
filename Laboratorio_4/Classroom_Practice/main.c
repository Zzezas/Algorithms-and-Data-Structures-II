#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

int a, b;

int main(){
    printf("Informe A e B\n");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", calcula_soma());

    printf("Produto; %d\n", calcula_produto());
    
    return 0;
}
