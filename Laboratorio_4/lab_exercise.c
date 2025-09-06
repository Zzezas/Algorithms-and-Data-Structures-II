#include <stdio.h>
#include "lab_exercise.h"
#include <math.h>

void Exercicio(int questao) {
    switch (questao) {
        case 2: {
            int num_ex2;
            printf("Digite um numero para verificar se e positivo ou negativo: ");
            scanf("%d", &num_ex2);
            int resultado = verifica_positivo_negativo(num_ex2);
            if (resultado == 1) {
                printf("O numero e positivo.\n");
            } else {
                printf("O numero e negativo.\n");
            }
            break;
        }

        case 3: {
            int a_ex3, b_ex3;
            printf("Digite dois numeros para calcular o MDC: ");
            scanf("%d %d", &a_ex3, &b_ex3);
            int mdc = calcula_mdc(a_ex3, b_ex3); // Supondo que você já implementou essa função
            printf("O MDC entre %d e %d eh %d.\n", a_ex3, b_ex3, mdc);
            break;
        }

        case 4: {
            int num_primo;
            printf("Digite um numero positivo para verificar se e primo: ");
            scanf("%d", &num_primo);

            // Tratamento de erro para numeros nao positivos
            if (num_primo <= 0) {
                printf("Erro: O numero deve ser positivo.\n");
            } else {
                int resultado_primo = eh_primo(num_primo);
                if (resultado_primo == 1) {
                    printf("O numero %d e primo.\n", num_primo);
                } else {
                    printf("O numero %d nao e primo.\n", num_primo);
                }
            }
            break;
        }

        case 5: {
            int a, b, c;
            printf("Digite os tres lados do triangulo: ");
            scanf("%d %d %d", &a, &b, &c);
            eh_triangulo(a, b, c);
            break;
        }

        case 6: {
            int op, num1, num2;
            printf("\n--- Calculadora ---\n");
            printf("1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n5- Resto\n6- Potencia\n");
            printf("Escolha a operacao: ");
            scanf("%d", &op);
            printf("Digite dois numeros: ");
            scanf("%d %d", &num1, &num2);
            switch (op) {
                case 1: printf("Resultado: %d\n", soma(num1, num2)); break;
                case 2: printf("Resultado: %d\n", subtracao(num1, num2)); break;
                case 3: printf("Resultado: %d\n", multiplicacao(num1, num2)); break;
                case 4: printf("Resultado: %.2f\n", divisao(num1, num2)); break;
                case 5: printf("Resultado: %d\n", resto_divisao(num1, num2)); break;
                case 6: printf("Resultado: %lld\n", potencia(num1, num2)); break;
                default: printf("Opcao invalida.\n");
            }
            break;
        }

        case 7: {
            int op;
            float valor;
            printf("\n--- Conta Bancaria ---\n");
            printf("1- Consultar Saldo\n2- Deposito\n3- Saque\n");
            printf("Escolha a operacao: ");
            scanf("%d", &op);
            switch (op) {
                case 1: printf("Saldo atual: R$%.2f\n", consulta_saldo()); break;
                case 2: printf("Digite o valor para deposito: "); scanf("%f", &valor); deposito(valor); break;
                case 3: printf("Digite o valor para saque: "); scanf("%f", &valor); saque(valor); break;
                default: printf("Opcao invalida.\n");
            }
            break;
        }

        case 8: {
            int horas_uso;
            float valor_a_pagar, total_arrecadado = 0.0;
            printf("\n--- Locadora de Bicicletas ---\n");
            printf("Cliente | Horas usadas | Valor a pagar\n");
            printf("-----------------------------------\n");
            for (int i = 1; i <= 3; i++) {
                printf("Cliente %d: Digite o tempo de uso (em horas): ", i);
                scanf("%d", &horas_uso);
                valor_a_pagar = calculaTaxa(horas_uso);
                total_arrecadado += valor_a_pagar;
                printf("%7d | %12d | R$%.2f\n", i, horas_uso, valor_a_pagar);
            }
            printf("-----------------------------------\n");
            printf("Total arrecadado: R$%.2f\n", total_arrecadado);
            break;
        }

        default:
            printf("Opcao de exercicio nao encontrada.\n");
    }
}

float saldo = 0.0;

int verifica_positivo_negativo(int n) {
    if (n >= 0) {
        return 1;
    } else {
        return 0;
    }
}

int calcula_mdc(int a, int b) {
    int temp; // Variável temporária para armazenar o resto
    while (b != 0) {
        temp = a % b;
        // 'a' recebe o valor de 'b'
        a = b;
        // 'b' recebe o valor do resto (temp)
        b = temp;
    }
    return a;
}

int eh_primo(int num){
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}
int eh_triangulo(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Triangulo equilatero.\n");
            return 3;
        } else if (a == b || a == c || b == c) {
            printf("Triangulo isosceles.\n");
            return 2;
        } else {
            printf("Triangulo escaleno.\n");
            return 1;
        }
    } else {
        printf("Os valores nao formam um triangulo.\n");
        return 0;
    }
}

// Implementacao do Exercicio 6 (Calculadora)
int soma(int a, int b) { return a + b; }
int subtracao(int a, int b) { return a - b; }
int multiplicacao(int a, int b) { return a * b; }
float divisao(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
}
int resto_divisao(int a, int b) { return a % b; }
long long int potencia(int base, int expoente) {
    long long int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

// Implementacao do Exercicio 7 (Conta Bancaria)
void deposito(float valor) {
    if (valor > 0) {
        saldo += valor;
        printf("Deposito de R$%.2f realizado com sucesso.\n", valor);
    } else {
        printf("Valor de deposito invalido.\n");
    }
}
void saque(float valor) {
    if (valor > 0 && valor <= saldo) {
        saldo -= valor;
        printf("Saque de R$%.2f realizado com sucesso.\n", valor);
    } else if (valor > saldo) {
        printf("Saldo insuficiente.\n");
    } else {
        printf("Valor de saque invalido.\n");
    }
}
float consulta_saldo() { return saldo; }

// Implementacao do Exercicio 8 (Locadora)
float calculaTaxa(int horas) {
    float valor = 0.0;
    if (horas <= 2) {
        valor = 5.00; // Taxa minima de R$5,00 para ate duas horas
    } else {
        // Adicional de R$2,00 por hora ou fracao excedente
        float horas_adicionais = horas - 2;
        valor = 5.00 + ceil(horas_adicionais) * 2.00;
    }
    // Valor maximo a ser pago em um mesmo dia e de R$30,00
    if (valor > 30.00) {
        return 30.00;
    }
    return valor;
}

