#include<stdio.h>

int main(){

   /* double numero;

    scanf("%lf", &numero);

    if(numero >0.00 && numero <=25.00){

        printf("Intervalo [0,25]\n");

    }else if(numero >25.00 && numero <=50.00){

        printf("Intervalo (25,50]\n");

    }else if(numero >50.00 && numero <=75.00){

        printf("Intervalo (50,75],\n");

    }else if(numero >75.00 && numero <=100){

        printf("Intervalo (75,100]\n");

    }else{
        if(numero <0 || numero >100){
        printf("Fora de intervalo\n");
        }
    }



*/
// Outra Solulção
   double A;

scanf("%lf",&A);

if(A<0 || A>100.0)

printf("Fora de intervalo\n");

else if(A<=25.0)

printf("Intervalo [0,25]\n");

else if(A<=50.0)

printf("Intervalo (25,50]\n");

else if(A<=75.0)

printf("Intervalo (50,75]");

else if(A<=100.0)

printf("Intervalo (75,100]\n");



  return 0;
}
