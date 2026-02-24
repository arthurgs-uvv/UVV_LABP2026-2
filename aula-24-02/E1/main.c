#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha, valid;

    printf("------TESTE DE SENHA-------");
    printf("\nPor favor, digite sua senha de 4 dígitos, somente números: "); scanf("%d", &senha);

    if(senha <= 999 || senha >= 10000)
        printf("\nPor favor digite uma senha válida, com apenas 5 dígitos.");
    else if(senha%17 == 0 && senha%2 == 1)
        printf("\n\nSENHA FRACA");
    else
        printf("\n\nSENHA FORTE");

    printf("\n\nSe quiser saber sua senha digite 1, se não digite 0: "); scanf("%d", &valid);
    if(valid == 1)
        printf("\n\nMentira, não vou mostrar, pode ir dormirkkk");
    else
        printf("\n\nA senha dele: %d", senha);

    return 0;
}
