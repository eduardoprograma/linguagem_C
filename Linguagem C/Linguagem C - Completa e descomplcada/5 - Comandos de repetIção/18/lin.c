/* Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não. */
#include <stdio.h>

/* inicio do código */
int main(void)
{
    /* declaração das variáveis */
    int n, primo = 0, i;
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
            if(divn == 0)
            {
                primo++;
            }
            //printf("%d, %d\n", divn, primo);  //Teste
        }
        if(primo <= 2)
        {
            printf("\nEste numero e primo.\n\n");
        }
        else
        {
            printf("\nEste numero nao e primo.\n\n");
        }
        printf("Digite um numero inteiro para sabermos se este e primo(-1 para encerrar): ");
        scanf("%d", &n);
        divn = 0;
        primo = 0;
    }
    return 0;
}
/* Fim do código */