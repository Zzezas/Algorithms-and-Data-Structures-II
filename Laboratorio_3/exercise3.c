#include <stdio.h>

int g_NUM;

int verifica_positivo_negativo(){
    printf("Insira um valor para saber se é negativo ou positivo");
    scanf("%d", &g_NUM);
    if(g_NUM > 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int resultado = verifica_positivo_negativo();
    if(resultado == 1){
        printf("O numero e positivo");
    }
    else{
        printf("O numero e negativo");
    }
}