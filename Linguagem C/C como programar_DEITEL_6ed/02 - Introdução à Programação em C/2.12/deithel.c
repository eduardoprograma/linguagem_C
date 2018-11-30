/*O que é impresso quando cada uma das instruções seguintes da linguagem C é executada? Se nada for impresso, responda "nada". Admita x = 2 e y = 3.
    a) printf( "%d", x ); 
    b) printf( "%d", x + x ); 
    c) printf( "x=" ); 
    d) printf( "x=%d", x ); 
    e) printf( "%d = %d", x + y, y + x ); 
    f) z = x + y; g) 
    scanf( "%d%d", &x, &y ); 
    h) // printf( "x + y = %d", x + y ); 
    i) printf( "\n" );*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do programa*/
int main(void)
{
    /*Declaração das varáveis*/
    int x, y, z;

    /*Incializando as variáveis*/
    y = 3;
    x = 2;

    /*Saída de dados*/
    printf("a) ");
    printf( "%d", x );                  // Resposta 2
    printf("\nb) ");                    
    printf( "%d", x + x );              // Resposta 4
    printf("\nc) ");
    printf( "x=" );                     // Resposta x=
    printf("\nd) ");
    printf( "x=%d", x );                // Resposta x = 2
    printf("\ne) ");
    printf( "%d = %d", x + y, y + x );  // Resposta 5 = 5
    printf("\nf) ");
    z = x + y;                          // Resposta NADA
    printf("\ng) ");
    scanf( "%d%d", &x, &y );            // Resposta NADA
    printf("\nh) ");
    // printf( "x + y = %d", x + y );   // Resposta NADA
    printf("\ni) ");
    printf( "\n" );                     // Resposta NADA
    return 0;
}
/*Fim do programa*/