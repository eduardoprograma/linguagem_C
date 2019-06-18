// Programa: lin.c 
// Escrito por: Eduardo Felizardo Cândido
// Data de criação:  18/06/2019
// Propósito: Converter a string para maiúsculas e para minúsculas

/*Quando seus programas trabalharem com strings, algumas vezes você desejará converter a string para maiúsculas. Por exemplo, quando um usuário digitar o nome de um arquivo ou de um cliente, você poderá querer que o programa converta a string digitada em maiúsculas para simplificar as operações de comparação ou para garantir que o programa armazene dados em um formato consistente. Para lhe ajudar a efetuar essas conversões, a maioria dos compiladores C fornece as funções strlwr e stmpr, como mostrado aqui:

#include <string.h> 
char *strlwr(char *string); 
char *strupr(char (string); 

O programa a seguir, lin.c, ilustra como usar as funções strlwr e srtupr:*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char str[100] = "Estudar para ser um excelente programador e a melhor opcao";

    printf("%s\n", str);
    printf("%s\n", strlwr(str));
    printf("%s\n", strupr(str));
}

/*Para lhe ajudar a compreender melhor essas duas funções, considere a seguinte implementação de strlwr. 

#include <ctype.h> 
char *strlwr(char *string) 
{
    char *original = string;

    while (*string) 
    {
        *string = tolower(*string); 
        string++;
    } 
    return(original); 
}

Como você pode ver, tanto strlwr quanto strupr percorrem os caracteres em uma string, convertendo cada caractere para maiúscula ou para minúscula, dependendo da função chamada.*/