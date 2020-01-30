#include<stdio.h>

int main(){

  int numFunc, horasTrab;
  float vlHora, salario;

  scanf("%d %d %f", &numFunc, &horasTrab, &vlHora);

  salario = (horasTrab * vlHora);

  printf("NUMBER = %d\n", numFunc);
  printf("SALARY = U$ %.2f\n", salario);



  return 0;
}
