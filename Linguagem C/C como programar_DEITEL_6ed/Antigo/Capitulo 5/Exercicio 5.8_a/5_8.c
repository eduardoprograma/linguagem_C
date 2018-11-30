#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main () {
    double x;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("%.3lf\n", fabs(x));
    printf("%.3lf\n", floor(x));
    printf("%.3lf\n", ceil(x));
    /*y = floor(x);
    z = -8 + y;
    w = -1 * fabs(z);
    k = ceil(w);
    printf("%.1lf\n", k);*/
    return 0;
}