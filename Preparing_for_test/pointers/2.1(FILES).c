#include <stdio.h>

/*2- Faça um módulo em C que seja capaz de criar um arquivo TEXTO em disco,
com o nome "dados.txt" e escreva neste arquivo em disco uma contagem 
de 15 em 15, que vá de 45 até 0, com um número em cada linha.*/

void contagem(){
    FILE *arquivo = fopen("dados.txt", "w");
    if(arquivo == NULL){
        printf("Erro! Não foi possivel criar o arquivo 'dados.txt'. \n");
    }
    for(int i = 45; i >= 0; i -= 15){
        fprintf(arquivo, "%d\n", i);
    }

    fclose(arquivo);
    printf("Arquivos 'dados.txt' criado com sucesso.");
}
int main(){
    contagem();
    return 0;
}