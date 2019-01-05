/* Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja: Hn = 1 + (1/2) + (1/3) + (1/4) + (1/5) +...+ (1/n)
Apresente um programa que calcule o valor de qualquer Hn.*/
#include <stdio.h>

/* Inciodo código */int main(int argc, char const *argv[])
{
    /* declaração de variáveis */
    float Hn = 0, k, n;

    /* bloco de comando */
    while(n != -1)
    {
        printf("Digite um numero: ");
        scanf("%f", &n);
        for(k = 1;k <= n; k++)
        {
            Hn += 1 / k;
        }
        printf("O termo %.0f, tem o seguinte numero Harmonico %.2f\n", n, Hn);
        Hn = 0;
    }
    return 0;
}
/* Fim do código */