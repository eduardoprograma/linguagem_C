/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0) */
#include <stdio.h>
#include <string.h>
struct position
{
    int vetor[2];
};
int main()
{
    /* declaração de variáveis */
    struct position c;
    int i, x  = 0, y  = 0;
    
    /* Entrada de dados */
    for(i = 0; i < 2; i++)
    {
        if(i == 0)
        {
            printf("Digite o valor de X: ");
            scanf("%d", &c.vetor[i]);
        }
        else
        {
            printf("Digite o valor de Y: ");
            scanf("%d", &c.vetor[i]);
        }
    }

    /* bloco de comando */
    for(i = 0; i < 2; i++)
    {
        if(i == 0)
        {
            x = 0 - c.vetor[i];
        }
        else
        {
            y = 0 - c.vetor[i];
        }
        
    }
    printf("A distancia de do vetor ao ponto de origem e ( %d, %d).\n\n", x, y);
    return 0;
}