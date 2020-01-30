#include<stdio.h>

int main(){

  int Cod_peca1, qtd_peca1;
  int Cod_peca2, qtd_peca2;
  float vlrUnit_peca1, vlrUnit_peca2, vlr_Pagar;

  scanf("%d %d %f", &Cod_peca1, &qtd_peca1, &vlrUnit_peca1);
  scanf("%d %d %f", &Cod_peca2, &qtd_peca2, &vlrUnit_peca2);

  vlr_Pagar = (qtd_peca1 * vlrUnit_peca1) + (qtd_peca2 * vlrUnit_peca2);

  printf("VALOR A PAGAR: R$ %.2f\n", vlr_Pagar);



  return 0;
}
