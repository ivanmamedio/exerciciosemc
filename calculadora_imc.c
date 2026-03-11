#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Calculadora de IMC\n");
    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);
    printf("Classificação: ");

    if (imc < 18.5)
        printf("Abaixo do peso\n");
    else if (imc < 25)
        printf("Peso normal\n");
    else if (imc < 30)
        printf("Sobrepeso\n");
    else if (imc < 35)
        printf("Obesidade grau I\n");
    else if (imc < 40)
        printf("Obesidade grau II\n");
    else
        printf("Obesidade grau III (mórbida)\n");

    return 0;
}