#include <stdio.h>
#include <stdlib.h>

main () {
    int x, linha;
    
    
    for(x = 100; x >= 1; x--)
    {
        printf("%d", x);
        linha = x % 10;
        if (linha == 1) {
            printf("\n");
        }
        
        else
        {
            printf("\t");
        }
        
    }
    printf("\n");
    system("pause");
    return 0;
}