/*Ache o erro em cada uma das opções a seguir: (Obs.: pode haver mais de um erro.) 
d) for (x = .000001; x <= .0001; x += .000001)
printf("%.7f\n", x);*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    float x;

    /*Bloco de comandos*/
    for(x = 0.000001; x <= 0.0001; x += 0.000001)
    {
        printf("%.6f\n", x);    //Só encontrei a precisão diferente
    }
    system("pause");
    return 0;
}
/*Fim do código*/