#include <stdio.h>

int main() {
    float saldo = 1000.0; // saldo inicial
    int opcao;
    float valor;

    do{
        printf("\n=== Caixa Eletrônico ===\n");
        printf("1 - Ver saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Saldo atual: r$ %2.f\n"), saldo;
                break;
            case 2:
                printf("Valor do depósito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo += valor;
                    printf("Depósito realizado. Novo saldo: R$ %2.f\n", saldo);
                } else {
                    printf("Valor inválido.\n");
                }
                break;
            case 3:
                printf("Valor do saque: R$ ");
                scanf("%f", &valor);
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado. Novo saldo: R$ %.2f\n", saldo);
                } else if (valor > valor) {
                    printf("Saldo insuficiente.\n");
                } else {
                    printf("Valor inválido.\n");
                }
                break;
            case 4:
                printf("Encerrando o sistema. Até logo!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");

        }
    }   while (opcao != 4);

    return 0;
}