//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Como você leu na Dica 54, o especificador de formato %d instrui printf a exibir um valor inteiro. À medida que seus programas se tornarem mais complexos, você quererá que prin tfformate melhor seus dados. Por exemplo, assuma que você queira imprimir uma tabela na tela do seu computador que é similar à seguinte saída:*/

#include <stdio.h>

int main(void)
{
    int valor = 5;
    
    printf ("%ld\n", valor);
    printf ("%2d\n", valor);
    printf ("%3d\n", valor);
    printf ("%4d\n", valor);
}