int main()
{
    int i = 99, j; // Declara duas variáveis do tipo inteiro: i, j, sendo que o valor de i=99.
    printf("----Linha 1----\n");
    printf("Valor de  i: %d\n", i);
    printf("Valor de j: ?");
    int *p;        // Declara uma variavel chamada p onde o tipo dessa variavel é int *.
    printf("----Linha 2----\n");
    printf("Endereço guardado: %d", p);
    printf("Valor de  i: %d\n", i);
    printf("Valor de j: ?");
    p = &i;        // p recebe o endereço de memória da variável i, agora p aponta para i.
    printf("----Linha 3----\n");
    printf("Endereço guardado: %d", p);
    printf("Valor de  i: %d\n", i);
    printf("Valor de j: ?");
    j = *p + 300;  // A variável J recebe o VALOR que está no endereço para qual p aponta *p, somado a 300.
    // Como p aponta para i, *p é o mesmo valor de i = 99.
    printf("----Linha 4----\n");
    printf("Endereço guardado: %d", p);
    printf("Valor de  i: %d\n", i);
    printf("Valor de j: ?");
}

