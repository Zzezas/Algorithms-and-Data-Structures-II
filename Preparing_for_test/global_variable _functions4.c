#include <stdio.h>

float g_vetor[5];

float calcula_media_aritmetica(){
    float soma = 0;
    for(int i = 0; i < 5; i++){
        soma += g_vetor[i];
    }
    float media = soma / 5;
    return media;
}

int main(){
    for(int i = 0; i < 5; i++){
        printf("Insira um valor para calcular a media aritmetica: ");
        scanf("%f", &g_vetor[i]);
    }
    float resultado = calcula_media_aritmetica();
    printf("A media e: %4f", resultado);

}