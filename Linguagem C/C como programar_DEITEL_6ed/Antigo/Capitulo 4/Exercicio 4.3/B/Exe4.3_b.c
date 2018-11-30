#include <stdio.h>
#include <stdlib.h>

main () {
    double valor = 333.546372;
    
    printf("\n%15lf\n", valor);
    printf("\n%15.1lf\n", valor);
    printf("\n%15.2lf\n", valor);
    printf("\n%15.3lf\n", valor);
    printf("\n%15.4lf\n", valor);
    printf("\n%15.5lf\n", valor);
    
    printf("\n\n");
    system("pause");
    return 0;
}