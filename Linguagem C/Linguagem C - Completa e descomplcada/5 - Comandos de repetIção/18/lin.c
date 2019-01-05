/* Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não. */
#include <stdio.h>

/* inicio do código */
int main(void)
{
    /* declaração das variáveis */
    int n, primo, i;
    int divn = 0;

    /* entrada de dados */
    printf("Digite um numero inteiro para sabermos se este e primo ou nao: ");
    scanf("%d", &n);

    /* bloco de comando */
    while(n != -1)
    {
        for(i = 1; i <= n; i++)
        {
            divn = n % i;
            if(divn == 1 || divn == 2)
            {
                primo++;
            }
            else
            {
                primo++;
            }
            printf("%d\n", divn);
        }
        if(divn == 2)
        {
            printf("Este numero e primo.\n");
        }
        else
        {
            printf("Este numero nao e primo.\n");
        }
        printf("Digite um numero inteiro para sabermos se este e primo(-1 para encerrar): ");
        scanf("%d", &n);
        divn = 0;
    }
    return 0;
}
/* Fim do código */