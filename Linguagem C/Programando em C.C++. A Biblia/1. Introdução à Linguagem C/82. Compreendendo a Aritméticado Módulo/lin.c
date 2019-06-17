//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 13/06/2019

/* Na Dica 81 vimos que C usa o operador de barra para a frente (/) para a divis o. Dependendo do seu aplicativo, algumas vezes você precisar do resto de uma divis o inteira. Nesses casos, use o operador módulo (resto) de C. O programa a seguir, modulo.c, ilustra como usar o operador de módulo de C:*/

#include<stdio.h>

int main(void)
{
    int resto; 
    int result;

    result = 10 / 3 ; 
    resto = 10 % 3; 
    
    printf("10 dividido por 3 é %d Resto %d\n", result, resto);
}