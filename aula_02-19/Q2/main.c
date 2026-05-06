#include <stdio.h>
#include <stdlib.h>
#define dolar 5.21
#define euro 6.13


int main()
{
    float reais, inEuro, inDolar;

    printf("------------CONVERTENDO VALORES PARA DOLAR E EURO-----------\n");
    printf("Por favor, digite seu valor em reais: \n");
    scanf("%f", &reais);

    //Processando
    inEuro = reais/euro;
    inDolar = reais/dolar;

    printf("\n----VALORES CONVERTIDOS----");
    printf("\nCOTACAO DO DOLAR UTILIZADA: E$%.2f", dolar);
    printf("\nCOTACAO DO EURO UTILIZADA: U$%.2f", euro);
    printf("\nSeu valor em reais: R$%.2f", reais);
    printf("\nSeu valor em dolar: U$%.2f", inDolar);
    printf("\nSeu valor em euro: E$%.2f", inEuro);

    return 0;
}
