/* Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Inicio do código */

struct retangulo{
    float x;
    float y;
    float area;
    float comprimento_Diagonal;
    float perimetro;
}retang;

int main()
{
    /* Declaração de varíaveis */
    int i, j;

    /* Entrada de dados */
    printf("Digite o comprimento do retangulo: ");
    scanf("%f", &retang.x);
    printf("Digite a largura do retangulo: ");
    scanf("%f", &retang.y);
    printf("Muito bem!!!\nAperte enter para prosseguir\n");
    system("pause");

    /* Calculos */
    retang.area = retang.x * retang.y;
    retang.comprimento_Diagonal = sqrt((pow(retang.x, 2) + pow(retang.y, 2)));
    retang.perimetro = 2 * (retang.x + retang.y);

    /* Saída de dados */
    for (i = 0; i < retang.y; i++)
    {
        for(j = 0;j < retang.x; j++)
        {
            printf(". ");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Area = %.2f\n\n", retang.area);
    printf("Comprimento Diagonal = %.2f\n\n", retang.comprimento_Diagonal);
    printf("Perimentro = %.2f\n", retang.perimetro);

    return 0;
}

/* Fim do código */