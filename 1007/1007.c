#include<stdio.h>

int main(){

 int A, B, C, D, DIF;

  scanf("%d%d%d%d", &A, &B, &C, &D);

  DIF = (A*B - C*D);//Calcula a diferença do produto entre A e B pelo produto de C e D segundo a formula DIFERENCA = (A*B - C*D)
 
  printf("DIFERENCA = %d\n", DIF); 
 


  return 0;
}
