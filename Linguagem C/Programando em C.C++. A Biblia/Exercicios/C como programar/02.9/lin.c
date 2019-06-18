// Programa: lin.c 
// Escrito por: Eduardo Felizardo Cândido
// Data de criação:  
// Propósito: Capitulo 2 - C Como programar

/*2.9 Escreva uma única instrução em C, ou linha única, que cumpra os comentários a seguir:
a) Exiba a mensagem ‘Digite dois números.’ 
b) Atribua o produto das variáveis b e c à variável a.
c) Indique um programa que realize um cálculo de folha de pagamento (ou seja, use um texto que ajude a documentar um programa).
d) Informe três valores inteiros usando o teclado e coloque esses valores nas variáveis inteiras a, b e c.*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a, b, c;    //Declaração das variáveis

    a = b = c = 0;  //inicialização das variaveis.

    printf("Digite dois numeros: ");    // Atende a letra a) do exercicío.
    scanf("%d%d", &b, &c);              // Atende a letra b) do exercicío.
    a = b * c;                          
    printf("Este e um programa para calculo de folha de pagamento.\n"); //Atende a letra c) do exercicío.
    printf("Digite tres numeros inteiros: ");                           //Começa atender a ultima questão.
    scanf("%d%d%d", &a, &b, &c);                                        //Atende a letra d) do exercicío.
}