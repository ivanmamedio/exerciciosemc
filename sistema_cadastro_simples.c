#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[3];

    // Cadastro
    for(int i = 0; i < 3; i++) {
        printf("\n--- Cadastro Aluno %d ---\n", i+1);

        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);

        // Remove o newline do final (se existir)
        size_t len = strlen(alunos[i].nome);
        if (len > 0 && alunos[i].nome[len-1] == '\n') {
            alunos[i].nome[len-1] = '\0';
        }

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        while (getchar() != '\n');  // limpa o buffer

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        while (getchar() != '\n');  // limpa para a próxima iteração
    }

    // Listagem 
    printf("\n=== LISTA DE ALUNOS ===\n");
    for(int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i+1);
        printf("  Nome: %s\n", alunos[i].nome);
        printf("  Idade: %d\n", alunos[i].idade);
        printf("  Nota: %.2f\n", alunos[i].nota);
        printf("  Status: %s\n", alunos[i].nota >= 7 ? "Aprovado" : "Reprovado");
    }

    return 0;
}