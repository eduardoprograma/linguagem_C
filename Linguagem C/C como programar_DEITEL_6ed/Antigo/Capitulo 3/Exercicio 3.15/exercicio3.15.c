#include <stdio.h>
#include <stdlib.h>

main () {
    int num1, num2;
    int num3, num4;
    int num;

    printf("Digite dois numeros acrecidos de espaco: ");
    scanf("%d %d", &num1, &num2);
    printf("A soma dos numeros digitaados e: %d\n", num1 + num2);
    printf("Digite dois numeros acrecidos de espaco:");
    scanf("%d %d", &num3, &num4);
    
    if (num3 == num4) {
        printf("Os numeros sao iguais.\n");
    }
    
    if (num3 > num4) {
        printf("O numero %d e maior que o numero %d\n", num3, num4);
    }
    
    if (num3 < num4) {
        printf("O numero %d e menor que o numero %d\n", num3, num4);
    }
    
    while(num1 != -1){
        printf("Digite o primeiro numero ou -1 para finalizar:");
        scanf("%d", &num1);
        printf("Digite o segundo numero:");
        scanf("%d", &num2);
        printf("Digite o terceiro numero:");
        scanf("%d", &num3);
        printf("Digite o quarto numero:");
        scanf("%d", &num4);
        printf("O total e: %d\n", num1 + num2 + num3 + num4);
    }
    return 0;
    
}