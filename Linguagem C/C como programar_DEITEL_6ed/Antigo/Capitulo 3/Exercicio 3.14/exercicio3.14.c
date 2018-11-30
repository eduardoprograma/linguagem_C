#include <stdio.h>
#include <stdlib.h>

main () {
    int num1, num2;
    int z, p;
    int m, v;
    int s, r, t;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    printf("Entre com o valor de z: ");
    scanf("%d", &z);
    p = num1 + num2 + z;
    printf("O valor de p: %d\n", p);
    printf("Digite o valor de m:");
    scanf("%d", &m);
    printf("Digite o valor de v: ");
    scanf("%d", &v);
    if (m > (2 * v)) {
        printf("O valor de m e maior duas vezes que o de v\n");
    }
    
    else
    {
        printf("O valor nao e maior.\n");
    }
    printf("Digite o valor de s: ");
    scanf("%d", &s);
    printf("Digite o valor de s: ");
    scanf("%d", &r);
    printf("Digite o valor de s: ");
    scanf("%d", &t);
    printf("Os valores dos numeros digitados: %d, %d, %d.\n ", s, r, t );
    return 0;
    
}