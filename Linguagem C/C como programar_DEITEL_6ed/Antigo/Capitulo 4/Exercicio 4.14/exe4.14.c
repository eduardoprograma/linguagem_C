#include <stdio.h>
#include <stdlib.h>

main () {
    int num, fat;
    fat = 1;
    //printf("Digite um numero: ");
    //scanf("%d", &num);
    
    for(num = 1; num <= 5; num++)
    {
        fat *= num;
        printf("\nO valor de Fatorial de %d calculado: %d\n", num, fat);
    }
    system("pause");
    return 0;
}
