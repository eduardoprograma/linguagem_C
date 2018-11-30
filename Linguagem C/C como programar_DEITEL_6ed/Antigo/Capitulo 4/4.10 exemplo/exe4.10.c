/*Usandoa a instrução continue em uma estrutura for*/
#include <stdio.h>
#include <stdlib.h>

main () {
    int x;
    printf("\n\n");
    for(x = 1; x <= 10; x++)
    {
        
        if (x == 5) {
            continue; /*Ignora o código restante se x =5*/
        }
        printf(" %d", x);
    }
    printf("\n\nContinue usado para ignorar a impressao do valor 5\n\n");
    system("pause");
    return 0;
}