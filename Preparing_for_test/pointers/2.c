#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*Faça um programa que receba uma frase no módulo principal. Elabore um módulo que receba a frase
e uma determinada vogal, ao final, mostre a quantidade de vezes que a vogal apareceu na frase. Fazer
tratamento de erro para evitar que leia consoante.*/

void recebefrase(char x[], char y){
    char Vogminus = tolower(y);
    if(Vogminus == 'a' || Vogminus == 'e' || Vogminus == 'i' || Vogminus == 'o' || Vogminus == 'u'){
        int contador = 0;
        for(int i = 0; x[i] != '\0'; i++){
            if(tolower(x[i]) == Vogminus){
                contador++;
            }
        }
        printf("A vogal %c apareceu %d vezes.", y, contador);
    }
    else{
        printf("Erro!! So e possivel contar vogais.");
    }
}
int main(){
    char a[100];
    char b;
    printf("Insira uma frase para contar vogais");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    printf("Qual vogal voce quer contar?");
    scanf(" %c", &b);
    recebefrase(a, b);

    printf("Frase digitada: %s", a);
    printf("Vogal de entrada: %c", b);

    return 0;
}