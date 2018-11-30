/*Programa de votação estudantil*/
#include<stdio.h>
#include<stdlib.h>
#define TAMANHO_RESPOSTAS 40
#define TAMANHO_FREQUENCIA 11
main(){
    int opiniao, nivel;
    int respostas[TAMANHO_RESPOSTAS] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8};
    int frequencia[TAMANHO_FREQUENCIA] = {0};
    
    for(opiniao = 0; opiniao <= TAMANHO_RESPOSTAS - 1; opiniao++)
    {
        ++frequencia[respostas[opiniao]];
    }
    printf("%s%17s\n", "Nível", "Frequencia");
    
    for(nivel = 1; nivel <= TAMANHO_FREQUENCIA - 1; nivel++)
    {
        printf("%5d%17d\n", nivel, frequencia[nivel]);
    }
    system("pause");
    return 0;
}