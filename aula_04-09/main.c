#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 1
#define MAX 60
#define TAM 6

int main()
{
    srand(time(NULL));
    int val1[TAM], val2[TAM], val3[TAM];
    int i, j, flag, aux, menu;

    printf("-----SUGERINDO MEGA SENA-----");
    while(1){
        printf("\n- MENU -\n");
        printf("0 - Sair\n1 - Iniciar\nSua escolha: ");
        scanf("%d", &menu);
        if(menu == 0) break;
        else if(menu < 0 || menu > 1) printf("\nFavor digite um valor valido...\n");
        else{
            printf("\n\nGERANDO JOGOS...\n\n");
            //Gerando valores pseudoaleatorios para os arrays, sem repeticao
            for(i = 0; i < TAM; i++){
                    while(1){ //valores 1
                        val1[i] = rand() % (MAX - MIN + 1) + MIN;
                        if(i == 0) break;
                        else if (val1[i] == val1[i-1]) continue;
                        else break;
                    }
                    while(1){ //valores 2
                        val2[i] = rand() % (MAX - MIN + 1) + MIN;
                        if(i == 0) break;
                        else if (val2[i] == val2[i-1]) continue;
                        else break;
                    }
                    while(1){ //valores 3
                        val3[i] = rand() % (MAX - MIN + 1) + MIN;
                        if(i == 0) break;
                        else if (val3[i] == val3[i-1]) continue;
                        else break;
                    }
            }

            //Ordenando os valores dos arrays
            //Ordenando valores 1
            while (1)
            {
                flag = 0;
                for (i = 0; i < TAM - 1; i++){
                    if(val1[i] > val1[i+1]){
                        aux = val1[i];
                        val1[i] = val1[i+1];
                        val1[i+1] = aux;
                        flag = 1;
                    }
                }

                if(flag == 0){
                    break;
                }
            }
            //Ordenando valores 2
            while (1)
            {
                flag = 0;
                for (i = 0; i < TAM - 1; i++){
                    if(val2[i] > val2[i+1]){
                        aux = val2[i];
                        val2[i] = val2[i+1];
                        val2[i+1] = aux;
                        flag = 1;
                    }
                }

                if(flag == 0){
                    break;
                }
            }
            //Ordenando valores 3
            while (1)
            {
                flag = 0;
                for (i = 0; i < TAM - 1; i++){
                    if(val3[i] > val3[i+1]){
                        aux = val3[i];
                        val3[i] = val3[i+1];
                        val3[i+1] = aux;
                        flag = 1;
                    }
                }

                if(flag == 0){
                    break;
                }
            }


            //Printando valores
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
