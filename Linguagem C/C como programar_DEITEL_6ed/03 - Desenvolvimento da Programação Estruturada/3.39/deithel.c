/*Escreva um programa em C que leia um inteiro, determine quantos dígitos são iguais a 7 e imprima esta informação.*/
#include <stdio.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de varáveis*/
    long long num, teste_num;               /* número a ser testado */
    long long ordem_de_magnitude;           /* ordem de magnitude do número num */
    int i;
    int quantidade = 0;                     /* quantidade de dígitos igual a 7 */

    /*Entrada de dados*/
    printf("Digite um numero: ");
    scanf("%lld", &num);

    /*Bloco de comandos*/
    ordem_de_magnitude = (int) log10(num);
    teste_num = num;
    for(i = ordem_de_magnitude; i >= 0; i--) {
        long long multiplicador = pow(10, i);
        int digito = teste_num / multiplicador;
        teste_num -= digito * multiplicador;

        if (digito == 7) {
            quantidade++;
        }
    }

    /*Saída de dados*/
    printf("O número %lld contém %d dígitos iguais a 7.\n", num, quantidade);

    return 0;
}
/*Fim do código*/