/* Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */
#include <stdio.h>

/* Inicio do código */int main(void)
{
    /* declaração de variáveis */
    int i = 0, par = 0;

    /* bloco de comando */
    do
    {
        i++;
        if((i % 2) == 0)
        {
            par += i;
        }
    }while(i <= 50);

    /* saída de dados */
    printf("A soma dos 50 numeros pares: %d\n", par);
    return 0;
}
/* Fim do código */