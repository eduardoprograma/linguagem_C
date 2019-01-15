#include<stdio.h>
#include<stdlib.h>
/* inicio */
int main(void)
{
    /* declaracao */
    char nome[30];

    /* entrada */
    printf("digite seu nome: ");
    scanf("%s", &nome);

    /* saida */
    printf("\nvoce e uma linda menina chamada %s\n", nome);
    return 0;
}
/* fim */