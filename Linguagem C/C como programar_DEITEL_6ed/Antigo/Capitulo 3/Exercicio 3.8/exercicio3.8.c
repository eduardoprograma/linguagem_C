#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
    int x, y, contador, potencia;

    contador = 1;
    potencia = 1;

    
    while(contador <= 10){
        x = x^y;
        potencia = potencia * x;
        ++contador;
        printf("Digite o primeiro numero:");
        scanf("%d", &x);
        printf("\n");
        printf("Digite um segundo numero:");
        scanf("%d", &y);
        printf("\n");
        
        if (y == x) {
            printf("Os numeros são iguai.\n");
        }
        
        if (y < x) {
            printf("O sugundo numero e maior que o primerio\n");
        }
        
        if (y > x) {
            printf("O segundo numero e menor que o primeiro\n");
        }
        printf("A potencia e: %d\n", potencia);
        system("pause");
        return 0;
    }
    
} 