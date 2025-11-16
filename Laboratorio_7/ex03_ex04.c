#include <stdio.h>

int main (){
    int a=5, b=12; //Declara duas variaveis int a e b e já atribui valores a elas.
    int *p; //Cria uma variavel para armazenar um endereço
    int *q; //Cria outra variavel para armazenar outro endereço
    p = &a; //p obtem o endereço de a;
    q = &b; //q obtem o endereço de b;
    int c = *p + *q; // cria uma variavel int c que é usada para armazenar o valor da soma entre os valores
    //armazenados pelo ponteiro p e o ponteiro q(soma dos valores apontados por eles);
}


// 4 – Faça o teste de mesa do exercício anterior, não deixe de colocar um campo para indicar o endereço
// de memória.
// 0       a       a(endereço)         b       b(endereço)         *p      p       *p(endereço)        *q      q       *q(endereço)        c       c(endereço)
// 1       5       0061FF18            12      0061FF14             ?      ?       0061FF10             ?      ?       0061FF0C            ?       0061FF10
// 2       5       0061FF18            12      0061FF14             ?      ?       0061FF10             ?      ?       0061FF0C            ?       0061FF10
// 3       5       0061FF18            12      0061FF14             ?      ?       0061FF10             ?      ?       0061FF0C            ?       0061FF10
// 4       5       0061FF18            12      0061FF14             5   0061FF18   0061FF10             ?      ?       0061FF0C            ?       0061FF10
// 5       5       0061FF18            12      0061FF14             5   0061FF18   0061FF10             12  0061FF14   0061FF0C            ?       0061FF10
// 6       5       0061FF18            12      0061FF14             5   0061FF18   0061FF10             12  0061FF14   0061FF0C            17      0061FF10
