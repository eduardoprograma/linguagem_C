#include <stdio.h>
#include <stdlib.h>

main () {
    int num;

    num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("\n\nPre-decremento: %d", --num);
    printf("\n\nPos-decremento: %d\n\n", num--);

    system("pause");
    return 0;
}