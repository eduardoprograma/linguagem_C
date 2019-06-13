//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 13/06/2019

/* Quase todos os seus programas, exceto os mais simples, efetuar o operações aritméticas, tais como adição, subtração, multiplicação ou divisão. Para efetuar essas operações matemáticas básicas, use os operadores descritos na Tabela 81.

Tabela 81               Operadores aritméticos b sicos em C.

Operador                            Propósito 
****************************************************
+                                   Adição
-                                   Subtração
*                                   Multiplicação 
/                                   Divisão

O programa a seguir, ilustra como usar os operadores aritméticos básicos de C:*/

#include<stdio.h>

int main(void)
{
    int segundos_na_hora; 
    float media;
    segundos_na_hora = 60 * 60; 
    media = ( 5 + 10 + 15 + 20 ) / 4; 
    
    printf("Número de segundos em uma hora %d\n", segundos_na_hora); 
    printf("A média de 5, 10, 15, e 20 é %f\n", media);
    printf("O número de segundos em 48 minutos é %d\n", segundos_na_hora -12 * 60);
}

