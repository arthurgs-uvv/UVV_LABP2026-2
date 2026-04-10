#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 20000

/*
Escreva  um  algoritmo  que  leia  a  inscrição  e  a  tempo  de  prova  (minutos)  de  20000  maratonistas.       
Exiba na tela a inscrição e o tempo de prova do maratonista vencedor.
*/

int main()
{
    float temp = 0, tempWin = INFINITY;
    int n = 1, incriWin = 0, incri = 0;

    printf("-----MARATONISTA VENCEDOR-----\n");
    while(n <= MAX){
        printf("\nMaratonista %d\nSua Incricao: ", n); scanf("%d", &incri);
        printf("Seu tempo (em minutos): "); scanf("%f", &temp);
        
        if(incri <= 0 || temp <= 0) printf("\nValores invalidos, favor digitar valores corretos.\n");
        else{
            printf("\n--Registro concluido, obrigado.--\n");
            n++;
            if(temp < tempWin){
                tempWin = temp;
                incriWin = incri;
            }
        }
    }

    printf("\nEncerrando registros\n");
    printf("---MARATONISTA VENCEDOR---\n");
    printf("Incricao: n %d\nTempo: %.1f minutos\n", incriWin, tempWin);

    return 0;
}