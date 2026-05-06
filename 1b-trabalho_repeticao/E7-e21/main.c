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
    float media = 0, num = 0;
    int cont=0;

    printf("-----ALGORITMO DE INTERVALO-----\nDigite valores entre o intervalo fechado: [10 * π3, 100 * π]\npara o programa continuar rodando.\n");

    while(1){
        printf("Digite o valor %d: ", cont+1); scanf("%f", &num);
        if((num >= 10.0*pow(PI, 3)) && num <= 100*PI){ //Só acontece quando: 310 < num < 314
            media += num;
            cont++;
        } else{
            if(cont == 0) printf("\n\nVoce nao digitou nenhum valor, encerrando aplicativo...\n");
            else{
                printf("\nValor fora do intervalo\n[ENCERRANDO LEITOR DE NUMEROS...]\n");   
                printf("\nVoce digitou %d numeros validos.\n A media dos numeros digitados foi: %.2f\n", cont, 1.0*media/cont);
            }
            break;
        }
    }

    return 0;
}
