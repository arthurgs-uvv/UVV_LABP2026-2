#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265359

/*
Escreva um algoritmo que leia vários números e exiba a média dos números lidos que estão no intervalo
fechado: [10 * π3, 100 * π]. Pare o algoritmo quando for digitado um número fora do intervalo.
*/

int main()
{
    float media = 0, num = 0, cont = 1;

    printf("-----ALGORITMO DE INTERVALO-----\n");

    while(1){
        printf("Digite o valor %d: ", cont); scanf("%f", &num);
        if(num > (10*pow(PI, 3)))
    }

    return 0;
}
