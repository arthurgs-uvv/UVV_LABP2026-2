#include <stdio.h>
#include <stdlib.h>
#define QUANT 3

/*
Escreva um algoritmo que leia 100 números ímpares e múltiplos de 7. Exiba a média dos números lidos.
*/


int main()
{
    int cont = 1, media = 0, num = 0;

    printf("-----MEDIA DE IMPARES MULTIPLOS DE 7-----\n");
    printf("Digite valores impares e multiplos de 7!\n");

    while(cont <= QUANT){
        while(1){
            printf("Digite o valor %d: ", cont); scanf("%d", &num);
            if(num%2 == 1 && num%7 == 0) break;
            else printf("\nINVALIDO\nFAVOR DIGITAR VALOR IMPARES E MULTIPLOS DE 7\n");
        }

        cont ++;
        media += num;
    }

    printf("\nMedia dos numeros lidos: %.2f", media*1.0/QUANT);

    return 0;
}
