#include <stdio.h>
#include <string.h>

struct Motor{
    float cilindrada;
    float potencia;
};

struct Carro{
    char marca[50];
    char modelo[50];
    struct Motor motor;
};

int main(){
    struct Carro carro[4];

    for(int i = 0; i < 4; i++){
        printf("Insira a marca do carro: ");
        fgets(carro[i].marca, sizeof(carro[i].marca), stdin);
        carro[i].marca[strcspn(carro[i].marca, "\n")] = '\0';

        printf("Insira agora o modelo do carro: ");
        fgets(carro[i].modelo, sizeof(carro[i].modelo), stdin);
        carro[i].modelo[strcspn(carro[i].modelo, "\n")] = '\0';

        printf("Insira as cilidradas: ");
        scanf("%f", &carro[i].motor.cilindrada);

        printf("Insira a potencia: ");
        scanf("%f", &carro[i].motor.potencia);

        getchar();

    }
    printf("---------------Lista de carros----------------");

    for(int i = 0; i < 4; i++){
        printf("Carro: %s./n Modelo: %s./n Cilindrada: %f./n Potencia: %f./n", carro[i].marca, carro[i].modelo, carro[i].motor.cilindrada, carro[i].motor.potencia);
    }
    return 0;
}