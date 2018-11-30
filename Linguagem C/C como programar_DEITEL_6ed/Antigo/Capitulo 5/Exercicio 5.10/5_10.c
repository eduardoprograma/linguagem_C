#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
    float x = 0;
    float y = 0.00; 
    while(x != -1){
        printf("Digite um numero: ");
        scanf("%f", &x);
        y = ceil(x + .5);
        printf("\n O numero testado arrendodou para %.2lf\n", y);
        y = floor(x + .5);
        printf("\n O numero testado arrendodou para %.2lf\n", y);
    }
    return 0;
}