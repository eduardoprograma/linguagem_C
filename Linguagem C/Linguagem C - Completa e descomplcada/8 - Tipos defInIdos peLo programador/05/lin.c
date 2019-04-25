/* Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não dentro do retângulo. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Inicio do código */
struct retangualo
{
    float x;
    float y;
    float area;
    float comprimento_diagonal;
    float perimetro;
}retang;

int main()
{
    /* declaração de variáveis */
    int etrutura_retangulo = 0;
    int i, j;
    int k = 0, z = 0, acumulo = 0;

    /* entrada de dados */
    printf("Digite o comprimento do retangulo: ");
    scanf("%f", &retang.x);
    printf("Digite a largura do retangulo: ");
    scanf("%f", &retang.y);
    printf("\n");
    system("pause");
    printf("Muito bem!!!\nTecle ENTER para continuar...\n\n");
    printf("Digite uma coordenada x,y:\n");
    printf("Digite o valor para x: ");
    scanf("%i", &k);
    printf("Digite um valor para y: ");
    scanf("%i", &z);
    printf("\n\n");

    /* impressão do retangulo */
    for(i = 0; i < retang.y; i++)
    {
        for(j = 0; j < retang.x; j++)
        {
            printf(". ");
        }
        printf("\n");
    }

    /* comparar as coordenadas */
    for(i = 0; i < retang.y; i++)
    {
        for(j = 0; j < retang.x; j++)
        {
            if(z == j && k == i)
            {
                acumulo++;
            }
        }
    }
    if(acumulo == 1)
    {
        printf("As coordenadas estao dentro do retangulo.\n\n");
    }
    else
    {
        printf("As coordenadas nao estoa dentro do retangulo.\n\n");
    }
}

/* Fim do código */