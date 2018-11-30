#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {
    int num, expo, result;

    num = 2;
    expo = 0;

    
    while(result != 0){
        expo++;
        result = pow(2, expo);

        printf("\nO numero 2^%d : %d\n", expo, result);
    }
    system("pause");
    return 0;
}