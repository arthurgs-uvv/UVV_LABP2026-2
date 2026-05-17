/*
Escrever um programa que leia uma mensagem e exiba a quantidade de vezes que aparece a
substring “UVV” na mensagem. Repetir o procedimento anterior 100 vezes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 1000
#define REPETIR 100

int main()
{
    char frase[TAMANHO];
    int i, j, menu = 1;
    unsigned tam, cont = 0;

    printf("----- PROGRAMA 9 -----");
    while(menu != 0){
        printf("\n\n--- MENU ---\n");
        printf("[1] - Executar programa\n[0] - Encerrar programa\nR: ");
        scanf("%i", &menu);

        if(menu != 1 && menu != 0)
            printf("\nDigite um valor valido\n");
        else if(menu == 1){
            for(j = 1; j <= REPETIR; j++){
                cont = 0;
                printf("\n- REPETICAO %i -", j);
                printf("\nDigite uma frase de ate %d caracteres\nR: ", TAMANHO);
                scanf("\n%[^\n]", frase);

                tam = strlen(frase);
                for(i = 0; i < tam - 2; i++){
                    if(frase[0] == 'U' && frase[i + 1] == 'V' && frase[i + 2] == 'V')
                        cont++;
                }

                printf("\n- Respostas -\n");
                printf("Sua frase: %s\nQuantidade de caracteres: %u\n", frase, tam);
                printf("A palavra 'UVV' apareceu %u vezes.\n", cont);
            }
            break;
        }
    }

    printf("\n\nENCERRANDO PROGRAMA\n");

    return 0;
}
