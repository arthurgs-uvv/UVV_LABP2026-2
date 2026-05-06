#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float preco, quant, desc, total, totalDesconto, valorDesc = 0;

    printf("Digite o preco do item, a quantidade, e o desconto a vista (%%): ");
    scanf("%f%f%f", &preco, &quant, &desc);

    total = preco*quant;
    totalDesconto = total*(1.0 - (desc/100));
    valorDesc = total*(desc/100);

    printf("O total a pagar sem desconto e: %.2f \nO total a pagar com desconto e: %.2f \nO total do desconto e: %.2f", total, totalDesconto, valorDesc);

    return 0;
}
