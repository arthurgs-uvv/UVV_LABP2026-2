#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float massa, altura, imc;

    printf("-----CALCULANDO IMC-----\nDigite sua altura (metros) e massa (kg): ");
    scanf("%f%f", &altura, &massa);

    if(massa <= 0 || altura <= 0){
        printf("[ERROR]\n[ERROR]\n[ERROR]\n[ERROR]\n[ERROR]\n[ERROR]\nPOR FAVOR DIGITE VALORES VALIDOS.");
    } else {
        imc = massa/pow(altura, 2);
        if(imc < 18.5)
            printf("Voce esta na classificacao 'Magreza', com valor %.2f de imc", imc);
        else if(imc < 25)
            printf("Voce esta na classificacao 'Saudavel', com valor %.2f de imc", imc);
        else if(imc < 30)
            printf("Voce esta na classificacao 'Sobrepeso', com valor %.2f de imc", imc);
        else if(imc < 35)
            printf("Voce esta na classificacao 'Obesidade Grau I', com valor %.2f de imc", imc);
        else if(imc < 40)
            printf("Voce esta na classificacao 'Obesidade Grau II (Severa)', com valor %.2f de imc", imc);
        else
            printf("Voce esta na classificacao 'Obesidade Grau III (Morbida)', com valor %.2f de imc", imc);
    }

    return 0;
}
