#include <stdio.h>
#include <stdlib.h>

main () {
    int A, contador;

    contador = 0;
    A = 0;

    printf("\n  A     A+2     A+4     A+6\n");
    
    while(contador <= 5){
        contador++;
        A+=3;
        printf("  %d     %d       %d        %d\n", A, A + 2, A + 4, A + 6);
    }
    printf("\n\n");
    system("pause");
    return 0;
}