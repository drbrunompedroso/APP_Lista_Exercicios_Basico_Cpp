#include<stdio.h>
#include<conio.h>
#include<math.h>

float VolumeEsf = 0,
      RaioEsf = 0,
      AreaEsf = 0;


main()
{
    printf("Entre com o valor do Raio \n");
    scanf("%f",&RaioEsf);

    VolumeEsf = 1.33 * M_PI * pow(RaioEsf,3);
    AreaEsf = 4 * M_PI * pow(RaioEsf,2);

    printf("Volume = %.2f \nArea = %.2f",VolumeEsf,AreaEsf);
    getch();
}
