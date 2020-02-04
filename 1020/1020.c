#include<stdio.h>

int main(){

  int aux, idade, anos, meses, dias;

  scanf("%d", &idade);
 
  anos = idade /365;//anos recebe idade dividido por 365
  aux = idade %365;//aux recebe o resto da divisão de idade por 365 
  meses = aux/30;//meses recebe aux / 30
  aux = aux %30;//aux recebe resto da divisão de aux por 30
  dias = aux;//dias recebe auxiliar

  printf("%d ano(s)\n", anos);
  printf("%d mes(es)\n", meses);
  printf("%d dia(s)\n", dias);
   

  return 0;
}
