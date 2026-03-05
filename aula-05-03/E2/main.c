#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    int caso;

    printf("-----CALCULO IDEAL-----\n");
    printf("Digite sua altura (h): "); scanf("%f", &altura);
    if(altura < 0 || altura > 3){
        printf("[ERRO] ENCERRANDO APLICACAO");
        return 0;
    } else{
        printf("Digite seu sexo: \n(1) Masculino\n(2) Feminino\nR: ");
        scanf("%d", %caso);
        if(caso == "1" || caso == "F"){
            switch (caso){
                case 1:
                    printf("Seu peso ideal como homem: %f", (72.7 * altura) - 58);

                case 2:
                    printf("Seu peso ideal como mulher: %f", (62.1 * altura) - 44.7);
            }
        } else{
            printf("[ERRO] ENCERRANDO APLICACAO");
        }
    }

    return 0;
}
