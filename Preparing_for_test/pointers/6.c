#include <stdio.h>
#include <math.h>

/*6 – Construa um programa que leia um vetor de números reais e que possui 5 posições. O programa
principal fará as seguintes chamadas de funções:
a) int soma(float *v, int tamanho) – Retorna o somatório dos valores do vetor;
b) float media(int *soma, int tamanho) – Retorna a média dos valores do vetor;
c) float desvio(float *v, float media, int tamanho) – Calcule o desvio-padrão (Veja definição abaixo);
d) float substitui(float*v, int tamanho) – Substitui por zero os valores negativos;
*/
int soma(float *v, int tamanho){
    float total = 0.0;
    for(int i = 0; i < tamanho; i++){
        total += v[i];
    }
    return (int)total;
}
float media(int *soma, int tamanho){
    float media = 0.0;
    media = *soma / tamanho;
    return media;
}
float desvio(float *v, float media, int tamanho) {
    float soma_dos_quadrados = 0.0;
    for (int i = 0; i < tamanho; i++) {
        float diferenca = v[i] - media;
        float quadrado = diferenca * diferenca;
        soma_dos_quadrados += quadrado;
    }
    float variancia = soma_dos_quadrados / tamanho;
    return sqrt(variancia);
}
float substitui(float *v, int tamanho){
    int alterados = 0;
    for (int i = 0; i < tamanho; i++) {
        if (v[i] < 0) {
            v[i] = 0.0;
            alterados++;
        }
    }
    return alterados;
}
int main(){
    float vetor[5];
    int tamanho, resultadoS;
    float resultadoM, resultadoD;
    tamanho = sizeof(vetor) / sizeof(vetor[0]);
    printf("Insira 5 valores: \n");
    for(int i = 0; i < tamanho; i++){
        printf("%dº Valor:  ", i + 1);
        scanf("%f", &vetor[i]);
    }
    resultadoS = soma(vetor, tamanho);
    resultadoM = media(&resultadoS, tamanho);
    resultadoD = desvio(vetor, resultadoM, tamanho);
    
    printf("total da soma: %d", resultadoS);
    printf("total da media: %f", resultadoM);
    printf("Desvio padrão: %f", resultadoD);

    substitui(vetor, tamanho);
    printf("\n--- Vetor após substituir negativos por zero ---\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f  ", vetor[i]);
    }
}