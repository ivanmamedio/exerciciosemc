#include <stdio.h>

// Declaração das funções
float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if(b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}

int main () {
    float num1, num2;
    int opcao;
    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    printf("\nEscolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Resultado: %.2f\n", somar(num1, num2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrair(num1, num2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicar(num1, num2));
            break;
        case 4:
            printf("Resultado: %.2f\n", dividir(num1, num2));
            break;
        default:
            printf("Opção Inválida!\n");
    }

    return 0;
}
