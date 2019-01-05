// Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78 */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int n, i, mult = 0, soma = 0;

    /* bloco de comandos */
    for(n = 0; n != -1; )
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        printf("\nOs soma dos divisores do numero %d e: ", n);
        for(i = 1; i <= n; i++)
        {
            mult = n % i;
            if(mult == 0)
            {
                if(i < n && n != i)
                {
                    printf("%d ", i);
                    soma += i;
                    printf("+ ");
                }
                else if(i >= n)
                {
                    printf("= %d\n", soma);
                }
            }
        }
        soma = 0;
        printf("\n\n\n");
    }
    return 0;
}
/* Fim do código */