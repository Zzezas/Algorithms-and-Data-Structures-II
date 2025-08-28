#include <stdio.h>

float g_vetor[5];

float calcula_media_aritmetica(){
    float soma = 0.0;
    for(int i = 0; i < 5; i++){
        soma += g_vetor[i];
    }
    float media = soma / 5.0;
    return media;
}

int main(){
    for(int i = 0; i < 5; i++){
        printf("Insira elementos para calcular a media: ");
        scanf("%f", &g_vetor[i]);    
    }
    float result = calcula_media_aritmetica();
    printf("A media aritmetica é: %2f", result);
}