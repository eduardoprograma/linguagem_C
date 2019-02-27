/* Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3. */
#include <stdio.h>
#include <stdlib.h>
#define ALUNO 10
#define NOTA 3
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    int controle[ALUNO][NOTA] = {0};                            //matriz de controle de nota dos alunos;
    int i, j;                                                   //variavel de controle;
    int Pior_Nota_0 = 10, Pior_Nota_1 = 10, Pior_Nota_2 = 10;  // variavel de comparação;
    int PN_0 = 0, PN_1 = 0, PN_2 = 0;                           //Controlador notas;
    int k = 0, l = 0, m = 0;                                    //contador de notas baixas;

    /* entrada de dados */
    for(i = 0; i < 10; i++)
    {
        printf("Aluno %i.\n", i + 1);                                  //controle aluno;
        for(j = 0; j < 3; j++)
        {
            printf("Digite a %i Nota: ", j + 1);         //controle nota;
            scanf("%i", &controle[i][j]);
        }
    }

    /* bloco de comandos */
        /* analise de notas */
        for(i = 0; i < 10; i++)
        {
            for(j = 0; j < 10; j++)
            {
                if(j == 0)                                      //Nota da primeira coluna;
                {
                    if(Pior_Nota_0 > controle[i][j])
                    {
                        Pior_Nota_0 = controle[i][j];
                    }
                }
                else if(j == 1)                                      //Nota da segunda coluna;
                {
                    if(Pior_Nota_1 > controle[i][j])
                    {
                        Pior_Nota_1 = controle[i][j];
                    }
                }
                else if(j == 2)                                      //Nota da terceira coluna;
                {
                    if(Pior_Nota_2 > controle[i][j])
                    {
                        Pior_Nota_2 = controle[i][j];
                    }
                }
            }

            /* contagem das notas */
            for(i = 0; i < 10; i++)
            {
                for(j = 0; j < 10; j++)
                {
                    if(j == 0)                                  //contador de notas menores;
                    {
                        if(controle[i][j] < 6)
                        {
                            k++;
                        }
                    }
                    else if(j == 1)
                    {
                        if(controle[i][j] < 6)
                        {
                            l++;
                        }
                    }
                    else if(j == 2)
                    {
                        if(controle[i][j] < 6)
                        {
                            m++;
                        }
                    }
                }
            }
        }
    
    /* saida de dados */
    printf("A primeira prova a nota mais baixa foi %i\n", Pior_Nota_0);
    printf("A segunda prova a nota mais baixa foi %i\n", Pior_Nota_1);
    printf("A terceira prova a nota mais baixa foi %i\n", Pior_Nota_2);
    puts("");
    printf("Na primeira prova tivemos um numero de %i alunos com notas inferiores a 6.\n", k);
    printf("Na segunda prova tivemos um numero de %i alunos com notas inferiores a 6.\n", l);
    printf("Na terceira prova tivemos um numero de %i alunos com notas inferiores a 6.\n", m);
    return 0;
}
/* fim do código */