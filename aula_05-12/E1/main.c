#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcularDistancia(float px, float py, float qx, float qy);

float calcularDistancia(float px, float py, float qx, float qy){
    float distancia;

    distancia = sqrt(pow(px - qx, 2) + (pow(py - qy, 2)));

    return distancia;
}

int main()
{
    int menu;
    float px, py, qx, qy;
    float distancia;

    printf("----- MEDINDO DISTANCIAS -----\n");

    while(1){
        printf("\n--- Menu ---\n");
        printf("[1] - Executar\n[0] - Sair\nEscolha: ");
        scanf("%d", &menu);
        if(menu == 0){
            printf("\n\nEncerrando programa..... . .\n\n");
            break;
        } else if(menu > 1 || menu < 0) printf("\nPor favor digite valores validos...\n");
        else{
            printf("Digite o px: ");
            scanf("%f", &px);
            printf("Digite o py: ");
            scanf("%f", &py);
            printf("Digite o qx: ");
            scanf("%f", &qx);
            printf("Digite o qy: ");
            scanf("%f", &qy);

            distancia = calcularDistancia(px, py, qx, qy);

            printf("\nSua distancia deu: %.2f\n", distancia);
        }
    }

    return 0;
}
