#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");
 
 int idade;

 printf ("Informe sua idade:");
 scanf ("%d", &idade);

if (idade >= 18)
{
printf ("ACESSO PERMITIDO!");
} 
else 
{
 printf ("ACESSO NEGADO!");
}
}