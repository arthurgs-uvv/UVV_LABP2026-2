#include <stdio.h>
#include <stdlib.h>

int main()
{
    float larg, alt, profu, vAlcool, vGasolina;
    float tanqueMetro3, tanqueLitro, tanqueGasolina, tanqueAlcool;

    printf("-----CALCULANDO COMBUSTIVEIS-----\n");
    printf("Por favor digite o valor da largura, altura e profundidade do tanque\nTodos em metros: \n");
    scanf("%f%f%f", &larg, &alt, &profu);
    printf("\nDigite o valor do litro em reais (R$)\n");
    printf("Do Alcool: ");
    scanf("%f", &vAlcool);
    printf("\nDa Gasolina: ");
    scanf("%f", &vGasolina);

    tanqueMetro3 = larg * alt * profu;
    tanqueLitro = 1000*tanqueMetro3;

    tanqueAlcool = tanqueLitro*vAlcool;
    tanqueGasolina = tanqueLitro*vGasolina;

    printf("\n-----VALORES-----\n");
    printf("Tamanho do tanque em metro cubicos: %.2fm3\nTamanho do tanque em Litros: %.3fL\n", tanqueMetro3, tanqueLitro);
    printf("Valor do tanque com Alcool: R$%.2f\n", tanqueAlcool);
    printf("Valor do tanque com Gasolina: R$%.2f\n", tanqueGasolina);
    printf("Valor do tanque com 20%% de Alcool e 80%% de Gasolina: R$%.2f", (0.2*tanqueAlcool) + (0.8*tanqueGasolina));

    return 0;
}
