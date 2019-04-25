/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Inicio do código */

    /* Estrutura de dados */
    struct aluno
    {
        unsigned char matricula_aluno;
        char nome_aluno[60];
        float nota_1;
        float nota_2;
        float nota_3;
        float media;
    }aluno_n;

    /* Bloco de comandos */
    int main()
    {
        int i, j;
        int alun = 0;
        struct aluno aluno_n[5];

        /* Entrada de dados */
        for (i = 0; i < 5; i++)
        {
            printf("Digite o numero da matricula do aluno: ");
            scanf("%s", &aluno_n[i].matricula_aluno);
            printf("Digite o nome do aluno: ");
            fflush(stdin);
            fgets(aluno_n[i].nome_aluno, 60, stdin);
            printf("Digite a primeira nota do aluno: ");
            scanf("%f", &aluno_n[i].nota_1);
            printf("Digite a segunda nota do aluno: ");
            scanf("%f", &aluno_n[i].nota_2);
            printf("Digite a terceira nota do aluno: ");
            scanf("%f", &aluno_n[i].nota_3);
        }
        
        /* Calculo das médias */
        for(i = 0; i < 5; i++)
        {
            aluno_n[i].media = (aluno_n[i].nota_1 + aluno_n[i].nota_2 + aluno_n[i].nota_3) / 3;
        }

        /* Comparando as medias */
        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                if(aluno_n[i].media > aluno_n[j].media)
                {
                    alun = i;
                }
            }
        }

        /* Saída dos dados */
        printf("O melhor aluno:\n\n");
        printf("Matricula     : %i\n", aluno_n[alun].matricula_aluno);
        printf("Nome do aluno : %s\n", aluno_n[alun].nome_aluno);
        printf("Nota 1        : %.2f\n", aluno_n[alun].nota_1);
        printf("Nota 2        : %.2f\n", aluno_n[alun].nota_2);
        printf("Nota 3        : %.2f\n", aluno_n[alun].nota_3);
        printf("Media         : %.2f\n", aluno_n[alun].media);

        return 0;
    }

/* Fim do códiogo */