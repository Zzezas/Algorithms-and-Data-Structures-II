#include <stdio.h>
#include "header.h"

int main() {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);

    if (eh_primo(x))
        printf("%d é primo\n", x);
    else
        printf("%d não é primo\n", x);

    return 0;
}