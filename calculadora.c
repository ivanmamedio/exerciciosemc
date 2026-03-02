#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeirta nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Média: %2.f\n", media);

    if(media >=7) {
        printf("Aprovado!\n");
     } else if(media >= 5) {
        printf("Recuperação!\n");
     } else {
        printf("Reprovado!\n");
     }

    return 0;
}