#include <stdio.h>

/*8 – Escreva um módulo em C que, usando variáveis locais, declare uma variável inteira e um ponteiro
para essa variável, e depois altere o valor da variável através do ponteiro.
*/
void altera(){
    int x;
    int *px;
    printf("Insira o valor de x: \n");
    scanf("%d", &x);

    px = &x;
    printf("Valor original de x: %d\n", x);
    *px = *px + 10;
    printf("Novo valor de x: %d\n", x);
}

int main(){
    altera();
    return 0;
}