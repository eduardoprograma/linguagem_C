/* Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração das variáveis */
    float n1, n2, soma = 0, sub =0 , mult = 0, divi  = 0; 
    int opcao;

    /* Entrada de dados */
    printf("Esccolha uma opcao:\n");
    printf("1-Soma:\n2-Subtracao:\nmultiplicacao:\nDivisao:\nEntre com a opcao: ");
    scanf("%d", &opcao);
    printf("Entre agora com dois valores: ");
    scanf("%f%f", &n1, &n2);

    /* Bloco de comando */
    switch (opcao)
    {
        case 1:
            soma = n1 + n2;
            printf("\nA soma e: %.2f", soma);
            break;

        case 2:
            sub = n1 - n2;
            printf("\nA subtracao e: %.2f", sub);
            break;

        case 3:
            mult = n1 * n2;
            printf("\nO produto e: %.2f", mult);
            break;

        case 4:
            divi = n1 / n2;
            printf("\nA divisao e: %.2f", divi);
            break;

        default:
            printf("\nValor nao configura opcao.\n");
            break;
    }
    return 0;
}
/* Fim do código */