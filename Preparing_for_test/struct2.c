#include <stdio.h>
#include <string.h>

struct CLIENTEBANCARIO {
    int conta;
    char nome[30];
    float saldo;
};

void ler(struct CLIENTEBANCARIO cliente[3]){
    printf("---------Cliente bancario---------\n");

    for(int i = 0; i < 3; i++){
        printf("Insira o numero da conta: ");
        scanf("%d", &cliente[i].conta);
        getchar();
        printf("Insira o nome do cliente: ");
        fgets(cliente[i].nome, sizeof(cliente[i].nome), stdin);
        cliente[i].nome[strcspn(cliente[i].nome, "\n")] = 0;
        printf("Insira o saldo atual da conta: ");
        scanf("%f", &cliente[i].saldo);
        getchar(); 
    }   
}

void imprimir(struct CLIENTEBANCARIO cliente[3]){
    for(int i = 0; i < 3; i++){
        printf("Nome do cliente: %s", cliente[i].nome);
        printf("Conta: %d", cliente[i].conta);
        printf("Saldo: %f", cliente[i].saldo);
    }
}

float Maiorsaldo(struct CLIENTEBANCARIO cliente[3]){
    float maior = cliente[0].saldo;
    for(int i = 1; i < 3; i++){
        if(cliente[i].saldo > maior){
            maior = cliente[i].saldo;
        }
    }
    return maior;   
}

int main(){
    struct CLIENTEBANCARIO cliente[3];
    ler (cliente);
    imprimir(cliente);
    printf("Maior saldo: %f", Maiorsaldo(cliente));
    return 0;
}
