#include <stdio.h>
#include <stdlib.h>
main () {
    int impar, produto;
    impar = -1;
    produto = 1;

    
    do
    {
        impar += 2;
        produto *= impar;
        printf("%d ,", impar);
    } while (impar < 15);
    printf("\nO produto dos numeros impares e: %d\n\n", produto);
    system("pause");
    return 0;
}