#include <stdio.h>
#include <stdlib.h>

main () {
    int num, resto, contador;

    num = 0;
    contador = 1;
    resto = 0;
    
    while(contador <= 100){
        contador++;
        //printf("Digite um numero: "); // teste
        //scanf("%d", &num);            //teste
        num++;
        printf("*");
        resto = num % 10;
        //printf("\n%d\n", resto); // para checar o resto
        if (resto == 0){
            printf("\n");
            num = 0;
        }
        
    }
    system("pause");
    return 0;
}