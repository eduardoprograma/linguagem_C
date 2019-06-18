// Programa: lin.c 
// Escrito por: Eduardo Felizardo Cândido
// Data de criação: 18/06/2019 
// Propósito: encontrar a primeira ocorrência (a que está mais à esquerda) de um caractere específico dentro de uma string.

/*À medida que seus programas trabalham com strings, algumas vezes você pode querer encontrar a primeira ocorrência (a que está mais à esquerda) de um caractere específico dentro de uma string. Por exemplo, se você estiver trabalhando com uma string que contém um nome de caminho, você poderá procurar na string o primeiro caractere de barra invertida (\). Para lhe ajudar a procurar a primeira ocorrência em uma string, a maioria dos compiladores fornece uma função chamada strchr, que retorna um ponteiro para a primeira ocorrência de um caractere específico dentro de uma string, como mostrado aqui:

#include <string.h> 
char *strchr(const char *string, int caractere); 

Se strchr não encontrar o caractere especificado dentro da string, strchr retornará um ponteiro para o caractere NULL que marca o final da string. O programa a seguir, lin. c, ilustra como usar a função strchr: */
#include<stdio.h>
#include<string.h>

int main(void)
{
    char titulo[64] = "Programar em C e muito legal!"; 
    char *ptr;

    ptr = strchr(titulo, 'C'); 
    if (*ptr) 
    {
        printf("A primeira ocorrencia de C esta no deslocamento %d\n", ptr-titulo); 
    }
    else 
    {
        printf("Caractere não encontrado\n");
    }
}

/*A primeira ocorrência de C está no deslocamento 22 
C; \>

Você deve observar que strchr não contém um índice para a primeira ocorrência de um caractere; em vez disso, strchr contém um ponteiro para o caractere. Para lhe ajudar a compreender melhor a função strchr, considere a seguinte implementação:

char *strchr(const char *string, int letra) 
{
    while ((*string != letra) && (*string)) 
        string++;
    return(string); 
} */