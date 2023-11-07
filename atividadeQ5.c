#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

int opcao;
do
{
 printf ("| 1 | CAMISETA|\n");
 printf ("| 2 |  CALÇA  |\n");
 printf ("| 3 | SAPATO  |\n");
 
  printf ("Escolha uma peça de roupa: ");
  scanf ("%d", &opcao);
system ("CLS");

  switch (opcao)
  {
  case 1:
    printf ("CAMISA LACOSTE \n");
    printf ("VALOR: R$1050,00");
    break;
   case 2:
    printf ("CALÇA HIGH \n");
    printf ("VALOR: R$529,90");
    break;
   case 3:
    printf ("SAPATO VANS \n");
    printf ("VALOR: R$490,90");
    break;
    default:
  printf ("NÃO TEMOS ESSE PRODUTO!");
  }
} while (opcao > 3 && opcao < 1);
}


