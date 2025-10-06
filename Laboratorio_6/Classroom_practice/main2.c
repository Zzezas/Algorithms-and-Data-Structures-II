#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x, y;
};

void imprimir (int n){
    printf("Valor = %d\n", n);
}

int main(){
    struct ponto p = {10, 20};

    imprimir(p.x);
    imprimir(p.y);
}