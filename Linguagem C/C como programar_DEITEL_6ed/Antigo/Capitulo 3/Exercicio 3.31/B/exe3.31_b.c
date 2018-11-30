#include <stdio.h>
#include <stdlib.h>

main () {
    int x, y;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);
    
    if (x < 10) {
        
        if (y > 10) {
            printf("*****\n");
        }
        
        else
        {
            printf("#####\n"); 
            printf("$$$$$\n");
        }
        
    }
    
    else
    {
        printf("Nao atende o sistema.\nFim do programa.\n");
    }
    system("pause");
    return 0;
}