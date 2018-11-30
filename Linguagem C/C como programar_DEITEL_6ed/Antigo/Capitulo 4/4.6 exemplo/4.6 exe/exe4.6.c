/*Fazer a variável de controle assumir valores de 1 a 100 em incrementos de 1.*/
#include <stdio.h>
#include <stdlib.h>

main () {
    int soma = 0, num;
    for (num = 2; num <= 100; num += 2)
        soma += num;
        printf("   A soma e %d\n", soma);
    system("pause");
    return 0;
}