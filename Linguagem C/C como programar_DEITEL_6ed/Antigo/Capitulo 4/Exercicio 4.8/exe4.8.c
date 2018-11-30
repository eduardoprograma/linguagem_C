#include <stdio.h>
#include <stdlib.h> 
main () { 
    int i, j, x, y; 
    printf("Entre com inteiros no intervalo 1-20: "); 
    scanf("%d%d", &x, &y) ; 
    for (i = 1; i <= y; i++) { 
        for (j = 1; j <= x; j++) printf("@"); 
        printf("\n"); 
    }
    system("pause");
    return 0; 
}