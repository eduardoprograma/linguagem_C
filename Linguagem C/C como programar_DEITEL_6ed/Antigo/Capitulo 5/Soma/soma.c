#include <stdio.h>
#include <stdlib.h>
int soma (int n1, int n2);
int main () {
    int num1, num2, total;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
    total = soma(num1, num2);
    printf(" A soma de %d e %d e %d\n", num1, num2, total);
    system("pause");
}
int soma (int n1, int n2){
    return n1 + n2;
}