#include<stdio.h>

int main(){

  int n1, n2, n3;

  scanf("%i%i%i", &n1, &n2, &n3);

  if(n1 < n2 && n1 < n3){
    if(n2<n3)
    printf("%i\n%i\n%i\n", n1, n2, n3);
    else
    printf("%i\n%i\n%i\n", n1, n3, n2);
  }
  if(n2 < n1 && n2< n3){
    if(n1 < n3) 
    printf("%i\n%i\n%i\n", n2, n1, n3);
    else
    printf("%i\n%i\n%i\n", n2, n3, n1);
  }
  if(n3 < n1 && n3 < n2){
    if(n1 < n2)
    printf("%i\n%i\n%i\n", n3, n1 ,n2);
    else
    printf("%i\n%i\n%i\n", n3, n2, n1);
  
  }

  printf("\n%i\n%i\n%i\n", n1, n2, n3);

  return 0;
}


/*
 123
 132
 213
 231
 312
 321

 * */
