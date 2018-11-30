/*Faça um programa que receba:
* As notas de 15 alunos em 5 provas diferentes e armazene-as em uma matriz 15x5;
*Os nomes dos 15alunos e armazene-os em um vetor de 15 posições.
Calcule:
* Para cada aluno, o nome, a média aritmética das cinco provas e a situação(Aprovado, Exame ou Reprovado);
* A média da classe.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Definição dos elementos dos vetores e elementos para Matrizes.*/
#define ALUNO 15
#define NOTAS 5
#define NOMEALUNO 60

/*INICIO*/
main()
{
    /*Localização*/
    setlocale(LC_ALL, "portuguese");

    /*Declaração de variáveis*/
    char nomeAluno[ALUNO][NOMEALUNO], nome;
    float notaAluno[ALUNO][NOTAS] = {0}, nota;
    float mediaAluno = 0, mediaClasse = 0, soma = 0;
    int i = 0, j = 0;

    /*Entrada de dados*/
    for(i = 0; i < ALUNO; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomeAluno[i]);
        printf("\n");
        for(j = 0; j < NOTAS; j++)
        {
            printf("Digite a Nota da prova %d: ", j + 1);
            scanf("%f", &nota);
            notaAluno[i][j] = nota;
        }
        printf("\n");
    }

    /*Bloco de comando*/
    printf("\n%s\t%20s\t%22s\t%20s\t\n", "Nome", "Notas", "Média", "Situação");
    for(i = 0; i < ALUNO; i++)
    {
        printf("%s\t", nomeAluno[i]);
        for(j = 0; j < NOTAS; j++)
        {
            soma += notaAluno[i][j];
            printf("%.2f\t", notaAluno[i][j]);
        }
        mediaAluno = soma / 5;
        printf("%.2f", mediaAluno);
        if(mediaAluno >= 7)
        {
            printf("%20s\t\n", "Aprovado");
        }
        else if (mediaAluno >= 5 && mediaAluno < 7)
        {
            printf("%20s\t\n", "Exame");
        }
        else
        {
            printf("%20s\t\n", "Reprovado");
        }
        soma = 0;
    }
    system("pause");
    return 0;    
}