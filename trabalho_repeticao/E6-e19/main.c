#include <stdio.h>
#include <stdlib.h>

/*
Escreva um algoritmo que exiba todos os múltiplos de 7 ou 13 que estão no intervalo entre 1000 e 1500.
*/

int main()
{
    int valid = 0, cont, cont2 = 1;

    printf("-----ALGORITMO DE PRINT MULTIPLOS DE 7 E 13 ENTRE 1000 E 1500-----\n");
    printf("Gostaria que eu mostrasse os valores?\n");

    while(1){
        printf("1 - Sim, continue.\n0 - Nao, sair.\nR: "); scanf("%d", &valid);

        if(valid == 0) break;
        else if(valid != 1) printf("\nFAVOR DIGITAR 0 OU 1.\n");
        else{
            for(cont = 1000; cont <=1500; cont++){
                if(cont%7 == 0 || cont%13 == 0){
                    printf("\nValor %d: %d", cont2, cont);
                    cont2++;
                }
            }
            break;
        }
    }

    return 0;
}
