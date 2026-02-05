#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Escrever uma Mini Calculadora de números inteiros: N1 e N2.

Sendo assim, exibir na tela o resultado das operações aritiméticas a seguir:

Soma: +
Subtração: -
Multiplicação: *
Divisão (float): /
DIV: Quociente da Divisão (int): int / int = int
MOD: Resto da Divisão (int): int % int = int
Potenciação (float): pow(base, expoente)
Radiciação (float): pow(base, 1.0 / expoente)
*/

int main()
{
    int n1, n2;
    printf("Mini Calculadora de números inteiros, n1 e n2\n");
    printf("Digite os dois valores inteiros:\n");
    scanf("%d%d", &n1, &n2);

    printf("------------Resultados------------\n");
    printf("Valor de N1: %d\n", n1);
    printf("Valor de N2: %d\n", n2);
    printf("Adicao: %d + %d = %d\n", n1, n2, n1+n2);
    printf("Subtracao: %d - %d = %d\n", n1, n2, (n1-n2));
    printf("Multiplicacao: %d * %d = %d\n", n1, n2, n1*n2);
    printf("Divisao (float): %d / %d = %.1f\n", n1, n2, 1.0 * n1/n2);
    printf("Divisao div: %d / %d = %d\n", n1, n2, n1/n2);
    printf("Divisao mod: %d %% %d = %d\n", n1, n2, n1%n2);
    printf("Potenciacao: %d ^ %d = %.1f\n", n1, n2, pow((float)n1, n2));
    printf("Radiciacao: %d ^ 1.0/%d = %f", n1, n2, pow((float)n1, 1.0/n2));

    return 0;
}
