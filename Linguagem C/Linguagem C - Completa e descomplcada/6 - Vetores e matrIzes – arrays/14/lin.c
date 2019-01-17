/* Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números em que m é a média desse vetor. Considere n = 10. O vetor v deve ser lido do teclado.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
#define VARIAVEIS 10
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    float V[VARIAVEIS] = {0};
    float media = 0, somaMA = 0;
    float DP = 0, somaDP = 0;
    int i;

    /* informação */
    puts("este programa foi desenvolvido para calcular o desvio-padrao.");;

    /* bloco de comandos */
        /* Entrada de dados */
        for(i = 0; i <= (VARIAVEIS - 1); i++)
        {
            printf("\nDigite um numero: ");
            scanf("%f", &V[i]);
        }
        /* Média Aritimética */
        for(i = 0; i <= (VARIAVEIS - 1); i++)
        {
            somaMA += V[i];
        }

        media = somaMA / VARIAVEIS; //Mediana 
        //printf("\nmedia = %.2f\n", media);    //Teste do calculo

        /* Desvio-Padrão */
        for(i = 0; i <= (VARIAVEIS - 1) ; i++)
        {
            somaDP += pow((V[i] - media), 2);
        }
        
        DP = sqrt(somaDP / VARIAVEIS);
    
    /* fim do bloco de comandos */

    /* saída de dados */
    printf("O desvio padrao: %.2f", DP);

    return 0;
}
/* fim do código */