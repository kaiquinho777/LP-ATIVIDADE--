#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    float valorDaCompra;
    int opcao;
    float precoFinal;

    do
    {
    system ("CLS");
        printf("DIA 1|   DOMINGO    |FIM DE SEMANA| \n");
        printf("DIA 2| SEGUNDA-FEIRA|DIA ÚTIL| \n");
        printf("DIA 3| TERÇA-FEIRA  |DIA ÚTIL| \n");
        printf("DIA 4| QUARTA-FEIRA |DIA ÚTIL| \n");
        printf("DIA 5| QUINTA-FEIRA |DIA ÚTIL| \n");
        printf("DIA 6| SEXTA-FEIRA  |DIA ÚTIL| \n");
        printf("DIA 7|   SÁBADO     |FIM DE SEMANA| \n");

        printf("Informe o dia da semana: ");
        scanf("%d", &opcao);

system ("CLS");
        switch (opcao)
        {
         case 1:
            printf("Informe o valor da compra: ");
            scanf("%f", &valorDaCompra);
            if (valorDaCompra >= 100)
            {
                precoFinal = valorDaCompra * 0.85;
            }
            break;
         case 2:
            printf("Informe o valor da compra: ");
            scanf("%f", &valorDaCompra);
            if (valorDaCompra >= 100)
            {
                precoFinal = valorDaCompra * 0.90;
            }
            break;
         case 3:
            printf("Informe o valor da compra: ");
            scanf("%f", &valorDaCompra);
            if (valorDaCompra >= 100)
            {
                precoFinal = valorDaCompra * 0.90;
            }
            break;
         case 4:
            printf("Informe o valor da compra: ");
            scanf("%f", &valorDaCompra);
            if (valorDaCompra >= 100)
            {
                precoFinal = valorDaCompra * 0.90;
            }
            break;
         case 5:
            printf("Informe o valor da compra: ");
            scanf("%f", &valorDaCompra);
            if (valorDaCompra >= 100)
            {
                precoFinal = valorDaCompra * 0.90;
            }
            break;
         case 6:
            printf("Informe o valor da compra: ");
            scanf("%f", &valorDaCompra);
            if (valorDaCompra >= 100)
            {
                precoFinal = valorDaCompra * 0.90;
            }
            break;
         case 7:
            printf("Informe o valor da compra: ");
            scanf("%f", &valorDaCompra);
            if (valorDaCompra >= 100)
            {
                precoFinal = valorDaCompra * 0.85;
            }
            break;
         default:
            printf("Código iválido.");
        }

        system("CLS");

        printf("Valor do produto: %.2f\n", valorDaCompra);
        printf("Valor do produto com desconto: %.2f\n", precoFinal);
    } while (opcao < 1 || opcao > 7);

}
