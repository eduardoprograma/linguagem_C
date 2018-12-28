/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura): 
• Homens: (72,7 * h) – 58 
• Mulheres: (62,1 * h) – 44,7 */
#include <stdio.h>
#include <math.h>

/* Inicio do código */
int main(void)
{
    /* Declaração das variáveis */
    float h, peso = 0;
    int sex;

    /* Entrada de dados */
    printf("Digite a altura: ");
    scanf("%f", &h);
    printf("Digite o sexo (1- Homem, 2- Mulher): ");
    scanf("%d", &sex);

    /* Bloco de comandos */ 
    switch (sex)
    {
        case 1:
            peso = (72.7 * h) - 58;
            printf("\nO peso ideal para este homem: %.2fkg\n", peso);
            break;
        case 2:
            peso = (62.1 * h) - 44.7;
            printf("\nO peso ideal para esta mulher: %.2fkg\n", peso);
            break;
        default:
            break;
    }

    return 0;
}
/* Fim do Código */
