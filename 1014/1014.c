#include<stdio.h>

int main(){

  int X;           // X = Distancia percorida em kms
  float Y, C;      //  Y = Total de combustivel gasto em litros
                   // C = Consumo km/l 
                         
  scanf("%d %f", &X, &Y);
 
  C = X / Y;

  printf("%.3f km/l\n", C);
   

  return 0;
}
