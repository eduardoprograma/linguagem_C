/*Escreva novamente o programa da Fig. 4.2 de modo que a inicialização da variável contador seja feita na declaração e não na estrutura for.*/
// Fig. 4.2: fig04_02.c 2 
// Counter-controlled repetition with the for statement. 3 
#include <stdio.h>  
int main(void)
{
    /*Declaração de variáveis*/
    unsigned int counter;

    /*Inicialização*/
    counter = 1;
    /*Bloco de comandos*/
    for(; counter <= 10; ++counter) 
    { 
        printf("%u\n", counter);
    } 
    return 0;
}