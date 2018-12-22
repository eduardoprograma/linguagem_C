#include <stdio.h> 
#include <stdlib.h> 
int main()
{ 
    int x = 5; 
    int y = 3; 
    printf ("Resultado: %d\n",x > 4);
    //verdadeiro (1) 
    printf ("Resultado: %d\n",x == 4);
    //falso (0) 
    printf ("Resultado: %d\n",x != y);
    //verdadeiro (1) 
    printf ("Resultado: %d\n",x != y+2);
    //falso (0) 
    system("pause"); 
    return 0;
}