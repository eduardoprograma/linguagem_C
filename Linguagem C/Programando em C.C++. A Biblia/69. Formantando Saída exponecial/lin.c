//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de Criação: 12/06/2019

/*Na Dica 68 foi visto como usar o especificador de formato %/para formatar valores em ponto flutuante. Usando técnicas de formatação similares, você pode instruir printf a exibir saída em ponto flutuante em um formato exponencial. O programa a seguir, exp_fmt.c, ilustra a saída formatada em exponencial.*/

#include <stdio.h>

int main(void)
{
    float valor = 1.23456;
    
    printf ("%12.le\n", valor);
    printf ("%12.3e\n", valor);
    printf ("%12.5e\n", valor);
}