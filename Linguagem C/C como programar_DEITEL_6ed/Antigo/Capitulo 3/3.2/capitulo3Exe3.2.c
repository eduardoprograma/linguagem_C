#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    int x = 1;
    printf("Primeiro caso: %d\n\n", x + 1);
    printf("Segundo caso: %d\n\n", x += 1);
    printf("Terceiro caso: %d\n\n", x++);
    printf("Quarto caso: %d\n\n", ++x);

    system("pause");
    return 0;
}