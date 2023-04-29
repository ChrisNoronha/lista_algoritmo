#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  int posicao=0;
  int numero=1;
  int numeroanterior=0;
  printf("digite o numero da posição\n");
  scanf("%d",&posicao);

  if(posicao>2){
  for(int i=2;i<posicao;i++){
    numero=numeroanterior+numero;
    numeroanterior=numero-numeroanterior;
  }
  printf("O seu número é: %d\n",numero);
  }
  else{
    switch(posicao){
  
      case 1:
      printf("\nO seu número é 0");

      case 2:
      printf("\nO seu número é 1");
    }
  }



  return 0;
}