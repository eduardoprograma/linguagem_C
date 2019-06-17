//Programa: lin.c
//escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/*Na Dica 154 você criou a macro SOMA, que somou dois valores juntos. As macros seguintes, MINe MAX, retornam o mínimo e o máximo de dois valores:

#define MIN(x, y) (((x) < (y)) ? (x): (y)) 
#define MAX(x, y) (((x) > (y)) ? (x): (y))

O programa a seguir, min_max.c, ilustra como usar as macros MIN e MAX: */
#include<stdio.h>

#define MIN(x, y) (((x) < (y)) ? (x): (y)) 
#define MAX(x, y) (((x) > (y)) ? (x): (y))

int main(void)
{
    printf("O maior entre 10.0 e 25.0 é %0.2f\n", MAX(10.0, 25.0)); 
    printf("O menor entre 3.4 e 3.1 é %0.2f\n", MIN(3.4, 3.1));
}