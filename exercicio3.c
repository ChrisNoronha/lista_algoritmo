#include <stdio.h>
#include <math.h>
#include <locale.h>
#define pi 3.14159

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  float raio;
  
  printf("Fale aí o raio da esfera em centímetros:\n");
  scanf("%f",&raio);

  printf("volume é %f cm³\n",4.0/3.0*pi*raio*raio*raio);
  return 0;
}