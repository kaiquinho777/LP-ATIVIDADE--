#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "portuguese");

    float primeiroNumero;
    float segundoNumero;
    char operacao;
    float resultado;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &primeiroNumero);

    system("cls || clear");

    printf("Digite o segundo n�mero: ");
    scanf("%f", &segundoNumero);

    fflush(stdin);
    system("cls || clear");

    printf("Digite + para somar \n");
    printf("Digite - para subtrair \n\n");

    printf("Escolha a opera��o desejada: ");
    scanf("%c", &operacao);

    system("cls || clear");

    switch (operacao)
    {
    case '+':
        resultado = primeiroNumero + segundoNumero;
        break;
    case '-':
        resultado = primeiroNumero - segundoNumero;
        break;
    default:
        printf("Op��o inv�lida!!! \n");
        break;
    }

    printf("Primeiro n�mero: %.1f \n\n", primeiroNumero);
    printf("Segundo n�mero: %.1f \n\n", segundoNumero);
    printf("Opera��o escolhida: %c \n\n", operacao);
    printf("Resultado: %.1f \n\n", resultado);
}