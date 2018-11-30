#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,a,b,c,d,e,cont=0;
    printf("\n\nNumeros iguais a 7!!!\n\n\n");

    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &num);


    a = num / 10000;
    if (a==7) cont++;

    b = (num % 10000) / 1000;
    if (b==7) cont++;

    c = (num % 1000) / 100;
    if (c==7) cont++;

    d = (num % 100) / 10;
    if (d==7) cont++;

    e = (num % 10);
    if (e==7) cont++;

    printf("Quantidade de digitos iguais a 7: %d\n",cont);

    system("pause");
    return 0;
}