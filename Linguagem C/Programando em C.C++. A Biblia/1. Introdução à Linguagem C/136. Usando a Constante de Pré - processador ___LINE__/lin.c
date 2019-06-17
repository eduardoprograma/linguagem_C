//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/* Ao trabalhar em um projeto grande, algumas vezes você poderá querer que o pré-processador saiba, e potencialmente use, o número da linha atual do arquivo-fonte atual. Por exemplo, se estiver depurando um programa, você poderia querer que o compilador exibisse mensagens a partir de vários pontos dentro do programa, como mostrado aqui: 

Cheguei com sucesso à linha     10
Cheguei com sucesso à linha     301
Cheguei com sucesso à linha     213

O programa a seguir, lin.c, ilustra o uso da constante de pré-processador__ LINE :*/
#include<stdio.h>

int main(void)
{
    printf( "Cheguei com sucesso a linha % d \n " , __LINE__) ; 
    // Outros comandos aqui 
    printf( "Cheguei com sucesso a linha % d \n " , __LINE__ ) ;
}