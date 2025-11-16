#include <stdio.h>

/*– Crie uma sub-rotina que receba como parâmetros um vetor, *xmin e a quantidade de elementos do
vetor (use o comando sizeof( ) dentro do módulo principal). A rotina deverá calcular o menor elemento
do vetor e também deverá fazer a multiplicação de cada elemento com o menor elemento do vetor.
*/
void subrotina(int vetor[], int *xmin, int tamanho){
    int menortemp = vetor[0];
    for(int i = 0; i < tamanho;i++){
        if(vetor[i] < menortemp){
            menortemp = vetor[i];
        }
    }
    *xmin = menortemp;
    for(int i = 0; i < tamanho; i++){
        vetor[i] = vetor[i] * (*xmin);
    }
}

int main(){
    int V[5] = {10, 4, 20, 2, 8};
    int min, qntd = 0;
    qntd = sizeof(V) / sizeof(V[0]);
    subrotina(V, &min, qntd);
    printf("O menor elemento encontrado foi: %d\n", min);
    printf("Vetor modificado: ");
    for(int i = 0; i < qntd; i++){
        printf("%d", V[i]);
        if(i < qntd - 1){ 
            printf(", ");
        }
    }
}