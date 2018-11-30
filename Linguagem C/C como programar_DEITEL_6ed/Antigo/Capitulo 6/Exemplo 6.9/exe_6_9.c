/*Rolar um dado de seis faces 6000 vezes*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAMANHO 7
main(){
    int face, jogada, frequencia[TAMANHO] = {0};
    srand(time(NULL));
    for(jogada = 1; jogada <= 600; jogada++)
    {
        face = rand() % 6 + 1;
        ++frequencia[face];//substitui o switch de 20 linhas "da Fig.5.8"
    }
    printf("%s%18s\n", "Face", "Frequencia");
    for(face = 1; face <= TAMANHO -1; face++)
    {
        printf("%4d%18d\n", face, frequencia[face]);
    }
    system("pause");
    return 0;
}