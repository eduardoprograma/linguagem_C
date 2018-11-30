#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {
    int x;
    printf("%.2f\n", x = fabs(7.5));
    printf("%.2f\n", x = floor(7.5));
    printf("%.2f\n", x = fabs(0.0));
    printf("%.2f\n", x = ceil(0.0));
    printf("%.2f\n", x = fabs(-6.4));
    printf("%.2f\n", x = ceil(-6.4));
    //printf("%.2lf", x = ceil(-fabs(-8 + floor(-5.5)));
    return 0;
}