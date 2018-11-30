/*Rolar um dado de 6 faces n vezes */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

/* Define os elementos do vetor */
#define SIZE 7

/* INICIO */
main()
{
    setlocale(LC_ALL, "portuguese-brazilian");

    /* Declaração de variáveis */
    int face, jogada, frequencia[SIZE] = {0};
    srand(time(NULL));

    /* Bloco de comandos */
    for(jogada = 0; jogada <= 1; jogada++)
    {
        face = rand() % 6 + 1;
        ++frequencia[face];
    }
    printf("%s%18s\n", "Face", "Frequência");

    /* Saída de dados */
    for(face = 0; face < SIZE; face++)
    {
        printf("%4d%18d\n", face, frequencia[face]);
    }
    system("pause");
    return 0;
}