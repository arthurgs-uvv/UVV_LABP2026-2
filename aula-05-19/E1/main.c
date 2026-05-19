#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 3

void cubo1(float lado, float *area, float *volume);

void cubo1(float lado, float *area, float *volume){
    *area = 6 * pow(lado, 2);
    *volume = pow(lado, 3);
}

int main()
{
    int i = 1;
    unsigned menu = 1;
    float lado, area, volume;

    printf("----- CALCULANDO CUBOS -----\n");

    while(menu != 0){
        printf("\n--- MENU ---");
        printf("\n[1] - Iniciar\n[0] - Sair\nR: ");
        scanf("%u", &menu);

        if(menu != 1 && menu != 0) printf("\nDigite um valor valido..\n\n");
        else if(menu == 1){
            while(i <= TAM){
                printf("\nDados do cubo %i: ", i);
                scanf("%f", &lado);
                if(lado <= 0) printf("\nDigite um valor valido...\n");
                else{
                    cubo1(lado, &area, &volume);
                    printf("\n- Dados do cubo %i -\n", i);
                    printf("Lado   : %.2f\n", lado);
                    printf("Area   : %.2f\n", area);
                    printf("Volume : %.2f\n", volume);
                    i++;
                }
            }
        }
    }

    printf("\n\nENCERRANDO APLICACAO...\n\n");
}
