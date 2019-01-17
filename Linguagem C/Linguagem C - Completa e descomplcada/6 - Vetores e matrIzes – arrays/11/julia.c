/* Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números. */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* inicio */
int main(void)
{
    /* declaracao */
    float reais = 0;
    float vetor[20] = {0};
    float vetorQ[20] = {0};
    int i, cont = 0;

    /* bloco de comandos */
    for(i = 0; i <= 19 && reais != -1; i++)
    {
        printf("%d = digite um numero real (-1 para encerrar): ", i);
        scanf("%f", &reais);
        vetor[i] = reais;
    }
    
    /* bloco de calculo */
    for(i = 0; i <= 19; i++)
    {
        vetorQ[i] = pow(vetor[i], 2);
    }
    /* saida do vetor*/
    printf("\n\nSaida do vetor\n\n");
    for(i = 0; i <= 19; i++)
    {
        printf("%.2f\t", vetor[i]);
        if(i != 0 && i % 9 == 0 && cont != 1)
        {
            cont++;
            printf("\n");
        }
    }
    printf("\n");
    cont = 0;
    printf("Saida do vetor eevado ao quadrado\n\n");
    /* saida do quadrado */
    for(i = 0; i <= 19; i++)
    {
        printf("%.2f\t", vetorQ[i]);
        if(i != 0 && i % 9 == 0 && cont != 1)
        {
            cont++;
            printf("\n");
        }
    }
    return 0;
}
/* fim */