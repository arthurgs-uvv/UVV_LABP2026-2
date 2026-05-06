#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 100

int main()
{
    char nome_completo[TAMANHO], letra;
    unsigned T;

    printf("Entre com seu nome:\n");
    scanf("\n%[^\n]", nome_completo);
    printf("Entre com a primeira letra do seu nome:\n");
    scanf("\n%c", &letra);

    T = strlen(nome_completo);

    printf("Seu nome: %s\nPrimeira Letra: %c", nome_completo, letra);
    printf("\nPrimeira Letra Verdadeira: %c", nome_completo [0]);
    printf("\nSeu nome tem tantos simbolos: %u", T);
    printf("\nSeu nome tem tantos simbolos: %u", (unsigned)strlen(nome_completo));
    return 0;
}

/*
    MANIPULAÇÃO DE STRING
    - Medir: strlen;
    - Copiar: strcpy;
    - Comparar: strcmp;
    - Concatenar: strcat;
*/
