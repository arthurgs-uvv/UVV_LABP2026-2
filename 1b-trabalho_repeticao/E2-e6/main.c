#include <stdio.h>
#include <stdlib.h>
#define salarioMin 880.05

int main()
{
    float salario, clienteA = 0, clienteB = 0 , clienteC = 0;
    int cont = 1, cond = 1;

    printf("-----PORCENTAGEM DE SALARIO DO SHOPPING-----\n");
    printf("Daqui para frente pedirei os salarios das pessoas, um por vez.\n")
    while(cont <= 1000){
        printf("\nSalario do cliente %d: R$", cont); scanf("%f", &salario);
        if(salario >= (15*salarioMin))
            clienteA++;
        else if(salario >= (5*salarioMin))
            clienteB++;
        else
            clienteC++;
    }
}
