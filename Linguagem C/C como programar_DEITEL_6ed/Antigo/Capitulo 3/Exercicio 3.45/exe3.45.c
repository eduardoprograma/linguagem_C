#include <stdio.h>
#include <stdlib.h>

main () {
    int a, b, c;

    a = 0;
    b = 0;
    c = 0;

    printf("Entre com o primeiro valor de um triangulo: ");
    scanf("%d", &a);
    printf("Entre com o seguno valor de um triangulo: ");
    scanf("%d", &b);
    printf("Entre com o terceiro valor de um triangulo: ");
    scanf("%d", &c);
    
    if (((b - c) * -1) < a && a < b + c) {
        
        if (((a - c) * -1) < b && b < a + c) {
            
            if (((a - b) * -1) < c && c < a + b) {
                printf("\nLado a : %d\nLago b : %d\nLado c : %d\n\n", a, b, c);
                printf("Estes podem ser considerados lados de um triangulo.\n\n");
            }
            
        }
        
    }
    
    else
    {
        printf("Nao e um triangulo.\n\n");
    }
    
    system("pause");
    return 0;
    
}