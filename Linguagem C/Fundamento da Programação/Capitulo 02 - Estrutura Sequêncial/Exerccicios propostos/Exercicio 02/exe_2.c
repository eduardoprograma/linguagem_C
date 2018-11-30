/*Prigrama de Multiplcar três varáiveis*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    /*Declarção de variáveis*/
    int n1, n2, n3, mult;
    /*Entrada de valores para varáveis*/
    printf("Digite o primeiro Valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo Valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro Valor: ");
    scanf("%d", &n3);
    /**/
    mult = n1 * n2 * n3;
    /*Saída do valor das variáveis*/
    printf("O valor da multiplicacao e igual a %d\n\n", mult);
    /*Fim do cpodigo*/
    system("pause");
    return 0;
}