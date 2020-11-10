#include<stdio.h>

int main(){

  int a, b;

  scanf("%i%i", &a, &b);

  if(a>b && a%b ==0 || b>a && b%a ==0){  
    
   printf("Sao Multiplos\n");
  
  }else{

  printf("Nao Sao multiplos\n");
}

 return 0;
}
