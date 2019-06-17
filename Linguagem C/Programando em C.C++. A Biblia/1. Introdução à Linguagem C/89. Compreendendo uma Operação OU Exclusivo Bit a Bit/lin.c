//Programa: lim=n.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 14/06/2019

/* Como você j aprendeu, as operações bit a bit manipulam um ou mais bits ao mesmo tempo. Quando você estiver manipulando os bits de um valor, em algumas situações precisar utilizar o operador OU exclusivo (A), que examina os bits em dois valores e liga os bits do resultado com base na tabela verdade mostrada na Tabela 89.

Tabela 89               Resultados de uma operaç o OU exclusivo bit a bit.

X               Y               Resultado
*****************************************
0               0               0
0               1               1
1               0               1
1               1               1
*****************************************

Suponha que duas vari veis contenham os valores 5 e 7, cujos bits s o, respectivamente, 00000101 e 00000111. O operador OU exclusivo bit a bit retorna o valor 2, como mostrado aqui:

                                5   00000101
                                7   00000111
                                    ________
                                2   00000010
                                
O programa a seguir, lin.c, ilustra o uso do operador OU exclusivo bit a bit da linguagem C:
*/
#include<stdio.h>

int main(void)
{
    printf("0 ^ 0 e %d\n", 0 ^ 0);
    printf("0 ^ 1 e %d\n", 0 ^ 1);
    printf("1 ^ 0 e %d\n", 1 ^ 0);
    printf("1 ^ 1 e %d\n", 1 ^ 1);
    printf("__________\n");
    printf("1 ^ 2 e %d\n", 1 ^ 2);
    printf("15 ^ 127 e %d\n", 15 ^ 127);
}

/* Quando você compilar e executar o programa ou_exclu.c, sua tela exibir o seguinte:
0 ^ 0 é 0 
0 ^ 1 é 1 
1 ^ 0 é 1
1 ^ 1 é 0 
1 ^ 2 é 3 
15 ^ 127 é 112 */