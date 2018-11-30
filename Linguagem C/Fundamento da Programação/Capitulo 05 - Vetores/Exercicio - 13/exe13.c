/*Programa recebe o nome e nota de 8 alunos  e mostra relatório*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* DEFINIÇÃO DOS ELEMENTOS DO VETOR */
#define SIZEAL 8
#define SIZEAC 8
#define SIZEN 8

/* INICIO */
main()
{
    setlocale(LC_ALL, "pt-br");

    /* DECLARAÇÃO DE VARÁVEIS */
    char vetorAluno[SIZEAL][SIZEAC] = {0};
    float vetorNota[SIZEN] = {0}, n, media = 0, soma = 0;
    int i;

    /* ENTRADA DE DADOS */
    for(i = 0; i < SIZEN; i++)
    {
        printf("\nDigite o nome do %dº aluno: \n", i + 1);
        scanf("%s", vetorAluno[i]);
        printf("Digite a nota do %s\n", vetorAluno[i]);
        scanf("%f", &n);
        vetorNota[i] = n;
    }

    /* BLOCO DE COMANDO E SAÍDA DE DADOS */
    printf("\n%10s%10s\n", "Aluno", "nota");
    for(i = 0; i < SIZEAL; i++)
    {
        soma += vetorNota[i];
        printf("%10s%10.2f\n", vetorAluno[i], vetorNota[i]);
    }
    media = soma / i;
    printf("\nA media da classe = %.2f\n", media);
    system("pause");
    return 0;
}