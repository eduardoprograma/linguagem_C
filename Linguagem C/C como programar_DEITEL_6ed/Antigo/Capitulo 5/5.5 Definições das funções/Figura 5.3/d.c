/*Função square definida pelo programador*/
#include <stdio.h>
#include <stdlib.h>
int square (int y);  /*protótipo da função*/
main () {
    int x;
    for(x = 1; x <= 10; x++)
    {
        printf("%d ", square(x));
    }
    system("pause");
    return 0;
}
/*Definições da função*/
int square(int y) {
    return y * y;
}