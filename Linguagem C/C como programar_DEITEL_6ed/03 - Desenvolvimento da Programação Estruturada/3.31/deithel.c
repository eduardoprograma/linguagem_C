/*(Problema de Else Oscilante) Determine a saída de cada um dos programas seguintes quando x é 9 e y é 11 e quando x é 11 e y é 9. Observe que o compilador ignora os recuos em um programa em C. Além disso, o compilador C sempre associa o else com o if anterior, a menos que tenha sido dito algo em contrário pela colocação de chaves { }. Como, à primeira vista, o programador pode não ter certeza de a que if um else corresponde, isso é chamado problema do "else oscilante". Eliminamos os recuos dos códigos a seguir para tornar o problema mais interessante. (Sugestão: Aplique as convenções de recuos que você aprendeu.)
a) if (x < 10) 
    if (y < 10 ) 
        printf("*****\n"); 
    else 
        printf("#####\n"); 
        printf("$$$$$\n"),• 
b) if (x < 10) < if (y > 10) printf("*****\n"); else { printf("#####\n"); printf("$$$$$\n"); }*/
#include <stdio.h>
#include <stdlib.h>
/*Inici do código*/
int main(void)
{
    /*Declare as variáveis*/
    int x, y;

    /*Inicialização*/
    x = 9;
    y = 11;

    /*Questão a)*/
    if ( x < 10 )
        if ( y > 10 )
            puts( "*****" );
        else
            puts( "#####" ); 
            puts( "$$$$$" );
    
    printf("\n");
    
    /*Inicialização*/
    x = 11;
    y = 9;

    /*Questão (b*/
    if ( x < 10 )
    {
        if ( y > 10 )
        {
            puts( "*****" ); 
        }
        else 
        { 
            puts( "#####" ); 
            puts( "$$$$$" ); 
        }
    }
    printf("\n");
    system("pause");
    return 0;
}