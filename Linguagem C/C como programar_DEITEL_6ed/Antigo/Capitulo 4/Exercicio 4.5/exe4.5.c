#include <stdio.h>
#include <stdlib.h>

main () {
    int x, total;
    char r;
    x = 0;
    total = 0;
    for(x = 100; x <= 150; x++)
    {
        total += x;
        printf("\nA soma e: %d", x);
    }
    
    printf("\n%3cTotal: %d", r, total);
    printf("\n");
    system("pause");
    return 0;
}