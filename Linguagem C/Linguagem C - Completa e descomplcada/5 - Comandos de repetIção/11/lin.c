/* Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int n, i, mult = 0;

    /* bloco de comandos */
    for(n = 0; n != -1; )
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        printf("\nOs divisores do numero %d sao: ", n);
        for(i = 1; i <= n; i++)
        {
            mult = n % i;
            if(mult == 0)
            {
                printf("%d\t", i);
            }
        }
        printf("\n\n\n");
    }
    return 0;
}
/* Fim do código */