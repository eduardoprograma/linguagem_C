#include <stdio.h>
#include <stdlib.h>

main () {
    double x; 
    
    for(x = 0; x <= 1; x += .000001)
    {
        printf("%.6lf\n", x);
    }
    printf("\n");
    system("pause");
    return 0;
}