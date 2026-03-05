#include <stdio.h>
#include <stdlib.h>

/*
Escrever um algoritmo em C que leia uma temperatura em Celsius (C) ou Fahrenheit (F) e faça a
conversão entre as unidades. Considere que o usuário informe:

✓ Escala de entrada: C (para Celsius) ou F (para Fahrenheit)
✓ Valor da temperatura
*/

int main()
{
    float tempEntrada, tempSaida;
    int caso;

    printf("-----CONVERTENDO TEMPERATURAS-----\n");
    printf("Escolha sua escala de entrada: \n");
    printf("1) Celsius\n2) Fahrenheit\nR: "); scanf("%d", &caso);
    if(caso != 1 && caso != 2){
        printf("\n\n[ERROR] CASOS INVALIDOS, ENCERRANDO APLICATIVO...");
        return 0;
    } else{
        printf("\nMe diga sua temperatura: "); scanf("%f", &tempEntrada);
        switch (caso){
            case 1:
                tempSaida = (tempEntrada*9/5) + 32;
                printf("\nSua temperatura em Celsius: %.2f C", tempEntrada);
                printf("\nSua temperatura em Fahrenheit: %.2f F", tempSaida);
                break;

            case 2:
                tempSaida = 5*(tempEntrada - 32)/9;
                printf("\nSua temperatura em Fahrenheit: %.2f F", tempEntrada);
                printf("\nSua temperatura em Celsius: %.2f C", tempSaida);
                break;
        }
    }

    return 0;
}
