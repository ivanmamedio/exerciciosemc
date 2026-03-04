#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, palpite, tentativas = 0;

    // Gerando número aleatório 
    srand(time(NULL));
    secreto = rand() % 100 + 1; // Número entre 1 e 100

    printf("=== JOGO DE ADIVINHAÇÃO ===\n");
    printf("Tente adivinhar o número (1-100)\n");

    do {
        printf("Seu paplite: ");
        scanf("%d", &palpite);
        tentativas++;

        if(palpite > secreto) {
            printf("Muito alto! Tente novamente.\n");
        } else if(palpite < secreto) {
            printf("Muito baixo! Tente novamente.\n");
        } else {
            printf("PARABÉNS! Você acertou em %d tentativas!\n", tentativas);
        }
        
    } while(palpite != secreto);

    return 0;
}