#include <stdio.h>
#include <stdlib.h>

main () {
    int valor;
    char letra;
    
    printf("Entre com um numero e uma letra: ");
    scanf("%d", &valor);
    letra = valor;
    letra = getchar();
    printf("\nInteiro: %d\n\nCaracter: %c\n\n", valor, letra);

    printf("\n");
    system("pause");
    return 0;
}