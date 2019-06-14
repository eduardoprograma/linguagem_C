//porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 14/06/2019

/* Como j vimos, as operações bit a bit manipulam um ou mais bits ao mesmo tempo. Quando você precisar manipular bits, talvez seja necess rio utilizar o operador inverso bit a bit da linguagem C (-). O operador inverso bit a bit examina cada bit dentro de um valor e produz um segundo valor como resultado. A operaç o inverso bit a bit torna cada bit que cont m 1 no valor original em 0 no valor resultante, e torna cada bit que cont m 0 no original em 1 no valor resultante. Como um exemplo, assuma que uma vari vel caractere sem sinal contenha o valor 15. Portanto, a operaç o inverso bit a bit retornaria 240, como mostrado aqui:
                            
                            15  00001111 
                            240 11110000

Como você pode ver, cada bit que estava ligado no valor original fica desligado no resultado, e cada bit
que estava desligado no original deixado ligado no resultado. O programa a seguir, invjbit.c, ilustra o uso do operador inverso bit a bit da linguagem C: */

#include<stdio.h>

int main(void)
{
    int valor1 = 0xFF;
    int valor2 = 240;

    printf("O inverso de %X e %.4X\n", valor1, ~valor1);
    printf("O inverso de %d e %d\n", valor2, ~valor2);
}

/* Quando você compilar e executar o programa invjbit.c, sua tela exibir o seguinte:
O inverso de FF é FF00 */