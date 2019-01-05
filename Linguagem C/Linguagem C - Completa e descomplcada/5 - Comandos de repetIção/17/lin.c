/* Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd: 
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* declaração de dados */
    int n, i = 0, j = 0;
    /* entrada de dados */
    printf("Digite um numero inteiro (-1 para finalizar): ");
    scanf("%d", &n);
    /* bloco de comando */
    while(i < n)
    {
        i++;
        printf("%d ", i);
        if(i == 1 || i == 3 || i == 6 || i == 10 || i == 15 || i == 21 || i == 28 || i == 36 || i == 45 || i == 55)
        {
            printf("\n");
        }
    }
    printf("\nFIM DO PROGRAMA\n");
    return 0;
}
/* Fim do código */