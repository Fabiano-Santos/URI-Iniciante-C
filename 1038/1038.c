/*
   
Entrada:
   O arquivo de entrada contém dois valores inteiros correspondentes ao código 
   e à quantidade de um item conforme tabela acima.

Saída:
   O arquivo de saída deve conter a mensagem "Total: R$ " 
   seguido pelo valor a ser pago, com 2 casas após o ponto decimal.


BY: Fabiano Santos
25/08/2020
*/
#include<stdio.h>

int main(){


    int codigo, quantidade;

    printf("_______________________________________\n");
    printf("CODIGO \tESPECIFICAÇÂO \t\tPREÇO\n");
    printf("_______________________________________\n");
    printf("1 \tCachorro Quente \tR$4.00\n");
    printf("2 \tX-Salada \t\tR$4.50\n");
    printf("3 \tX-Bacon \t\tR$5.00\n");
    printf("4 \tTorrada simples \tR$2.00\n");
    printf("5 \tRefrigerante \t\tR$1.50\n");
    printf("_______________________________________\n");

    
    scanf("%d %d",&codigo,&quantidade);

    if (codigo==1)

      printf("Total: R$ %.2f\n",4.00*quantidade);

    else

    if (codigo==2)

      printf("Total: R$ %.2f\n",4.50*quantidade);

    else

    if (codigo==3)

      printf("Total: R$ %.2f\n",5.00*quantidade);

    else

    if (codigo==4)

      printf("Total: R$ %.2f\n",2.00*quantidade);

     
    else

    if (codigo==5)

      printf("Total: R$ %.2f\n",1.50*quantidade);

    
   return 0;
}
