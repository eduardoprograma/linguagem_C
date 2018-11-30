/*Usando a instrução break em uma estrutura for*/
#include <stdio.h>
#include <stdlib.h>
main () {
    int x;
    
    for(x = 1; x <= 10; x++)
    {
        
        if (x == 5) {
            break; /*Sai do loop somente se x = 5*/
        }
        printf("%d", x);
    }
    printf("\nSaiu do loop em x = %d\n", x);
    system("pause");
    return 0;
}