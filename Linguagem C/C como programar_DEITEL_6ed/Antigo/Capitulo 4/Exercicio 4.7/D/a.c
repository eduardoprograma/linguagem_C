#include <stdio.h>
#include <stdlib.h>

main () {
    int num;
    printf("\n");
    for(num = 19; num <= 51; num += 8)
    {
        printf("%d, ", num);
    }
    printf("\n\n");
    system("pause");
    return 0;
}