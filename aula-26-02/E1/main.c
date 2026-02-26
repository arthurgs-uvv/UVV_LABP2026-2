#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, periCm, periPol, periJar;

    printf("-----CALCULANDO PERIMETRO-----\nPor favor, digite o valor da base e da altura em centimetros: ");
    scanf("%f%f", &base, &altura);

    if(base < 0 || altura < 0){
        printf("\n[ERROR] POR FAVOR DIGITE VALORES VALIDOS");
        return 0;
    } else {
        periCm = (base + altura)*2;
        periPol = periCm/2.54;
        periJar = periPol*0.03;

        printf("\n---VALORES DO PERIMETRO---\nCentimetro: %.2f cm\nPolegada: %.2f pol\nJardas: %.2f jardas", periCm, periPol, periJar);
    }

    return 0;
}
