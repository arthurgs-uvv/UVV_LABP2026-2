#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, limInf, limSup, cont = 0, t;

    printf("-----MULTIPLOS DE N-----");
    printf("\nVamos mostrar os valores multiplos de N em um intervalo definido:\n|N tem que ser maior 1\n"
           "|Os valores de limite tem que ser maior ou igual a zero\n|Os valores nao podem ter ponto flutuante");
    printf("\nMe diga o valor de n: "); scanf("%d", &num);
    printf("Me diga o limite inferior: "); scanf("%d", &limInf);
    printf("Me diga o limite superior: "); scanf("%d", &limSup);

    if(num < 2 || limInf >= limSup || limInf < 0 || limSup < 0){
        printf("\n.\n.\n..\n...[error] ENCERRANDO APLICATIVO");
    } else{
        printf("Mostrando os multiplos de %d\n", num);

        for(t = limInf; t <= limSup; t++){
            if(t%num == 0){
                cont++;
                printf("Multiplo %d: %d\n", cont, t);
            }
        }
    }

    return 0;
}
