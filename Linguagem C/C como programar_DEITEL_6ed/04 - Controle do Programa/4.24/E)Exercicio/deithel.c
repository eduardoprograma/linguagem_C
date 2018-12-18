/*Admita que i = 1, j = 2, k = 3 e m = 2. O que cada uma das seguintes instruções imprime? 
e) printf("%d", j >= i I I k == m);*/
#include <stdio.h>

int main(void)
{
    int i = 1, j = 2, k = 3, m = 2;

    printf("%d", j >= i || k == m); //1

    return 0;
}
