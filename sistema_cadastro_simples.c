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
        scanf("%s", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    // Listagem 
}
}