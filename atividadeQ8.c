#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

int a;
int numero;
printf ("Informe um número: ");
scanf ("%d", &numero);
system ("CLS");
for (a= numero; a >= 1; a--)
{
 printf ("%d\n", a);
}
}