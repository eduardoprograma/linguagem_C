#include <stdio.h>
#include <stdlib.h>

main () {
    float a, b, c;

    a = 0;
    b = 0;
    c = 0;

    printf("Entre com o primeiro valor de um triangulo: ");
    scanf("%f", &a);
    printf("Entre com o seguno valor de um triangulo: ");
    scanf("%f", &b);
    printf("Entre com o terceiro valor de um triangulo: ");
    scanf("%f", &c);
    
    if (((b - c) * -1) < a && a < b + c) {
        
        if (((a - c) * -1) < b && b < a + c) {
            
            if (((a - b) * -1) < c && c < a + b) {
                printf("\nLado a : %.2f\nLago b : %.2f\nLado c : %.2f\n\n", a, b, c);
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