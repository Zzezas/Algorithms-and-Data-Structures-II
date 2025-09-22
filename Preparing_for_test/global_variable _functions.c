#include <stdio.h>

int g_NUM;

int verifica_ano_bissexto(){

    printf("Insira um ano para verificar se e bissexto: ");
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
        printf("Ano e bissexto");
    }
    else{
        printf("Nao e bissexto");
    }

    return 0;
}