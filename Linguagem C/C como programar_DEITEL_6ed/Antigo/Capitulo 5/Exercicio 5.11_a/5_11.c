#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int inte(int x);
int deci(int x);
int centes(int x);
int miles(int x);
main (void) {
    int x;
    float y = 0;
    printf("Digite um numero inteiro diferente de -1: ");
    scanf("%d", &x);
    for(x; x != -1; x)
    {
        printf("\nO numero inteiro arrendodado: %.1f\n", inte(y));
        printf("O numero arrendondado em decimal: %.1f\n", deci(y));
        printf("O numero arrendodado em centesimos: %.2f\n", centes(y));
        printf("O numero arrendodado em milesimos: %.3f\n", miles(y));
        printf("Digite -1 para encerrar ou ...\n");
        printf("Digite um numero interio: ");
        scanf("%d", &x);
    }
    return 0;
}
int inte(int x)
{
    float y = 0;
    y = floor(x * 10 + .5);
    printf("\n%d", x);
    printf("\n%.2f", y);
    return y;
}
int deci(int x){
    float y = 0;
    y = floor(x * 10 + .5) / 10;
    return y;
}
int centes(int x){
    float y = 0;
    y = floor(x * 100 + .5) / 100;
    return y;
}
int miles(int x){
    float y = 0;
    y = floor(x * 1000 + .5) / 1000;
    return y;
}