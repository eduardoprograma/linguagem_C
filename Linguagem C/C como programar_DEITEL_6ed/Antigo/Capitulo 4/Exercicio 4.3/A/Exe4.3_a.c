#include <stdio.h>
#include <stdlib.h>

main () {
    int impar;
    
    for(impar = 1; impar <= 100; impar += 2)
    {
        printf("\n%d", impar);
    }
    printf("\n\n");
    system("pause");
    return 0;
}