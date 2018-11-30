#include <stdio.h>
#include <stdlib.h>

main () {
    int valor, sens;
    printf("O numero e par ou impar\n\n");
    printf("Digite um numero: ");
    scanf("%d", &valor);
    switch (valor % 2)
    {
        case 0:
            printf("\nInteiro par\n");
            break;
        case 1:
            printf("\nInteiro impar\n");
            break;
        default:
            break;
    } 
    printf("\n");
    system("pause");
    return 0;
}