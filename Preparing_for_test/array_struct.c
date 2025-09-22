#include <stdio.h>
#include <string.h>

struct Telefone{
    int ddd;
    int numero;
};

struct Contato{
    char nome[50];
    char email[100];
    struct Telefone telefone[2];
};

int main(){
    struct Contato contato[3];

    for(int i = 0; i < 3; i++){
        printf("Nome: ");
        fgets(contato[i].nome, sizeof(contato[i].nome), stdin);
        contato[i].nome[strcspn(contato[i].nome, "\n")] = '\0';

        printf("Email: ");
        fgets(contato[i].email, sizeof(contato[i].email), stdin);
        contato[i].email[strcspn(contato[i].email, "\n")] = '\0';

        printf("1º DDD: ");
        scanf("%d", &contato[i].telefone[0].ddd);

        printf("1º telefone: ");
        scanf("%d", &contato[i].telefone[0].numero);

        printf("2º DDD: ");
        scanf("%d", &contato[i].telefone[1].ddd);

        printf("2º telefone: ");
        scanf("%d", &contato[i].telefone[1].numero);

        getchar();
        printf("\n\n");
    }
    
    printf("-------------Agenda-------------\n");

    for(int i = 0; i < 3; i++){
        printf("Nome: %s\nEmail: %s\n1º numero: (%d)%d\n2º numero: (%d)%d\n\n", contato[i].nome, contato[i].email, contato[i].telefone[0].ddd, contato[i].telefone[0].numero, contato[i].telefone[1].ddd, contato[i].telefone[1].numero);
    }

    return 0;

}
