#include <stdio.h>

int main() {
    int num, maior, menor;


    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    maior = menor = num;

    while (num >= 0) {

        if (num > maior) {
            maior = num;
        }


        if (num < menor) {
            menor = num;
        }

        printf("Digite um número inteiro: ");
        scanf("%d", &num);
    }

    printf("Maior número lido: %d\n", maior);
    printf("Menor número lido: %d\n", menor);

    return 0;
}