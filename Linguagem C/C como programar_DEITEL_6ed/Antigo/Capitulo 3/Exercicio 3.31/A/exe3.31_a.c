#include <stdio.h>
#include <stdlib.h>

main () {
    int x, y;
     x = 0;
     y = 0;

     printf("Digite um valor: ");
     scanf("%d", &x);
     printf("Digite um outro valor: ");
     scanf("%d", &y);
    
    if (x < 10) {
        
        if (y < 10) {
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
        printf("Nao atende os requisitos do distema.\n\nFim do programa\n\n");
    }
    
    system("pause");
    return 0;
}