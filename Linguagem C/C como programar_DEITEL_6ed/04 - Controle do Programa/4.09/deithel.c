/*O que o seguinte programa faz?*/
#include <stdio.h> 
int main (void) 
{ 
    int i, j, x, y; 

    printf("Entre com inteiros no intervalo 1-20: "); 
    scanf("%d%d", &x, &y) ; 

    for (i = 1; i <= y; i++)    //Faz um quadrado
    {
        for (j = 1; j <= x; j++)
        { 
            printf("@ "); 
        } 
        printf("\n");
    }
    return 0; 
}