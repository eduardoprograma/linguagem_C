/* Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */
#include <stdio.h>
#include <math.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis */
    float Fn, n;
    const float Fibonacci = 1.618034;

    /* entrada de dados */
    printf("Digite um termo enezimo para calculo do numero FIBONACCI: ");
    scanf("%f", &n);

    /* bloco de comando */
    while(n >= 0 || n !=-1)
    {
        Fn = (pow(Fibonacci, n) - pow((1 - Fibonacci), 5)) / sqrt(5);
        printf("F%.0f: %.0f\n\n", n, Fn);
        printf("Digite um termo enezimo para calculo do numero FIBONACCI: ");
        scanf("%f", &n);
    }
    return 0;
}
/* Fim do código */