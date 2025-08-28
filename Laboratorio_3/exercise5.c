#include <stdio.h>

int g_NUM;

int verifica_ano_bissexto(){
    printf("Insira um ano para verificar se é bissexto ou não");
    scanf("%d", &g_NUM);
    if((g_NUM % 4 == 0 && g_NUM % 100 != 0) || (g_NUM % 400 == 0)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int resultado = verifica_ano_bissexto();
    if(resultado == 1){
        printf("O ano e bissexto");
    }
    else{
        printf("O ano não é bissexto");
    }
    return 0;
}