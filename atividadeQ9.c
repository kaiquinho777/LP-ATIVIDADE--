#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main()
{
    setlocale  (LC_ALL, "portugese");
    int numero, a;

    printf("Digite um numero para saber se � primo ou n�o: ");
    scanf("%d", &numero);

    if (numero <= 1)
    {
        printf("N�o � primo");
    }
    else
    {
        for (a = 2; a < numero; a++)
        {
            if (numero % a == 0)
            {
                printf("N�o � primo");
            }
        }
    }
}