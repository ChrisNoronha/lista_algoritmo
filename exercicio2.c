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

  printf("Digite a latitude do ponto 1:\n");
  scanf("%f",&ponto_x2);
  printf("Digite a altitude do ponto 1:\n");
  scanf("%f",&ponto_y2);

  distancia= ((ponto_x2-ponto_x1)*(ponto_x2-ponto_x1))+((ponto_y2-ponto_y1)*(ponto_y2-ponto_y1));

  distancia=sqrt(distancia);

  printf("\ndistancia é %.2f\n",distancia);
  
  return 0;
}