#include <stdio.h>
#include <stdlib.h>

main () {
    int num, num1;
    printf("\n");
    for(num = 10; num <= 14; num += 4)
    {
        printf("%d, ", num);
        num1 = num % 14;
        
        if (num1 == 0) {
            
            while (num > -10)
            {
                num -= 6;
                printf("%d ,", num);
            }
            break;
        }
        
    }
    printf("\n\n");
    system("pause");
    return 0;
}