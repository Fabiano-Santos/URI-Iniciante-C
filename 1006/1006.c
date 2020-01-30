#include<stdio.h>

int main(){
 double v1, v2, v3, MEDIA;

  scanf("%lf%lf%lf", &v1, &v2,&v3);//%lf é a forma de armazenar ponto flutuante em variaveis double
  
  MEDIA = (v1/10*2) + (v2/10*3) + (v3/10*5);//v1 tem peso 2; v2 tem peso 3; v3 tem peso 5

  printf("MEDIA = %.1lf\n", MEDIA); 




  return 0;

}
