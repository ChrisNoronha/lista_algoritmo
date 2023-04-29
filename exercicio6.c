#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  int soma=0;
  printf("soma dos Números divisíveis abaixo de 1000\n");
  for(int i=1;i<1000;i++){

    if(i%3==0||i%5==0){
      printf("\n%d",i);
      soma+=i;
      
    }
    
  }
  printf("a soma é %d",soma);
  return 0;
}