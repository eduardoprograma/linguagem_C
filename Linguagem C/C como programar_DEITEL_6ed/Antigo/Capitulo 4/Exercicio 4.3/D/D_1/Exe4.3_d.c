#include <stdio.h>
#include <stdlib.h>

main () {
    int x, contador;
    

    
    for(x = 1; x <= 20; x++)
    {
        printf("%d", x);
        contador = x % 5;
        if (contador == 0) {
            printf("\n");
        }
        else {
            printf("\t");
        }
    }
    printf("\n");
    system("pause");
    return 0;
}