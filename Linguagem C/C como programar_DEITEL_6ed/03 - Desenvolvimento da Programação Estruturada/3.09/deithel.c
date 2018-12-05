/*O que há de errado com a seguinte estrutura de repetição while?
while (z >= 0) 
    soma += z;*/
//Será uma sequencia ifinita... digite crtl + c para parar a repetição
//Falta o printf, inicialização...

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de varáveis*/
    int z = 1, soma = 0;

    /*Bloco de comandos*/
    while(z > 0)
    {
        soma += z;
        printf("A soma: %d\n", soma);
    }

    system("pause");
    return 0;
}
/*Fim do código*/