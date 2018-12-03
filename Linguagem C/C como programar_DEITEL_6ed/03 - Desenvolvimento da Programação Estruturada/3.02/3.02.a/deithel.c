/*Escreva quatro instruções diferentes em C que adicionem 1 a uma variável inteira x.*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x = 0;

    /*Saída de dados*/
    printf("%d\n", x + 1);
    printf("%d\n", x += 1);
    printf("%d\n", x++);
    printf("%d\n", ++x);
    
    system("pause");
    return 0;
}
/*Fim do código*/