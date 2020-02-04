#include<stdio.h>

int main(){

  int temp_horas, vel_media;
  float qtd_litros ;
  
  scanf("%d %d", &temp_horas, &vel_media);  
   
  qtd_litros = temp_horas * vel_media / 12.0;

  printf("%.3f\n", qtd_litros);


  return 0;
}
