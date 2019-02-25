/* Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o maior valor contido nessa matriz e a sua localização (linha e coluna). */
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 4
/* inicio do código */
int main()
{
    /* declaração de varipaveis */
    int matriz[NUMERO][NUMERO][NUMERO][NUMERO] = {0};
    int i = 0, j = 0, k = 0, M = 0;
    int menor = 0, maior = 0;
    int localizacao[NUMERO][NUMERO][NUMERO][NUMERO] = {0}, N = 0, O = 0, P = 0, Q = 0;

    /* entrada de dados */
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            for(k = 0; k < 4; k++)
            {
                for(M = 0; M < 4; M++)
                {
                    printf("Digite Um valor inteiro: ");
                    scanf("%i", &matriz[i][j][k][M]);
                }
            }
        }
    }
    menor = matriz[i][j][k][M];

    /* bloco de comandos */
    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            for(k = 0; k < 4; k++)
            {   
                for(M = 0; M < 4; M++)
                {
                    if(menor >= matriz[i][j][k][M])
                    {
                        menor = matriz[i][j][k][M];
                    }
                    else if (maior <= matriz[i][j][k][M])
                    {
                        maior = matriz[i][j][k][M];
                        N = i, O = j, P = k, Q = M;
                        localizacao[N][O][P][Q];
                    }
                }
            }
        }
    }
    /* saida de daos */
    printf("O menor numero da matris 3 x 3 e: %i\n\n", maior);
    printf("E sua localização e [%i][%i][%i][%i]\n\n", N, O, P, Q);
    return 0;
}
/* fim do código */