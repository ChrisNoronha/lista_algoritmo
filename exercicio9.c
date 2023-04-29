#include <stdio.h>

int main() {
    int opcao, quantidade, continuar;
    float valor_total = 0;

    do {
        // Menu de frutas
        printf("==== MENU DE FRUTAS ====\n");
        printf("1 - ABACAXI (R$ 5,00 a unidade)\n");
        printf("2 - MAÇA (R$ 1,00 a unidade)\n");
        printf("3 - PERA (R$ 4,00 a unidade)\n");
        printf("========================\n");
        printf("Digite o número da fruta desejada: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("Você escolheu ABACAXI. Quantos deseja comprar? ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 5;
                break;
            case 2:
                printf("Você escolheu MAÇA. Quantas deseja comprar? ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 1;
                break;
            case 3:
                printf("Você escolheu PERA. Quantas deseja comprar? ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 4;
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

        printf("Deseja continuar comprando? (1 - SIM / 0 - NÃO) ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("Valor total da compra: R$ %.2f\n", valor_total);

    return 0;
}