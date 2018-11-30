#include <stdio.h>
#include <stdlib.h>

main () {
    int contador, num, maior;

    contador = 1;
    maior = 0;

    
    while(contador <= 10){
        printf("Digite o valor da venda: $");
        scanf("%d", &num);
        contador++;
        if (maior < num) {
        maior = num;
        }
    }
    
    printf("\n\nA maior venda e: $%d\n\n", maior);

    system("pause");
    return 0;
}