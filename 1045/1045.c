#include<stdio.h>


int main(){

  float a, b, c;
  float n3, n2, n1;//n3 é o maior número, n2 é o numero meio e n1 é o menor número.
  scanf("%f%f%f", &a, &b, &c);

  //Ordena os números em ordem decrescente
  //Lado a representa o meior dos 3 lados
  if(a >= b && a >= c){
     n3 = a;
     n2 = b;
     n1 = c;

  }
 
  if(b >= a && b >= c){
  
     n3 = b;
     n2 = a;
     n1 = c;

  }else{
  
     n3 = c;
     n2 = a;
     n1 = b;
  
  }
  if(n3 >= n2 + n1){
  
    printf("NAO FORMA TRIANGULO\n");
  
  
  }else{
  
  if(n3*n3 == n2*n2 + n1*n1){
   
     printf("TRIANGULO RETANGULO\n");
   
  }
  if(n3*n3 > n2*n2 + n1*n1){
  
    printf("TRIANGULO OBTUSANGULO\n");
  
  }
  if(n3*n3 < n2*n2 + n1*n1){
  
    printf("TRIANGULO ACUTANGULO\n");
  
  }
  if(n3 == n2 && n3 == n1){
  
    printf("TRIANGULO EQUILATERO\n");
  
  }
  if(n3 == n2 && n3 != n1 && n1 != n2){
  
   printf("TRIANGULO ISOSCELES\n");
  
  }
  if(n2 == n1 && n3 != n2 && n3 != n1){
  
   printf("TRIANGULO ISOSCELES\n");
  
  }
  if(n3 == n1 && n1 != n2 && n3 != n2){
  
   printf("TRIANGULO ISOSCELES\n");
  
  }
  
  
  
  } 

     
  return 0;
}
