#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main () {
    int i;
    unsigned semente;
    printf("Entre com a semente: ");
    scanf("%u", &semente);
    srand(semente);
    
    for(i = 1; i <= 10; i++)
    {
        printf("%10d", 1 + rand()%6);
        
        if (i%5 == 0) {
            printf("\n");
        }
        
    }
    return 0;
}