/*Encontrar o maior de três inteiros*/
#include <stdio.h>
#include <stdlib.h>
int maximum (int x, int y, int z); /*protótipo da função*/
main () {
    int a, b, c;
    printf("Entre com tres inteiros: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("O maior e: %d\n", maximum(a, b, c));
    system("pause");
    return 0;
}
/*Definição da função maxima*/
int maximum(int x, int y, int z)
{
    int max = x;
    
    if (y > max) {
        max = y;
    }
    
    if (z > max) {
        max = z;
    }
    return max;    
}