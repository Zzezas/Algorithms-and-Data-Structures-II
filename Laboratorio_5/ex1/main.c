#include <stdio.h>
#include "header.h"

int main(void){
    int n;
    printf("Insira um valor para realizar a contagem regressiva: ");
    scanf("%d", &n);
    contagem_regressiva(n); // Apenas chama a função, sem printf
    return 0;
}