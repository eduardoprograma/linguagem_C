/*
===========================================================
Comentário em destaque
Rafael_kirito Sanchez
===========================================================
*/
#include <stdio.h>
int main()
{
    /* declaração de varáveis */
    int N1, N2, N3;
    int menor = 0, maior = 0;       //inicialização de varáveis.

    /* entrada de dados */
    printf("digite N1: ");
    scanf("%d",&N1);
    printf("digite N2: ");
    scanf("%d",&N2);
    printf("digite N3: ");
    scanf("%d",&N3);

    /* processamento dos dados */

    //Comparação menor

    menor = N3;     //Caso nenhuma condição abaixo atenda N3 é o menor

    if ((N1 < N2) && (N1 < N3))
    {
        printf("\n O menor e: %d\n", N1);       //Sáida dos dados se N1 maior
    }
        
    if ((N2 < N1) && (N2 < N3))
    {
        printf("\n O menor e: %d\n", N2);       //Sáida dos dados se N2 maior
    }


    //Comparação Maior

    maior = N3;     //Caso nenhuma condição abaixo atenda N3 é o maior

    if ((N1 > N2) && (N1 > N3))
    {
        printf("\n O maior e: %d\n", N1);       //Sáida dos dados se N1 maior
    }

    if ((N2 > N1) &&(N2 > N3))
    {
        printf("\n O maior e: %d\n", N2);       //Sáida dos dados se N2 maior
    }

    /*if ((maior % 2)== 0)
    {
        printf("Par");       //Sáida dos dados se par
    }
    else
    {
        printf("impar");       //Sáida dos dados se impar
    }*/

    return 0;
}
