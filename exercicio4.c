#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  float ponto_x1,ponto_y1;
  float ponto_x2, ponto_y2;
  float distancia;
  printf("Digite a latitude do ponto 1:\n");
  scanf("%f",&ponto_x1);
  printf("Digite a altitude do ponto 1:\n");
  scanf("%f",&ponto_y1);

  if(ponto_x1>0&&ponto_y1>0){

     printf("\nestá em Q1");  
  }

  if(ponto_x1<0&&ponto_y1>0){

     printf("\nestá em Q2");  
  }

  if(ponto_x2<0&&ponto_y1<0){

     printf("\nestá em Q3");  
  }

  if(ponto_x1>0&&ponto_y1<0){

     printf("\nestá em Q4");  
  }
  
 
  
  return 0;
}