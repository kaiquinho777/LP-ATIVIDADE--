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
        printf("| IDIOMA 1 | INGL�S  | \n");
        printf("| IDIOMA 2 | ESPANHOL| \n");
        printf("| IDIOMA 3 | FR�NCES | \n");

        printf("Escolha seu idioma: ");
        scanf("%d", &opcao);
     system ("CLS");
        switch (opcao)
        {
        case 1:
            printf("WELCOME!");
            break;
        case 2:
            printf("BIENVENIDA!");
            break;
        case 3:
            printf("ACCUELLIR!");
            break;
        default:
            printf("IDIOMA INV�LIDO!");
        }
    } while (opcao > 3 && opcao < 1);
}
