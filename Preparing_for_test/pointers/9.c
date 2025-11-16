#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*Escreva um módulo em C que, usando variáveis locais, declare uma string e um ponteiro para essa
variável. Usando ponteiro, altere a string para sua versão em letras maiúsculas
*/

void maiuscula(char *p){
    while(*p != '\0'){
        *p = toupper(*p);
        p++;
    }
}

int main(){
    char str[100];
    char *ptr = str;
    printf("Insira uma frase/palavra para mudar para maiuscula: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    maiuscula(ptr);
    printf("String convertida: %s", str);

    return 0;
}