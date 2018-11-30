/*Escreva um programa que leia um número inteiro e então determine e imprima se ele é par ou ímpar. (Dica: Use o operador resto. Um número par é múltiplo de dois. Qualquer múltiplo de dois deixa resto zero ao ser dividido por 2.)*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int numero = 0;

    /*Entrada de dados*/
    printf("Digite um n%cmero inteiro: ", 163);
    scanf("%d", &numero);

    /*Bloco de comandos*/
    numero %= 2;
    if(numero == 0)
    {
        printf("O n%cmero %c par.\n", 163, 130);
    }
    else
    {
        printf("O n%cmero %c impar.\n", 163, 130);
    }

    system("pause");
    return 0;
}
/*Fim do código*/