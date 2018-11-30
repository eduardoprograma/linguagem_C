/*Faça um programa que:
* Receba a idade de oito alunos e armazene-as em um vetor, em um outro vetor armazene o código de cinco disciplinas e em uma matriz armazene a quantidade de provas que cada aluno fez em cada disciplina.
calcule e mostre:
a) A quantidade de alunos com idade entre 18 e 25 anos e que fizeram mais de duas provas em uma disciplina com código digitado pelo usuário. O usuário pode digitar um código que não está cadastrado; neste caso mostre a mensagem.
b) Uma listagem com número do aluno e o código da disciplina dos alunos que fizeram menos de três provas, Analisar cada disciplina.
c) A média de idade dos alunos que não fizeram nenhuma prova em alguma disciplina. Cuidado para não contar duas vezes o mesmo aluno.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos dos Vtores e Matrizes*/
#define IDADE 8
#define DISCIPLINAS 5
#define PROVAS 5

/*Inicio*/
main()
{
    /*Localização*/
    setlocale(LC_ALL, "Portuguese-brazilian");

    /*Declaração de variaveis*/
    int vetorIdade[IDADE] = {0}, vetorDisciplina[IDADE][DISCIPLINAS] = {0}, vetorProva[IDADE][PROVAS] = {0};
    int num = 0, i, j, contIdade = 0, ContProva = 0;
    /*Entrada de dados*/
    for(i = 0; i < IDADE; i++)
    {
        printf("Digite sua idade: ");
        scanf("%d", &num);
        vetorIdade[i] = num;
        printf("\nCódigo das diciplinas: \n%s\n%s\n%s\n%s\n%s\n\nDigite -1 para encerrar\n\n", "1 - Matematica", "2 - História", "3 - Inglês", "4 - Geografia", "5 - Programação");
        for(j = 0; j < DISCIPLINAS; j++)
        {
            printf("Digite o código da disciplina: ");
            scanf("%d", &num);
            if(num > 5 || num < 1)
            {
                j--;
                printf("\nO código digitado não corresponde a nenhuma disciplina\n\n");
            }
            else
            {
                vetorDisciplina[i][j] = num;
                printf("Digite aquantidade de provas feitas nesta disciplina: ");
                scanf("%d", &num);
                vetorProva[i][j] = num;
            }
            printf("\n");
        }        
    }

    /*A quantidade de alunos com idade entre 18 e 25 anos e que fizeram mais de duas provas em uma disciplina com código digitado pelo usuário. O usuário pode digitar um código que não está cadastrado; neste caso mostre a mensagem.*/
    for(i = 0; i < IDADE; i++)
    {
        for(j = 0; j < DISCIPLINAS; j++)
        {
            if(vetorIdade[i] >= 18 && vetorIdade[i] <= 25 && vetorProva[i][j] >= 2)
            {
                contIdade++;
                ContProva++;
            }
        }
    }
    /*Saída de dados.*/
    printf("\nA quantidade de alunos entre 18 e 25 anos que fizeram mais de uma prova por discipliana e: %d\n\n", contIdade);

    /*Uma listagem com número do aluno e o código da disciplina dos alunos que fizeram menos de três provas, Analisar cada disciplina.*/
    printf("%s\t%20s\t\n", "Aluno", "Diciplinas");
    for(i = 0; i < IDADE; i++)
    {
        int k = 0;
        for(j = 0; j < DISCIPLINAS; j++)
        {
            if(vetorProva[i][j] <= 3)
            {
                while(k < 1)
                {
                    k++;
                    printf("%3d\t", i);
                }
                printf("%d\t", vetorDisciplina[i][j]);
            }
        }
        printf("\n");
    }    

    /*A média de idade dos alunos que não fizeram nenhuma prova em alguma disciplina. Cuidado para não contar duas vezes o mesmo aluno.*/
    int soma = 0, media = 0, contMedia = 0;
    for(i = 0; i < IDADE; i++)
    {
        for(j = 0; j < DISCIPLINAS; j++)
        {
            if(vetorProva[i][j] == 0)
            {
                soma += vetorIdade[i];
                contMedia++;
            }
        }
    }
    media = soma / contMedia;
    printf("\nA media da idade dos alunos que não fizeram nenhuma prova e : %d anos\n", media);
    
    /*FIM DO CÓDIGO*/
    system("pause");
    return 0;
}