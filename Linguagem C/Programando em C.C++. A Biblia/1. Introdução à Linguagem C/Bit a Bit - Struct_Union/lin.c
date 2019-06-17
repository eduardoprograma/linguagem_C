//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    unsigned int bit0: 1;
    unsigned int bit1: 1;
    unsigned int bit2: 1;
    unsigned int bit3: 1;
    unsigned int bit4: 1;
    unsigned int bit5: 1;
    unsigned int bit6: 1;
    unsigned int bit7: 1;
}Bits;

typedef union
{
    unsigned int bit;
    Bits x;
}Binario;


int main(void)
{
    Binario B;
    int numero = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    B.bit = numero;
    printf("\n");
    printf("O valor em binario corresponre a: ");
    printf("%d", B.x.bit7);
    printf("%d", B.x.bit6);
    printf("%d", B.x.bit5);
    printf("%d", B.x.bit4);
    printf("%d", B.x.bit3);
    printf("%d", B.x.bit2);
    printf("%d", B.x.bit1);
    printf("%d", B.x.bit0);

}