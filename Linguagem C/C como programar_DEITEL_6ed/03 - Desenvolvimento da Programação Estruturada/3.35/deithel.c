/*Um palíndromo é um número ou texto que é lido da mesma forma tanto da direita para a esquerda como da esquerda para a direita. Por exemplo, cada um dos inteiros seguintes, de cinco dígitos, é palíndromo: 12321,55555,45554 e 11611. Escreva um programa que leia um inteiro de cinco dígitos e determine se ele é palíndromo ou não. (Sugestão: Use os operadores divisão e resto, ou modulus, para separar o número em seus algarismos isolados.)*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
/* Exercício 3.35 Solução */
int main (void)
{
    /*Declaração de varáveis*/
    int numero = 0;             /* número de entrada */
    int temp = 0;               /*inteiro temporário*/
    int firstDigit = 0;         /* primeiro dígito de entrada */
    int secondDigit = 0;        /* segundo dígito de entrada */
    int fourthDigit = 0;        /* quarto dígito de entrada */
    int fifthDigit = 0;         /* quinto dígito de entrada */

    /*Entrada de dados*/
    printf ("Digite um numero de cinco digitos:"); /* obter número */
    scanf ("%d", &numero);
    
    /*Calculo*/
    temp = numero;
    
    /* determina o primeiro dígito por divisão inteira por 10000 */
    firstDigit = temp / 10000;
    temp = numero % 10000;

    /* determina o segundo dígito por divisão inteira em 1000 */
    secondDigit = temp / 1000;
    temp = numero % 100;

    /* determina o quarto dígito por divisão inteira por 10 */
    fourthDigit = temp / 10;
    fifthDigit = numero % 10;

    /* se primeiro e quinto dígitos forem iguais */
    if(firstDigit == fifthDigit) 
    {
        /* se segundo e quarto dígitos forem iguais */
        if (secondDigit == fourthDigit) 
        {
            /* o número é palíndromo */
            printf ("%d e um palindromo\n", numero);
        }
        else 
        {
            /* number não é um palíndromo */
            printf ("%d nao e um palindromo\n", numero);
        } /* end else */

    } /* fim se */
    else 
    {
        /* number não é um palíndromo */
        printf ("%d nao e um palindromo\n", numero);
    } /* end else */
    return 0; /* indica terminação satisfatória */
} 
/*Fim do código*/