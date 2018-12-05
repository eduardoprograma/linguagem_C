/*Escreva instruções simples em C que 
a) Obtenha uma variável inteira x com scanf. 
b) Obtenha uma variável inteira y com scanf. 
c) Inicialize a variável inteira i com o valor 1.
d) Inicialize a variável inteira potência com o valor 1. 
e) Multiplique a variável potência por x e atribua o resultado a potência. 
f) Incremente a variável y de 1. 
g) Verifique se y é menor que ou igual a x. 
h) Forneça a variável inteira potência com printf.*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x = 0, y = 0, i = 1;
    int potencia = 1;

    /*Entrada de dados*/
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    /*Bloco de comandos*/
    potencia *= x;
    y += 1;
    if(y > x)
    {
        printf("Maior que x.\n");
    }
    else if(y < x)
    {
        printf("Menor que x.\n");
    }
    else
    {
        printf("x e y s%co iguais.\n", 198);
    }

    /*Saída de dados*/
    printf("O valor de potencia %c: %d\n", 130, potencia);

    system("pause");
    return 0;
}
/*Fim do código*/