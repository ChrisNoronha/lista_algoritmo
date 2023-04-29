#include <stdio.h>

int main() {
    int valor_A, valor_B, valor_C, valor_D, diferenca;
    
    printf("Digite o valor de A: ");
    scanf("%d", &valor_A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &valor_B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &valor_C);
    
    printf("Digite o valor de D: ");
    scanf("%d", &valor_D);
    
    diferenca = valor_A*valor_B - valor_C*valor_D;
    
    printf("DIFERENCA = (%d * %d - %d * %d)\n", valor_A, valor_B, valor_C, valor_D);
    printf("DIFERENCA = (%d)", diferenca);
    
    return 0;
}