#include<stdio.h>
#include<conio.h>

float Valor1 = 0,
      Valor2 = 0;
     
main()
{
    printf("Entre com o Valor 1: \n");
    scanf("%f",&Valor1);
    printf("Entre com o Valor 2: \n");
    scanf("%f",&Valor2);

    printf("SOMA = %.2f\n",Valor1 + Valor2);
    getch();
    printf("SUBTRACAO = %.2f\n",Valor1 - Valor2);
    getch();
    printf("MULTIPLICACAO = %.2f\n",Valor1 * Valor2);
    getch();
    printf("DIVISAO = %.2f\n",Valor1 / Valor2);
    getch();
}