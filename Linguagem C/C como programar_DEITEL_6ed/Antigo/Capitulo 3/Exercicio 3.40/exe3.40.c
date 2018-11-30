#include <stdio.h>
#include <stdlib.h>

main () {
    int num, contador, resto, linha;

    num = 0;
    contador = 1;
    resto = 0;
    linha = 2;

    
    while(contador <= 56){
        contador++;
        num++;
        linha++;
        printf("* ");
        
        //printf("digite um numero: "); //teste
        //scanf("%d", &num);            //teste
        resto = num % 7;
        linha = num % 2;
        //printf("\n%d\n", linha);      //imprimir o teste
        
        if (resto == 0) {
            printf("\n");
        }
        
        if (linha == 1) {
            printf(" ");
        }
        
    }
    system("pause");
    return 0;
}