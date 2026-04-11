#include <stdio.h>
#include <stdlib.h>
#define MIN 1
#define MAX 60
#define TAM 6

int main()
{
    int val1[TAM], val2[TAM], val3[TAM];
    int i, j, ls = TAM - 1, flag, aux, menu;

    printf("-----SUGERINDO MEGA SENA-----");
    while(1){
        printf("\n- MENU -\n");
        printf("0 - Sair\n1 - Iniciar\nSua escolha: ");
        scanf("%d", &menu);
        if(menu == 0) break;
        else if(menu < 0 || menu > 1) printf("\nFavor digite um valor valido...\n");
        else{
            printf("\n\nGERANDO JOGOS...\n\n");
            //Gerando valores aleatorios para os arrays
            for(i = 0; i < TAM; i++){
                    val1[i] = rand() % (MAX - MIN + 1) + MIN;
                    val2[i] = rand() % (MAX - MIN + 1) + MIN;
                    val3[i] = rand() % (MAX - MIN + 1) + MIN;
            }

            //Ordenando os valores dos arrays
                for(int j = 0; j < (TAM - 1); j++){
                    for(i = 0; i < ls; i++){    
                        if(val1[i] > val1[i + 1]){
                            aux = val1[i];
                            val1[i] = val1[i + 1];
                            val1[i + 1] = aux;    
                        } 
                    }
                    ls--;
                }                

            printf("---SEUS JOGOS---");
            for(i = 1; i < 4; i++){
                printf("\nJOGO %d = ", i);
                for(j = 0; j < 6; j++){
                    if(i == 1) printf("%d, ", val1[j]);
                    else if(i == 2) printf("%d, ", val2[j]);
                    else printf("%d, ", val3[j]);
                }
            }

        break;
        }
    }

    printf("\n\nEncerrando...\n");

    return 0;
}
