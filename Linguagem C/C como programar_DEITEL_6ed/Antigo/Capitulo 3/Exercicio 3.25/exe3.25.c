#include <stdio.h>
#include <stdlib.h>

main () {
    int N, contador;

    contador = 1;
    N = 0;

    printf("\n   N   10*N   100*N   1000*N\n");
    
    while(contador < 10){
        N++;
        contador++;
        printf("   %d   %d     %d     %d\n", N, N * 10, N *100, N *1000);
    }
    printf("   %d  %d    %d    %d\n",N * 10/9, N *100/9, N *1000/9, N * 10000/9);
    printf("\n\n");
    system("pause");
    return 0;
}