/* Passagem por referencia
Começamos a trabalhar com endereços de memoria, muda que agora podemos modificar o valor
do parametro e se manisfestar em quem chamou a função.
o * antes é para indicar que quero passar por parametro: *a, sempre que for usado deve-se usar * antes.
E sempre que eu chamar a função devo colocar um & na frente da linha do parametro;

Passagem por referencia permite modificar o parametro e voltar ele para dentro da função
que foi chamada.
*/

#include <stdio.h>

//Primeira atividade: refazendo para praticar.
void trocaNum(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void ModificaNum(int *x, int *y){
    (*x)++;
    (*y)++;
}

int main(){
    int a = 5; 
    int b = 10;
    trocaNum(&a, &b);
    printf("A = %d, B = %d", a, b);

    printf("Agora incrementando e decrementando:");
    ModificaNum(&a, &b);
    printf("A = %d, B = %d", a, b);
}