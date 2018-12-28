/* Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir: */
#include <stdio.h>
#include <math.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis */
    float num1, num2, num3;
    int calculo; 
    float resultado = 0;

    /* Entrada de dados */
    printf("Digite 3 numeros inteiros: ");
    scanf("%f%f%f", &num1, &num2, &num3);
    printf("OPCAO DE CALCULO;\n1-Geometrica:\n2-Ponderada:\n3-Harmonica:\nAritmetica:\nEscolha uma opcao de calculo(-1 para finalizar): ");
    scanf("%d", &calculo);

    /* Bloco de comando */
    while(calculo != -1)
    {
        switch (calculo)
        {
            case 1:
                resultado = num1 * num2 * num3;
                printf("Resultado: %.0f\n\n", resultado);
                break;
            case 2:
                resultado = (num1 + 2 * num2 + 3 * num3) / 6;
                printf("Resultado: %.2f\n\n", resultado);
                break;
            case 3:
                resultado = 1 / ((1 / num1) + (1 / num2) + (1 / num3));
                printf("Resultado: %.2f\n\n", resultado);
                break;
            case 4:
                resultado = (num1 + num2 + num3) / 3;
                printf("Resultado: %.2f\n\n", resultado);
                break;
            default:
                break;
        }
        printf("Digite 3 numeros inteiros: ");
        scanf("%f%f%f", &num1, &num2, &num3);
        printf("OPCAO DE CALCULO;\n1-Geometrica:\n2-Ponderada:\n3-Harmonica:\nAritmetica:\nEscolha uma opcao de calculo(-1 para finalizar): ");
        scanf("%d", &calculo);
    }
    return 0;
}
/* Fim do código */