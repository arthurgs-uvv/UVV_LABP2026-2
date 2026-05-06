#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define QUANT 50

/*
Escreva  um  algoritmo  que  leia  o  preço  em  reais  de  50  mercadorias  e  exiba-as  com  5%  de  reajuste. 
Entretanto, se o reajuste exceder o teto de R$ 25.50 reais, retirar 2% do preço reajustado.
*/

int main()
{
    int cont = 1, reajuste;
    float preco;

    printf("-----MERCADINHO-----\n");

    while(cont <= QUANT){
        while(1){
            printf("\nProduto %d\nValor: R$", cont); scanf("%f", &preco);
            if(preco > 0) break;
            else printf("\nDigite um valor valido.");
        }
        while(1){
            printf("\nQual o tipo de reajuste de 5%%:\n1 - Desconto\n2 - Acrescimo\nR: "); scanf("%d", &reajuste);
            if(reajuste == 1){
                preco = preco*0.95;
                printf("\nPreco do produto %d reajustado: R$%.2f", cont, preco);
                break;
            } else if(reajuste == 2){
                preco = preco*1.05;
                printf("\nPreco do produto %d reajustado: R$%.2f", cont, preco);
                break;
            } else printf("\nFavor digitar um valor valido...");
        }
        if(preco > 25.50){
            printf("\nSeu preco esta acima de 25.50 reais.\nTerei que retirar 2%% do preco do produto %d", cont);
        }

        printf("\n\nPRODUTO %d\nValor final: R$%.2f\n", cont, preco);
        
        cont++;
    }

    return 0;
}