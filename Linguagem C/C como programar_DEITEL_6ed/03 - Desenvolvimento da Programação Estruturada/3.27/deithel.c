/*Usando um método similar ao do Exercício 3.24, encontre os dois maiores valores de 10 números. Nota: Cada número só pode ser fornecido uma única vez.*/
#include <stdio.h.>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int num1, maior1 = 1, maior2 = 0;
    int i = 0, auxiliar = 0;

    /*Entrada de dados*/
    while(i < 10)
    {
        i++;
        printf("Digite um numero inteiro: ");
        scanf("%d", &num1);
        if(num1 > maior1)
        {
            if(maior1 > maior2)
            {
                maior2 = maior1;
            }
            maior1 = num1;
        }
        if(maior1 >= maior2 && num1 != maior1)
        {
            if(num1 > maior2)
            {
                maior2 = num1;
            }
        }
    }

    /*Saída de dados*/
    printf("\n\nO primeiro maior %d, e o segundo maior %d\n\n", maior1, maior2);
    system("pause");
    return 0;
}
/*Fim do código*/