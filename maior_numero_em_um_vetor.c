#include <stdio.h>

int main() {
    int numeros[6];
    int maior;

    // Lendo 6 números
    for(int i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i+1);
    scanf("%d", &numeros[i]);
    }

    // Encontrando o maior
    maior = numeros[0];
    for(int i = 1; i < 5; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior número e: %d\n", maior);

    return 0;
}


