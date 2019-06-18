// Programa: lin.c 
// Escrito por: Eduardo Felizardo Cândido
// Data de criação:  18/06/2019
// Propósito: Algumas vezes você irá querer localizar a última ocorrência.

/*A medida que seus programas forem trabalhando com strings, algumas vezes você irá querer localizar a última ocorrência (a mais à direita) de um caractere específico dentro de uma string. Por exemplo, se você estiver trabalhando com uma string que contém um nome de caminho, poderá pesquisar na string o último caractere barra invertida (\) para localizar a posição onde começa o nome do arquivo. Para lhe aiudar a procurar a última ocorrência de um caractere dentro de uma string, a maioria dos compiladores fornece uma função chamada strrchr, que retomará um ponteiro para a última ocorrência de um caractere específico dentro de uma string, como mostrado aqui:

#include <string.h> 
char *strrchr(const char *string, int caractere); 

Se strrchr não encontrar o caractere que você especificar dentro da string, strrchr retornará um ponteiro para o caractere NULL que marcará o final da string. O programa a seguir, lin. c, ilustra como usar a função strrchr: */
#include<stdio.h>
#include<string.h>
int main(void)
{
    char titulo[64] = "Estudar a linguagem C e muito importante";
    char *ptr;
    
    if(ptr = strrchr(titulo, 'C'))
    {
        printf("A ocorrencia mais a direita de C esta no deslocamento %d\n", ptr-titulo);
    }
    else
    {
        printf("Caractere nao encontrado...\n");
    }
}

/*Observe que strrchr não contém um índice à última ocorrência de um caractere, mas, em vez disso, contém um ponteiro para o caractere. Para lhe ajudar a compreender melhor a função strrchr, considere a seguinte implementação:

char *strrchr (const char *string, int letra) 
{
    char *ptr = NULL;
    
    while (*string) 
    {
        if (*string == letra) 
        {
            ptr = string;
        }
        string++;
    }
    return(ptr); 
} */