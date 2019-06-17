//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Como você aprendeu, a função printfsuporta especificadores de formato que fornecem informações sobre os tipos dos parâmetros (tais como int, float, char etc.). Para exibir os valores do tipo char com printf, você deverá usar o especificador de formato %c. O programa a seguir, char_sai.c, usa o especificador de formato %c para exibir a letra A na sua tela:*/

#include <stdio.h>

int main(void)
{
    printf("A letra é %c\n", 'A');
    printf("A letra é %c\n", 65);
}