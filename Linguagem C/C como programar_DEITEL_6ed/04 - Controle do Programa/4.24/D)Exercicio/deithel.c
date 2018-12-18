/*Admita que i = 1, j = 2, k = 3 e m = 2. O que cada uma das seguintes instruções imprime? 
d) printf("%d", m <= 99 && k < m);*/
#include <stdio.h>

int main(void)
{
    int m = 2, k = 3;

    printf("%d", m <= 99 && k < m); //0

    return 0;
}