#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#define MIN 100
#define MAX 999

int main()
{
    int matri[TAM];
    float nota[TAM];
    int menu, menu2, i, sair = 1;
    float media;

    printf("-----CONTROLE ESCOLAR-----");
    while(1){
        printf("\n0 - Sair do programa.\n1 - Executar o programa.\nR: ");
        scanf("%d", &menu);
        if(menu == 0) break;
        else if(menu != 0 && menu != 1) printf("\nDigite valores validos.\n");
        else
        {
            printf("\nPreciso que voce digite %d Matriculas e suas notas.", TAM);
            for(i = 0; i < TAM; i++){
                while(1){
                    printf("\nMatricula %d (XXX): ", i+1);
                    scanf("%d", &matri[i]);
                    if(matri[i] < 100 || matri[i] > 999) printf("\nDigite valores validos");
                    else break;
                }
                while(1){
                    printf("\nNota %d: ", i+1);
                    scanf("%f", &nota[1]);
                    if(nota[i] < 0.0 || nota > 10.0) printf("\nDigite valores validos");
                    else break;
                }
            }
            while(sair)
            {
                printf("\nDigite a opcao desejada:\n1 - RELATORIO 1\n");
                printf("2 - RELATORIO 2\n3 - RELATORIO 3\n4 - RELATORIO 4\n");
                printf("5 - ENCERRAR PROGRAMA\nR: ");
                scanf("%d", &menu2);

                if(menu2 < 1 || menu2 > 5) printf("\nDigite valores validos");
                else
                {
                    switch (menu2){
                    case 1:
                        for(i = 0; i < TAM; i++){
                            media += nota[i];
                        }
                        printf("\nMedia do Primeiro Bimestre = %f", 1.0*media/TAM);
                        break;
                    case 2:

                        break;
                    case 3:

                        break;
                    case 4:

                        break;
                    case 5:
                        sair = 0;
                        break;
                    }
                }
            }
            break;
        }
    }

    printf("\n\nENCERRANDO..... . .\n");

    return 0;
}
