/*Escreva uma instrução em C que realize as seguintes tarefas. 
a) Declare as variáveis soma e x do tipo int. 
b) Inicialize a variável x com o valor 1. 
c) Inicialize a variável soma com o valor 0. 
d) Adicione a variável x à variável soma e atribua o resultado à variável soma. 
e) Imprima "A soma e :" seguido do valor da variável soma.*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declare as varáveis*/
    int soma = 0, x = 1;
    soma += x;

    /*Bloco de comandos*/
    printf("A soma %c: %d", 163, soma);

    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/