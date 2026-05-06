#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535

/*
    printf("------------Resultados------------\n");
    printf("Valor de N1: %d\n", n1);
    printf("Valor de N2: %d\n", n2);
    printf("Adicao: %d + %d = %d\n", n1, n2, n1+n2);
    printf("Subtracao: %d - %d = %d\n", n1, n2, (n1-n2));
    printf("Multiplicacao: %d * %d = %d\n", n1, n2, n1*n2);
    printf("Divisao (float): %d / %d = %.1f\n", n1, n2, 1.0 * n1/n2);
    printf("Divisao div: %d / %d = %d\n", n1, n2, n1/n2);
    printf("Divisao mod: %d %% %d = %d\n", n1, n2, n1%n2);
    printf("Potenciacao: %d ^ %d = %.1f\n", n1, n2, pow((float)n1, n2));
    printf("Radiciacao: %d ^ 1.0/%d = %f", n1, n2, pow((float)n1, 1.0/n2));
*/

int main()
{
    float raio, area, volume = 0;

    printf("Por favor digite o valor de R da esfera: ");
    scanf("%f",&raio);

    area = 4*PI*(pow(raio, 2));
    volume = (4.0/3)*PI*(pow(raio, 3));

    printf("O valor da Area da esfera e: %.2f m2 \n", area);
    printf("O valor do Volume e: %.2f L\n", volume);
    printf("O valor do Volume em metros cubicos e: %.2f m3 \n", volume*1000);


    return 0;
}
