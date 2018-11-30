#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main () {
    int x = 0;
    double y = 0;
    printf("Digite um numero inteiro diferente de -1: ");
    scanf("%d", &x);
    for(x; x != -1; x)
    {
        y = floor(x * 10 + .5);
        printf("\nO numero inteiro arrendodado: %f\n", y);
        y = floor(x * 10 + .5) / 10;
        printf("O numero arrendondado em decimal: %.1f\n", y);
        y = floor(x * 100 + .5) / 100;
        printf("O numero arrendodado em centesimos: %.2f\n", y);
        y = floor(x * 1000 + .5) / 1000;
        printf("O numero arrendodado em milesimos: %.3f\n", y);
        printf("Digite -1 para encerrar ou ...\n");
        printf("Digite um numero interio: ");
        scanf("%d", &x);
    }
    return 0;
}