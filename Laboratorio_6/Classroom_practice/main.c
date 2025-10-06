#include <stdio.h>
#include <stdlib.h>

int funcao(int *vetor, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        vetor[i] = vetor[i] + i;
    }
}

int main(){
    int vetor[] = {0,0,0,0,0}, i;

    for(i = 0; i < 5; i++){
        printf("%d\n", vetor[i]);
    }
    funcao(vetor, i);
    for(i = 0; i < 5; i++){
        printf("%d\n", vetor[i]);
    }
}