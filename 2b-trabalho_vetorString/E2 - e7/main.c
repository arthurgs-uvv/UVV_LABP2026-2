/*
Escrever um programa que leia uma string e identifique se esta é um palíndromo. Palíndromo é uma
palavra lida da esquerda para direita ou vice-versa permanecendo a mesma palavra. Ex: ANILINA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 100

int main()
{
    char palavra[TAMANHO];
    int i, j, menu = 1;
    unsigned tam, aux = 1;

    printf("----- PROGRAMA 7 -----");
    while(menu != 0){
        printf("\n\n--- MENU ---\n");
        printf("[1] - Executar programa\n[0] - Encerrar programa\nR: ");
        scanf("%i", &menu);

        if(menu != 1 && menu != 0)
            printf("\nDigite um valor valido\n");
        else if(menu == 1){
            printf("\nDigite uma palavra de ate %d caracteres\nR: ", TAMANHO);
            scanf("%s", palavra);

            tam = strlen(palavra);
            for(i = 0; i < tam; i++){
                j = tam - 1 - i;

                if(palavra[i] != palavra[j]){
                    aux = 0;
                    break;
                }
            }
            printf("\n- Respostas -\n");
            printf("Sua palavra: %s\nQuantidade de caracteres: %u\n", palavra, tam);
            if(aux == 0) printf("Sua palavra nao e um palindromo");
            else printf("Sua palavra e um palindromo");
        }
    }

    printf("\n\nENCERRANDO PROGRAMA\n");

    return 0;
}
