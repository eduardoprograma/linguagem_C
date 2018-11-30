#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {
    double valor = 2.5, potencia;
    
    potencia = pow(valor, 3);
    printf("\n\n%10.2lf", potencia);
    printf("\n\n");
    system("pause");
    return 0;
}