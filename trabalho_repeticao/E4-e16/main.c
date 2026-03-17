#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QUANTMAX 6

/*
16) Escreva um algoritmo que leia 300 números positivos e exiba o menor e o maior: par e ímpar.
*/


int main()
{
    int num = 0, cont = 1;
    float numParMenor = INFINITY, numParMaior = 0, numImparMenor = INFINITY, numImparMaior = 1;

    printf("-----LENDO 300 NUMEROS-----\n");
    while(cont <= QUANTMAX){
        printf("Digite o numero %d: ", cont); scanf("%d", &num);
        if(num < 0){
            while(num < 0){
                printf("\nSeu numero e negativo, digite um numero positivo por favor.\nR: "); scanf("%d", &num);
            }
        }

        //Processando dados
        if(num%2 == 0){ //CASO PAR
            if(num >= numParMaior){
                numParMaior = num;
            }
            if(num <= numParMenor){
                numParMenor = num;
            }
        } else{
            if(num >= numImparMaior){
                numImparMaior = num;
            }
            if(num <= numImparMenor){
                numImparMenor = num;
            }
        }
        cont++;
    }

    printf("\n\n---RESULTADOS---\n");
    printf("\nMaior numero par: %.0f\nMenor numero par: %.0f", numParMaior, numParMenor);
    printf("\nMaior numero impar: %.0f\nMenor numero impar: %.0f", numImparMaior, numImparMenor);

    return 0;
}
