#ifndef LAB_EXERCISES_H
#define LAB_EXERCISES_H

void Exercicio(int questao);
int verifica_positivo_negativo(int n);
int calcula_mdc(int a, int b);
int eh_primo(int num);
int eh_triangulo(int a, int b, int c);

// Prototipos do Exercicio 6 (Calculadora)
int soma(int a, int b);
int subtracao(int a, int b);
int multiplicacao(int a, int b);
float divisao(int a, int b);
int resto_divisao(int a, int b);
long long int potencia(int base, int expoente);

// Prototipos do Exercicio 7 (Conta Bancaria)
void deposito(float valor);
void saque(float valor);
float consulta_saldo();

// Prototipos do Exercicio 8 (Locadora)
float calculaTaxa(int horas);


#endif