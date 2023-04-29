#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  int x;

  printf("digite seu número\n");
  scanf("%d",&x);
  printf("Números divisíveis\n");
  for(int i=1;i<=x;i++){

    if(x%i==0){
      
      printf("%d\n",i);
      
    }
    
  }
  
  return 0;
}