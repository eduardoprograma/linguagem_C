/*Escreva uma instrução ou um conjunto de instruções em C para realizar cada uma das seguintes tarefas: 
c) Calcule o valor de 2,5 elevado ao cubo (potência 3) usando a função pow. Imprima o resultado com uma precisão de 2 em um campo com largura de 10 posições. Qual o valor impresso.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração das variáveis*/
    float x = 2.5, resultado = 0;

    /*Bloco de comando*/
    resultado = pow(x, 3);
    printf("O numero %10.2f elevadoa potencia de 3: %10.2f\n", x, resultado);
    system("pause");
    return 0;
}
/*Fim do código*/