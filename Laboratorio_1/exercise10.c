#include <stdio.h>
#include <string.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct Data {
    int dia;
    int mes; 
    int ano;
};

struct Agenda {
    struct Horario horario;
    struct Data data;
    char descricao[100];
};

int main (void){
    struct Agenda agenda;

        printf("Digite a hora (HH MM SS): ");
        scanf("%d %d %d", &agenda.horario.hora, &agenda.horario.minuto, &agenda.horario.segundo);
        
        printf("Digite a data (DD MM AAAA): ");
        scanf("%d %d %d", &agenda.data.dia, &agenda.data.mes, &agenda.data.ano);
        
        printf("Digite a descricao: ");
        getchar(); // Limpa o buffer do teclado
        fgets(agenda.descricao, sizeof(agenda.descricao), stdin);
        agenda.descricao[strcspn(agenda.descricao, "\n")] = 0; // Remove o newline
    

    printf("\nAgenda:\n");

        printf("Evento %d:\n", 1);
        printf("Horario: %02d:%02d:%02d\n", agenda.horario.hora, agenda.horario.minuto, agenda.horario.segundo);
        printf("Data: %02d/%02d/%04d\n", agenda.data.dia, agenda.data.mes, agenda.data.ano);
        printf("Descricao: %s\n", agenda.descricao);
    

    return 0;
}