#include <stdio.h>
#include <stdbool.h>

// Função que verifica se um número é primo
bool eh_primo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <+ n; i += 2) {
        if (n % i == 0) return false;   
    }
    return true;
}

int main() {
    printf("Números primos entre 1 e 100:\n");

    for (int i = 2; i <= 100; i++) {
        if (e_primo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}