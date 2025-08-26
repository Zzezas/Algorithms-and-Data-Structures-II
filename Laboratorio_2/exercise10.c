#include <stdio.h>
#include <string.h>

struct Motor {
    float cilindrada, potencia;
};

struct Carro {
    char marca[50], modelo[50];
    struct Motor motor;
};

void main() {
    struct Carro carro[4];

    for (int i = 0; i < 4; i++) {
        printf("Marca do carro: ");
        fgets(carro[i].marca, sizeof(carro[i].marca), stdin);
        carro[i].marca[strcspn(carro[i].marca, "\n")] = '\0';
        
        printf("Modelo do carro: ");
        fgets(carro[i].modelo, sizeof(carro[i].modelo), stdin);
        carro[i].modelo[strcspn(carro[i].modelo, "\n")] = '\0';

        printf("Cilindradas: ");
        scanf("%f", &carro[i].motor.cilindrada);
        
        printf("Potência: ");
        scanf("%f", &carro[i].motor.potencia);
        
        getchar();
    }

    printf("\n\nLista de veículos:\n\n");

    for (int i = 0; i < 4; i++) {
        printf("Marca: %s\nModelo: %s\nCilindradas: %.2f\nPotência: %.2f\n\n", carro[i].marca, carro[i].modelo, carro[i].motor.cilindrada, carro[i].motor.potencia);
    }
}