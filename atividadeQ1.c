#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () 
{
 setlocale (LC_ALL, "portuguese");

 int opcao;

 printf("Informe a temperatura: ");
 scanf ("%d", &opcao);

if (opcao > 25)
{
 printf ("O clima est� ensolarado!");
}
if (opcao <= 25 && opcao > 14)
{
 printf ("O clima est� nublado!");
}
if (opcao < 15)
{
 printf ("O clima est� chuvoso!");
} 
}
