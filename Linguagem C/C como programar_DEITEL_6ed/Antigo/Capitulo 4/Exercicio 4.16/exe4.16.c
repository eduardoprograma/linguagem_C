#include <stdio.h>
#include <stdlib.h>
main() {
    int i, j;
    printf("\n(A)\n");
    for (i = 0; i < 8; i++) 
    { 
        for (j = 0; j <= i; j++) 
        { 
            printf("*"); 
        } 

        printf("\n"); 

    } 
    printf("\n(B)\n");
    for (i = 8; i >= 0; i--) 
    { 
        for (j = 0; j < i; j++) 
        { 
            printf("*"); 
        } 
        printf("\n");
    }
    system("pause");
    return 0;
}