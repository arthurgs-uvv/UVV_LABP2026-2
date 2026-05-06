#include <stdio.h>
#include <stdlib.h>
#define quantCandi 50

/*
14) Escrever um algoritmo em C que leia o voto de 50 eleitores de um condomínio nos candidatos (1 ou 2 ou
0 (Nulo ou Inválido)) para síndico e exiba na tela, em porcentagem, o resultado da eleição por
candidato e os votos nulos ou inválidos. Crie um Menu de Opções para o eleitor.
*/

int main()
{
    int voto = 0, votoCand1 = 0, votoCand2 = 0, votoBranco = 0, chave = 2;

    printf("-----VOTOS NO CONDOMINIO-----\n");

    do{
        printf("Gostaria de comecar a eleicao?\n1 - Comecar\n0 - Sair\nR: "); scanf("%d", &chave);
        if(chave != 1 && chave != 0){
            printf("\nPor favor digite um valor valido\n");
        }
    } while(chave != 1 && chave != 0);

    if(chave == 0) return 0;
    else{
        for(int cont = 1; cont <= quantCandi; cont++){
            printf("\nEleitor %d\n0 - Nulo ou Invalido\n1 - Candidato 1\n2 - Candidato 2\nSeu voto: ", cont); scanf("%d", &voto);
            if(voto == 1) votoCand1++;
            else if(voto == 2) votoCand2++;
            else votoBranco++;
        }
        printf("\n---Porcentagem dos Votos---\n");
        printf("%.2f%% - Eleitor 1\n", 1.0*100*votoCand1/quantCandi);
        printf("%.2f%% - Eleitor 2\n", 1.0*100*votoCand2/quantCandi);
        printf("%.2f%% - Branco ou Invalido", 1.0*100*votoBranco/quantCandi);
    }

    return 0;
}
