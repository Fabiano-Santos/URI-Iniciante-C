#include<stdio.h>

int main(){
  
  const double pi = 3.14159;
  double A, B, C;
  double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

  scanf("%lf %lf %lf", &A, &B, &C);

  TRIANGULO = (A * C) / 2;//Area = Base * Altura / 2
  CIRCULO = (C * C) * pi;//Area = pi * raio * raio
  TRAPEZIO = ((A + B) * C) / 2;//Area = Base maior + Base menor * Altura / 2
  QUADRADO = B * B;//Area = Base * base
  RETANGULO = A * B;//Area = Base * Altura

  printf("TRIANGULO: %.3lf\n", TRIANGULO);
  printf("CIRCULO: %.3lf\n", CIRCULO);
  printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
  printf("QUADRADO: %.3lf\n", QUADRADO);
  printf("RETANGULO: %.3lf\n", RETANGULO);  


  return 0;
}
