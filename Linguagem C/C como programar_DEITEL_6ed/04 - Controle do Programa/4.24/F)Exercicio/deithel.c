/*Admita que i = 1, j = 2, k = 3 e m = 2. O que cada uma das seguintes instruções imprime? 
f) printf("%d", k + m < j || 3 - j >= k);*/
#include <stdio.h>

int main(void)
{
    int j = 2, k = 3, m = 2;

    printf("%d", k + m < j || 3 - j >= k);  //0

    return 0;
}