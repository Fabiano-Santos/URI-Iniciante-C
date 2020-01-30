#include<stdio.h>

int main(){

  char nome[10];
  double total, vendas, salario, comissao;
  
  scanf("%s %lf %lf", &nome, &salario, &vendas);
   
  comissao = vendas*0.15;
  total  = (salario + comissao);
  
  printf("TOTAL = R$ %.2lf\n", total); 






  return 0;
}
