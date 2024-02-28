#include<stdio.h>
#include<conio.h>

float ConvReal = 0,
      ValorDolar = 0;

main()
{
    printf("Entre com o valor em Dolar (US$):\n");
    scanf("%f",&ValorDolar);

    ConvReal = ValorDolar * 4.98;

    printf("Resultado da conversao: R$ %.2f",ConvReal);
    getch();
}
