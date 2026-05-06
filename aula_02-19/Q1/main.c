#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float posPx, posPy, posQx, posQy, dist;

    printf("-----------DISTANCIA ENTRE PONTOS------------\n");
    printf("Por favor, digite o valor x e y da primeira posicao: \n");
    scanf("%f%f", &posPx, &posPy);
    printf("Agora, digite o valor x e y da segunda posicao: \n");
    scanf("%f%f", &posQx, &posQy);

    //Calculando
    dist = pow(pow(posQx - posPx, 2) + pow(posQy - posPy, 2), 1.0/2);

    printf("\nDISTANCIA ENTRE PONTOS P(X1, Y1) e Q(X2, Y2):\nDados de entrada");
    printf("\nCoordenada X1 - PONTO P: %.1f\nCoordenada Y1 - PONTO P: %.1f", posPx, posPy);
    printf("\nCoordenada X2 - PONTO Q: %.1f\nCoordenada Y2 - PONTO Q: %.1f", posQx, posQy);
    printf("\nDISTANCIA ENTRE PONTOS P(%.1f, %.1f) e Q(%.1f, %.1f): %.1f", posPx, posPy, posQx, posQy, dist);

    return 0;
}
