#include <stdio.h>
#include <stdlib.h>
main () {
    int num, x;
    num =0;
    printf("Digite um numero entre 1 e 30: ");
    scanf("%d", &num);
    
    for(x = 1 ;x <= num; x++)
    {
        printf("*");
    }
    
    printf("\n");
    system("pause");
    return 0;
}