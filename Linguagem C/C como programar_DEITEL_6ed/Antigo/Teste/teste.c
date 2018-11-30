#include <stdio.h>
#include <stdlib.h>
main () {
    int num1 = 0, num2 = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("\nA soma dos numeros %d e %d e igual a %d.\n", num1, num2, num1 + num2);
    system("pause");
    return 0;
}