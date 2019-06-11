//Programa: lin.c
//Escriot por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Como você sabe, a função printf suporta especificadores de formato que lhe oferecem informações sobre os tipos de seus parâmetros (tais como int, float, char etc.). Para exibir valores do tipo float com printf, você deverá usar o especificador de formato %f. O programa a seguir, floatsai.c, usa o especificador de formato %/para exibir valores em ponto flutuante:*/

#include <stdio.h>

int main(void)
{
    float preco = 525.75;
    float imposto_vendas = 0.06;

    printf("O custo do item é %f\n", preco);
    printf("O imposto sobre a venda do item é %f\n", preco * imposto_vendas);
}