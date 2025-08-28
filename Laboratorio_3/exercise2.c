#include <stdio.h>

int g_NUM;
int verifica_impar_par();

int main(){
    int resultado = verifica_impar_par();
    if(resultado == 1){
        printf("O numero é impar!");
    }
    else{
        printf("O numero é par!");
    }
    return 0;
}

int verifica_impar_par(){
    printf("Insira um numero para verificar se é impar ou par");
    scanf("%d", &g_NUM);
    if(g_NUM % 2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}