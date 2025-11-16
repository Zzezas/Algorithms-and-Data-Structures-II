#include <stdio.h>

/*5 – Crie uma sub-rotina que receba como parâmetros por referência três valores inteiros. A sub-rotina
deverá ordenar de forma crescente os valores. Sintam-se à vontade para usar vetor ou não. */

void subrotina(int V[]){
    int temp;
    if(V[0] > V[1]){
        temp = V[0];
        V[0] = V[1];
        V[1] = temp;
    }
    if(V[0] > V[2]){
        temp = V[0];
        V[0] = V[2];
        V[2] = temp;
    }
    if(V[1] > V[2]){
        temp = V[1];
        V[1] = V[2];
        V[2] = temp;
    }
}
 
int main(){
    int vetor[3];
    printf("Insira 3 valores para serem ordenados de forma crescente: \n");
    for(int i = 0; i < 3; i++){
        printf("%dº Valor", i + 1);
        scanf("%d", &vetor[i]);
    }
    subrotina(vetor);
    printf("Valores ordenados de forma crescente: %d %d %d", vetor[0], vetor[1], vetor[2]);
}