#include <stdio.h>
#include <string.h>

struct Ponto2D {
    float x, y;
};

struct Circulo {
    struct Ponto2D ponto;
    float raio;
};

void main() {
    struct Circulo circulo;

    printf("Valor de x: ");
    scanf("%f", &circulo.ponto.x);

    printf("Valor de y:");
    scanf("%f", &circulo.ponto.y);

    printf("Valor do raio: ");
    scanf("%f", &circulo.raio);

    // exibir
    printf("\n\n\nValor de x: %.2f\nValor de y: %.2f\nValor de raio: %.2f\n", circulo);
}