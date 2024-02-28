#include<stdio.h>
#include<conio.h>

float Dist= 0,
      CombGasolina = 0,
      CombEtanol = 0;
     
main()
{
    printf("Entre com a distancia a ser percorrida: \n");
    scanf("%f",&Dist);
    
    CombEtanol = Dist / 9.0;
    CombGasolina = Dist / 14.0;

    printf("Abastecer com: \nGasolina = %.2f(L)\nOU\nEtanol = %.2f(L)",CombGasolina,CombEtanol);
    getch();
}