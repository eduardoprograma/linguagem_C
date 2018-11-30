/*Fazer a variável de controle assumir valores de 1 a 100 em incrementos de 1.*/
#include <stdio.h>
#include <stdlib.h>

main () {
    int cont;
    for (cont = 99; cont >= 0; cont -= 11)
        printf("%d\n", cont);
    system("pause");
    return 0;
}