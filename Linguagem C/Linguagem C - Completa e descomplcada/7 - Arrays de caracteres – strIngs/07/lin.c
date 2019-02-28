/* Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* inicio do código */
int main()
{
    /* declaração de variaveis */
    char palavra1[20];
    char palavra2[20];
    int i, tam = 0, j = 0, pali = 0, N_Pali = 0;

    /* entrada de dados */
    printf("Digite um 'nome', uma 'frase' ou 'palavra': ");
    gets(palavra1);

    /*bloco de comando */
    tam = strlen(palavra1);
        /* Inversão da palavra */
        for(i = tam - 1; i >= 0; i--)
        {
            palavra2[j] = palavra1[i];
            j++;
        }

        /* comparação entre as silabas */
        for(i = tam - 1; i >= 0; i--)
        {
            if(palavra1[i] == palavra2[i])
            {
                pali++;
            }
            else
            {
                N_Pali++;
            }
        }
    
    /* saida de dados */
    if(pali == tam)
    {
        printf("E uma palavra palindromo.\n\n");
    }
    else
    {
        printf("Nao e uma palavra palindromo.\n\n");
    }
    
    return 0;
}
/* fim do código */