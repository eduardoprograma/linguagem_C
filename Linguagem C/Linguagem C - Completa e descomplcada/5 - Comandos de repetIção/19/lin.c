/* Faça um programa que calcule e escreva o valor de S:
S = (1/1) + (3/2) + (5/3) + (7/4) + ... + (99/55) */
#include <stdio.h>

/* Inicio do programa */
int main(void)
{
    /* declaração de variáveis */
    int i, S = 0, n = 1;

    /* bloco de comandos */
    for(i = 1; i <= 55; i++)
    {
        S += n / i;
        n += 2; 
    }
    /* saída */
    printf("\nO valor de S: %d\n\n", S);
    return 0;
}
/* Fim do programa */