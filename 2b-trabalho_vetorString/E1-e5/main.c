#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 1000

/*
Escrever um programa em C que leia 1000 mensagens e
conte a quantidade de caractere 'U' ou 'V'.
*/

int main()
{
    char texto[TAMANHO];
    char aux;
    int i, menu = 1; //contador
    unsigned tam, letraU = 0, letraV = 0;

    printf("----- PROGRAMA 5 -----");
    while(menu != 0){
        printf("\n\n--- MENU ---\n");
        printf("[1] - Executar programa\n[0] - Encerrar programa\nR: ");
        scanf("%i", &menu);

        if(menu != 1 && menu != 0)
            printf("\nDigite um valor valido\n");
        else if(menu == 1){
            printf("\nDigite um texto de ate %d letras\nR:", TAMANHO);
            scanf("\n%[^\n]", texto);

            tam = strlen(texto);
            for(i = 0; i < tam; i++){
                aux = texto[i];
                if(aux == 'U') letraU++;
                else if(aux == 'V') letraV++;
            }

            printf("\n- Respostas -\n");
            printf("Texto: %s\nQauntidade de caracteres no texto: %u\nQuantidade de 'U': %u\nQuantidade de 'V': %u",
                   texto, tam,letraU, letraV);
        }
    }

    printf("\n\nENCERRANDO PROGRAMA...\n");

    return 0;
}
