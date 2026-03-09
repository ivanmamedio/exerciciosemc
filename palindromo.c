#include <stdio.h>
#include <string.h>
#include <ctype.h> // para tolower()

int main () {
    char palavra[100];
    int i, j, palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int len = strlen(palavra);

    // Compara os caracteres ignorando diferenças de maiúsculas e minúsculas
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (tolower(palavra[i]) != tolower(palavra[j])) {
            palindromo = 0;
            break;
        }
    }
    
    if (palindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }

    return 0;
}