#include<stdio.h>

int main(){

 float A, B, media;

 scanf("%f %f", &A, &B);

 media = ((A*3.5)+(B*7.5))/(3.5+7.5);

 printf("MEDIA = %.5f\n", media); //%.5f exibe apenas 5 casas apos o ponto exemplo 6.43182 



  return 0;
}
