#include <stdio.h>
#include <stdlib.h>
#include "lab_exercise.h" // Nome da biblioteca .h

int main(void) {
    int opcao = -1; // Inicializa com um valor para entrar no loop

    do {
        printf("\n------ Menu de Exercicios ------\n");
        printf("1 - Sair\n"); 
        printf("2 - Exercicio 2 - Verifica positivo negativo\n");
        printf("3 - Exercicio 3 - Calcula maximo divisor comum\n");
        printf("4 - Exercicio 4 - Verifica se e primo\n");
        printf("5 - Exercicio 5 - Verifica se e triangulo\n");
        printf("6 - Exercicio 6 - Calculadora\n");
        printf("7 - Exercicio 7 - Gerenciar conta bancaria\n");
        printf("8 - Exercicio 8 - Locadora de bicicletas\n");
        printf("----------------------------------\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saindo do programa...\n");
                break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                Exercicio(opcao); // Chama a função que invoca o exercício
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 1); // O loop continua enquanto a opcao nao for '1'

    return 0;
}