#include <stdio.h>
#include <string.h>

/*– Foi realizada uma pesquisa com os habitantes de bairro. Crie um programa que define a estrutura
habitante com os dados: nome, idade, sexo, salário e número de filhos. Usando o módulo altera (*
habitante x) altere os dados e do módulo exibe ( * habitante x), para exibir os membros da struct.
*/
struct habitante{
    char nome[50];
    int idade;
    char sexo;
    float salario;
    int N_filhos;
};

void altera(struct habitante *x){
    printf("Insira o nome do habitante:\n");
    fgets(x->nome, 50, stdin);
    x->nome[strcspn(x->nome, "\n")] = '\0';
    printf("Insira a idade do habitante:\n");
    scanf("%d", &x->idade);
    printf("Insira o sexo(M/F):\n");
    scanf(" %c", &x->sexo);
    printf("Insira o salario do habitante:\n");
    scanf("%f", &x->salario);
    printf("Insira o numero de filhos que o habitante possui:\n");
    scanf("%d", &x->N_filhos);
}

void exibe(struct habitante *y){
    printf("Nome do habitante: %s\n", y->nome);
    printf("Idade do habitante: %d\n", y->idade);
    printf("Sexo do habitante: %c\n", y->sexo);
    printf("Salario do habitante: %.2f\n", y->salario);
    printf("Numero de filhos que o habitante possui: %d\n", y->N_filhos);
}

int main(){
    struct habitante a;
    altera(&a);
    exibe(&a);
    return 0;
}