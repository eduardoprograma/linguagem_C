/* Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int n, soma = 0;

    /* bloco de comando */
    for(n = 1000; n >= 0; n--)
    {
        if((n % 3) == 0 || (n % 5) == 0)
        {
            soma += n;
        }
    }
    
    /* saída de dados */
    printf("\nA soma e %d\n", soma);
    return 0;
}
/* Fim do código */