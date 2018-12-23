/* Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    int num1, num2, maior = 1;

    /* Entrada de dados */
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    /* Bloco de comando */
    if(num1 > num2)
    {
        maior = num1;
        printf("O maior numero: %d\n", maior);
    }
    else
    {
        if(num2 > num1)
        {
            maior = num2;
            printf("O maior numero: %d\n", maior);
        }
        else
        {
            if(num1 == num2)
            {
                printf("Numeros iguais\n");
            }
        }
    }
    return 0;
}
/* Fim do código */