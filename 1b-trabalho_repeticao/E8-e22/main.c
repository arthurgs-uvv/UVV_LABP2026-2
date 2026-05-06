#include <stdio.h>
#include <stdlib.h>

/*
Escreva um algoritmo que leia a temperatura diária de inverno de uma estação de esqui. Sabe-se que as 
temperaturas  no  inverno  variam  de  -15°  a  5°  C.  Exiba  a  temperatura  média  da  estação  parando  o 
algoritmo quando for digitada uma temperatura fora da estação de inverno.
*/

int main()
{
    float temp = 0, media = 0;
    int n = 0;

    printf("-----TEMPERATURAS DE INVERNO-----\n");
    while(1){
        printf("\nDigite a temperatura %d: ", n+1);
        scanf("%f", &temp);
        
        if(temp >= -15 && temp <= 5){
            media += temp;
            n++;
        } else if (n > 0){
            printf("\n\nMEDIA DAS TEMPERATURAS DE INVERNO: %.1f C\n", media/n);
            break;
        } 
        else{
            printf("\nNAO ESTAMOS NO INVERNO\nENCERRANDO APLICATIVO....\n");
            break;
        }
    }

    return 0;
}


