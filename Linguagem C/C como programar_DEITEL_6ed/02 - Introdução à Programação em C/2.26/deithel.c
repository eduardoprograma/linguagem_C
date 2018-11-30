/*Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é múltiplo do segundo. (Dica: Use o operador resto.)*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int num1, num2;
    int resultado = 0;

    /*Entrada de dados*/
    printf("Digite o primeiro n%cmero: ", 163);
    scanf("%d", &num1);
    printf("Digite o segundo n%cmero: ", 163);
    scanf("%d", &num2);

    /*Bloco de comandos*/
    resultado = num1 % num2;
    //printf("%d\n", resultado);            //Serve para testar o código
    if(resultado == 0)
    {
        printf("O primeiro n%cmero %c multiplo do segundo.\n", 163, 130);
    }
    else
    {
        printf("O primeiro n%cmero n%co %c multiplo do segundo.\n", 163, 198, 130);
    }

    system("pause");
    return 0;
}
/*Fim do código*/