#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"portuguese");

    int opcao;

    do
    {

        printf("OP��O  |    FUN��O            |\n");
        printf("  1    |  NOVO JOGO           |\n");
        printf("  2    |  CARREAGR JOGO       |\n");
        printf("  3    |  CONFIGURA��ES       |\n\n");

        printf("Ecolha a fun��o:");
        scanf("%d", &opcao);

        system("CLS || CLEAR");

        switch (opcao)
        {
        case 1:
            printf(" DIFICULDADE\n"  );
            printf("    F�CIL\n"     );
            printf("    M�DIO\n"     );
            printf("    DIF�CIL\n\n" );
            printf("Come�ar jogo"    );
            break;

        case 2:
            printf("Come�ar do ultimo ponto salvo\n");
            break;

        case 3:
            printf("GR�FICOS |  FPS   | IDIOMA    |\n");
            printf(" SUAVE   | NORMAL | PORTUGU�S |\n");
            printf(" PADR�O  | ALTO   | INGL�S    |\n");
            printf(" ULTRA   | ULTRA  | ESPANHOL  |\n");
            break;

        default:
            printf("\nOp��o inv�lida\nEscolha novamente\n\n");
            break;
        }
    } while (opcao < 1 || opcao > 3);
}