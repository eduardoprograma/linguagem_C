#include <stdio.h>
#include <stdlib.h>

main () {
    int num;
    printf("\n");
    for(num = 3; num <= 23; num += 5)
    {
        printf("%d, ", num);
    }
    printf("\n\n");
    system("pause");
    return 0;
}