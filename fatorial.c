#include <stdio.h>

// Função para calcular o fatorial de forma interativa
unsigned long long fatorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);

    if (num ,0) {
        printf("Fatorial não definido para números negativos.\n");
    
    } else {
        printf("%d! = %llu\n", num, fatorial(num));
    }
    return 0;
}