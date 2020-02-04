#include<stdio.h>

int main(){
   
 int N, horas=0, minutos=0, segundos=0;

 scanf("%d", &N);

 horas = N /3600;//Hora recebe N dividido 3600
 N = N %3600;//N recebe o resta do divisão de N por 3600
 minutos = N /60;//Minutos recebe N dividido 60
 segundos = N %60;//Segundos recebe o resto da divisão de N por 60

 printf("%d:%d:%d\n", horas, minutos, segundos);
  



  return 0;
}
