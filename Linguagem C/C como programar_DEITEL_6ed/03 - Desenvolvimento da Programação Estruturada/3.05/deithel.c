/*Determine os valores de cada variável após o cálculo ser realizado. Admita que no início da execução de cada instrução todas as variáveis possuem o valor 5. 
a) produto *= x++; 
b) resultado = ++x + x;*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x = 5;
    int produto = 0, resultado = 0;

    /*Bloco de comandos*/
    printf("Valor de x: %d\nValor de produto: %d\nValor de resultado: %d\n", x, produto, resultado);
    printf("Farei 10 repeti%c%ces\n", 135, 208);
    system("pause");
    while(x < 10)
    {
        produto *= x++;
        printf("Produto %c %d\n", 130, produto);
    }
    x = 5;
    while(x < 10)
    {
        resultado = ++x + x;;
        printf("Resultado %c %d\n", 130, resultado);
    }

    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/