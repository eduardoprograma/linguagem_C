#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Ola Mundo!\n\n.a");
    printf("\n\n");
    system("pause");
    return 0;
}