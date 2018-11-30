#include <stdio.h>
#include <stdlib.h>

main () {
    int x, linha;
    
    for(x = 1000-1; x >= 1; x -= 2)
    {
        printf("%d",x);
        linha = x % 6;
        
        if (linha == 0) {
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