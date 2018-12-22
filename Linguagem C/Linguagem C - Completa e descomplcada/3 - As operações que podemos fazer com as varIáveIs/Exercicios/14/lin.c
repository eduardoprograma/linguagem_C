/*Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.*/
#include <stdio.h>
#include <ctype.h>

/* Inicio do código */
int main(void)
{
    /* Decaração de variáveis */
    char letra = ' ';

    /* Entrada de dados */
    printf("Digite uma letra maiuscula: ");
    scanf("%c", & letra);

    /* code */
    letra += 32; 

    /* code */
    printf("\nA letra digita: %c", letra);
    return 0;
}

/* Fim do código */