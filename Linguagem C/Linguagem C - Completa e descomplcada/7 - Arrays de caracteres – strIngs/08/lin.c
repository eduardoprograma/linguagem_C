/* Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* inicio do código */
int main()
{
    /* declaração de variáveis */
    char str1[100];
    char str2[100];
    int tam = 0;

    /* entrada de dados */
    printf("Digite uma string 1: ");
    gets(str1);
    printf("Digite uma string 2: ");
    gets(str2);

    int med1 = strlen(str1);
    int med2 = strlen(str2);

    /* bloco de comando */
    tam = strcoll(str1, str2);

    /* saida de dados */
    if(tam > 0)
    {
        printf("STR2 nao esta contido em STR1.\n\n");
    }
    else if(tam < 0)
    {
        printf("STR2 esta contido em STR1.\n\n");
    }
    else
    {
        printf("STR2 esta contido em STR1 e possuem o mesmo tamanho.\n\n");
    }
    tam = strcoll(str1, str2);

    /* saida de dados */
    tam = strncmp(str1, str2, med1);
    if(tam > 0)
    {
        printf("STR2 nao esta contido em STR1.\n\n");
    }
    else if(tam < 0)
    {
        printf("STR2 esta contido em STR1.\n\n");
    }
    else
    {
        printf("STR2 esta contido em STR1 e possuem o mesmo tamanho.\n\n");
    }

    /* saida de dados */
    if(med2 > med1)
    {
        printf("STR2 nao esta contido em STR1.\n\n");
    }
    else if(med2 < med1)
    {
        printf("STR2 esta contido em STR1.\n\n");
    }
    else
    {
        printf("STR2 esta contido em STR1 e possuem o mesmo tamanho.\n\n");
    }

    return 0;
}
/* fim do cpodigo */