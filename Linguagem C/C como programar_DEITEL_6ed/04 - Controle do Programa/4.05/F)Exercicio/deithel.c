/*Ache o erro em cada uma das opções a seguir: (Obs.: pode haver mais de um erro.) 
f) O código a seguir deve fornecer como saída os inteiros pares de 2 até 100: contador = 2;
Do { if (contador % 2 == 0) printf ("%d\n", contador); contador += 2; } While (contador < 100);*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int x = 0, y = 0, i = 0;

    /*Bloco de comandos*/
    do
    {
        x += 2;             //Contador fora da função if
        y = x % 10;         //Para saltar uma linha... Melhoria do código
        printf("%d\t", x);  //Fora da função if
        if(y == 0)          //Usando if para saltar linha
        {
            printf("\n");
        }
    } while (x < 100);
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/