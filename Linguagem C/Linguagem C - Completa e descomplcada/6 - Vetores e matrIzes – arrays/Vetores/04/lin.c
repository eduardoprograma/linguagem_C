/* Faça um programa que possua um array de nome A que armazene seis números inteiros. O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse array: 1, 0, 5, −2, −5, 7.
b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre na tela essa soma.
c) Modifique o array na posição 4, atribuindo a essa posição o valor 100. 
d) Mostre na tela cada valor do array A, um em cada linha. */
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 6
/* inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int A[NUMERO] = {0};
    int i, soma = 0;

    /* entradade dados */
    for(i = 0; i <= 5; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &A[i]);
        if(i == 0 || i == 1 || i == 5)
        {
            soma += A[i];
            printf("%d, %d\n", i, soma);
        }
    }
    printf("Digite um valor inteiro: ");
    scanf("%d", &A[3]);

    /* saída de dados */
    printf("\nOs numeros da array:\n");
    for(i = 0; i <= 5; i++)
    {
        printf("%d\n", A[i]);
    }
    printf("\n A soma: %d\n\n", soma);
    return 0;
}
/* fim do código */