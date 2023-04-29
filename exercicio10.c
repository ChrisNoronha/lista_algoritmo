#include <stdio.h>

int main() {
    int numeros, i, soma = 0;
    float media;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros);
        soma += numeros;
    }

    media = soma / 10.0;

    printf("A média dos números digitados é: %.2f\n", media);

    return 0;
}