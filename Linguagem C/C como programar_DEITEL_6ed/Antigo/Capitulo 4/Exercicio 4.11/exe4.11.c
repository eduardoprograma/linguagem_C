#include <stdio.h>
#include <stdlib.h>

main () {
    int num, num1, menor;
    int contador;
    num = 0;
    num1 = 0;
    menor = 0;
    
    printf("Digite a quantidade de numeros digitados: ");
    scanf("%d", &num1);
    printf("Digite o valor: ");
    scanf("%d", &num);
    menor = num;
    for(contador = -1; contador < num1; contador++)
    {
        printf("Digite o valor: ");
        scanf("%d", &num);
        if (menor > num) {
            menor = num;
        }
        
    }
    printf("O menor valor e: %d\n\n", menor);
    system("pause");
    return 0;
}