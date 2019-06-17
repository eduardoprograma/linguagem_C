//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de Criação: 17/06/2019

/*Na Dica 169 você aprendeu que a função strcat lhe permite anexar (concatenar) os caracteres de uma string em outra. Em alguns casos, você não vai querer anexar todos os caracteres em uma string, mas, em vez disso, somente os dois, três, ou n primeiros caracteres na string. Para lhe ajudar a anexar n caracteres a uma string, a maioria dos compiladores C fornece uma função chamada strncat, que anexa os primeiros n caracteres de uma string de origem a uma string de destino, como mostrado aqui:

#include <stding.h> 
char *strncat(char *destino, const *origem, size_t n); 

Se n especificar um número de caracteres maior que o número de caracteres na string origem, strncat copiará caracteres até o final da string e não mais. O programa a seguir, strncat.c, ilustra como usar a função strncat: */
#include<stdio.h>
#include<string.h>

int main(void)
{
    char nome[64] = "Fernando";

    strncat(nome, " e Rute", 8);
    printf("Voce votou em %s?\n", nome);
}

/*Quando você compilar e executar o programa strncat. c, sua tela exibirá o seguinte:

Você votou em Fernando e Rute? C:\>

Para lhe ajudar a entender a função strncat, considere a seguinte implementação:

char *strncat(char ‘destino, const char *origem, int n) 
{
    char ‘original = destino; 
    int i = 0;

    while (*destino)
    {
        destino++;
        while ((i++ < n) && (*destino++ = *origem++))
        {
            if (i > n) ♦destino = NULL; 
            return(original); 
        }
    }
}*/