/*Admita que i = 1, j = 2, k = 3 e m = 2. O que cada uma das seguintes instruções imprime? 
i) printf ("%d", ! (k > m) );*/
#include <stdio.h>

int main(void)
{
    int k = 3, m = 2;
    printf ("%d", ! (k > m) );  //0
    return 0;
}