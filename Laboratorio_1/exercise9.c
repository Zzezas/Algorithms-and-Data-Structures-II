#include <stdio.h>
#include <string.h>

struct bolsa{
    char nome [50];
    char area [100];
    float valor_atual;
    float valor_anterior;
    double variacao_acao;
};

int main(void){
    struct bolsa x;

    printf("Digite o nome da companhia: ");
    fgets(x.nome, sizeof(x.nome), stdin);
    x.nome[strcspn(x.nome, "\n")] = '\0';

    printf("Digite a area da atuação: ");
    fgets(x.area, sizeof(x.area), stdin);
    x.area[strcspn(x.area, "\n")] = '\0';

    printf("Digite o valor atual: ");
    scanf("%f", &x.valor_atual);

    printf("Digite o valor anterior: ");
    scanf("%f", &x.valor_anterior);

    x.variacao_acao = (x.valor_atual - x.valor_anterior) / x.valor_anterior * 100;

    printf("\n----Ação da bolsa de valores----\n");
    printf("Nome da companhia: %s\n", x.nome);
    printf("Area de atuação: %s\n", x.area);
    printf("Valor atual: %f\n", x.valor_atual);
    printf("Valor anterior: %f\n", x.valor_anterior);
    printf("Variação da ação: %lf\n", x.variacao_acao);
    
}