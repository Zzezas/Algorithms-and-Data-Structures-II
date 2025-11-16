#include <stdio.h>

/*1- Complete o programa abaixo, que usando a passagem de parâmetros
por referência para ordenar de forma crescente três valores 
lidos no módulo principal.*/

void CRESCENTE(int *a, int *b, int *c){
    int temp;
    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*a > *c){
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if(*b > *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
    
}

int main(){
  int x, y, z;
  printf("Digite o primeiro valor: \n");
  scanf("%d",&x);
  printf("Digite o segundo valor: \n");
  scanf("%d",&y);
  printf("Digite o terceiro valor: \n");
  scanf("%d",&z);
  printf("Valores recebidos: %d %d %d", x, y, z);
  CRESCENTE(&x, &y, &z);
  printf("Valores ordenados: %d %d %d", x, y, z);
}