/*Escreva uma instrução ou um conjunto de instruções em C para realizar cada uma das seguintes tarefas: 
a) Somar os inteiros ímpares entre 1 e 99 usando uma estrutura for. Admita que as variáveis inteiras soma e contagem já foram declarados.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int impar = 0, par = 0;
    int divi = 0;

    /*Bloco de comando*/
    for(int i = 0; i <= 100; i++)
    {
        divi = i % 2;
        if(divi == 1)
        {
            impar += i;
        }
    }
    printf("\nA soma dos numeros impares: %d\n\n", impar);
    system("pause");
    return 0;
}
/*Fim do código*/