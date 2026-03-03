#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("%d é PAR\n", numero);
    } else {
        printf("%d é IMPAR\n", numero);
    }
    
    return 0;
}