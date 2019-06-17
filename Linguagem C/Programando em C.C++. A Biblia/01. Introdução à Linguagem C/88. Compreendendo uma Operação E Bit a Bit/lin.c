//Programa: lin.c
//Escriot por: Eduardo Felizardo Cândido
//Data de Criação: 14/06/2019

/* Como visto na Dica 87, você pode descobrir que possível aumentar o desempenho do seu programa ou reduzir os requisitos de memória dele usando as operações bit a bit. As operações bit a bit manipulam valores um ou mais bits ao mesmo tempo. Quando precisar manipular dados um ou mais bits ao mesmo tempo, você pode utilizar 0 operador E bit a bit da linguagem C (&). O operador E bit a bit examina cada bit dentro de dois valores e gera um terceiro valor como resultado. Por exemplo, assuma que duas vari veis contenham os valores 5 e 7, cujos bits s o, respectivamente, 00000101 e 00000111.0 operador E bit a b it retorna o valor 5, como mostrado aqui:

                                        5   00000101
                                        7   00000111
                                            ________
                                        5   00000101
                                        
Se um bit dentro de ambos os termos tiver um valor 1, o operador E b it a b it ligar o bit correspondente dentro do resultado. Se um bit dentro de um dos dois termos cont m um valor 0, o operador E bit a bit deixar em 0 o bit correspondente dentro do resultado. Neste caso, os bits 0 e 2 contêm valores 1 em ambos os termos, de modo que o resultado tem valores 1 nos bits 0 e 2, e valores 0 nos bits restantes. O programa a seguir, e_bit.c, ilustra o uso do operador E bit a b it da linguagem C:*/

#include<stdio.h>

int main(void)
{
    printf("0 & 0 e %d\n", 0 & 0);
    printf("0 & 1 e %d\n", 0 & 1);
    printf("1 & 0 e %d\n", 1 & 0);
    printf("1 & 1 e %d\n", 1 & 1);
    printf("__________\n");
    printf("1 & 2 e %d\n", 1 & 2);
    printf("15 & 127 e %d\n", 15 & 127);
}

/* Quando você compilar e executar o programa e_bit.c, sua tela exibir o seguinte:
0 & 0 é 0 
0 & 1 é 0 
1 & 0 é 0
1 & 1 é 1 
1 & 2 é 0 
15 & 127 é 15 */