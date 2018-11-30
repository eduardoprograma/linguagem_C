#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
main () {
    double x = 4;
    printf("%.3f\n", sqrt(x));
    printf("Digite um numero: ");
    scanf("%lf", &x);
    printf("%.2f\n", x);
    system("pause");
    return 0;
}