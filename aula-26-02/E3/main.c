#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2, lado3;

    printf("-----DESCOBRINDO TRIANGULO-----");
    printf("\nDigite o lado 1, 2 e 3: ");
    scanf("%f%f%f", &lado1, &lado2, &lado3);

    if(lado1 < 0 || lado2 < 0 || lado3 < 0){
        printf("\n[ERROR]\n[ERROR]\n[ERROR]\n[ERROR]\n[ERROR]\n[ERROR]\nDIGITE VALORES VALIDOS");
    } else{
        if((lado1 + lado2) >= lado3 || (lado1 + lado3) >= lado2 || (lado2 + lado3) >= lado1){
            if(lado1 != lado2 && lado2 != lado3)
                printf("Seu triangulo e: -----ESCALENO-----");
            else if (lado1 == lado2 && lado2 == lado3)
                printf("Seu triangulo e: -----EQUILATERO-----");
            else
                printf("Seu triangulo e: -----ISOCELES-----");
        } else
            printf("[ERRO] SEU TRIANGULO NAO EXISTE");
    }

    return 0;
}
