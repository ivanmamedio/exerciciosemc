#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char sobrenome[50];
    char nomeCompleto[100];

    printf("DIgite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    
    // Concatenando strings
    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("Nome Completo: %s\n", nomeCompleto);
    printf("Tamanho do nome: %lu caracteres\n", strlen(nomeCompleto));

    return 0;
}