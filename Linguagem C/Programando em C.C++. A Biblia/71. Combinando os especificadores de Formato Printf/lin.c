//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de Criação: 12/06/2019

/*Várias dicas apresentadas nesta seção discutiram vários especificadores de formato de printf. À medida que você usar os especificadores de formato de p rin tf algumas vezes você poderá querer aproveitar dois ou mais especificadores de formato. Por exemplo, você pode querer exibir um valor hexadecimal justificado à esquerda, precedido pelos caracteres Ox. Em tais casos, simplesmente coloque cada um dos especificadores após o %. O programa a seguir, todo_fmt.c, ilustra o uso de múltiplos especificadores de formato:*/

#include <stdio.h>

int main(void)
{
    int int_valor = 5;

    printf("Justificado à esquerda com sinal %-+3d\n", int_valor);  //Combinando especificadores.
    printf("Justificado à esquerda com sinal %+3d\n", int_valor);   //Apenas para mostrar a diferença:  
}