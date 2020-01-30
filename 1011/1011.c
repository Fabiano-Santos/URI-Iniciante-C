#include<stdio.h>

int main(){

  double pi = 3.14159;
  double R, VOLUME;

  scanf("%lf", &R);

  VOLUME = (4/3.0) * pi * (R * R * R);

  printf("VOLUME = %.3lf\n", VOLUME);



  return 0;
}
