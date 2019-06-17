//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/* À medida que você trabalha com strings dentro de seus programas, efetuará muitas operações com base no número de caracteres na string. Para lhe ajudar a determinar o número de caracteres em uma string, a maioria dos compiladores C fornece uma função strlen, que retorna o número de caracteres em uma string. O formato da função strlen é como segue: 

#include <string.h> 
size_t strlen(const char string); 

O programa a seguir, strlen.c, ilustra como usar a função strlen:*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    char titulo_livro[] = "Biblia do Programador C/C++, do Jamsa!";

    printf("%s contem %d caracteres\n", titulo_livro, strlen(titulo_livro));
}

/* Quando você compilar e executar o programa strlen.c, sua tela exibirá o seguinte:
Bíblia do Programador C/C++, do Jamsa! contém 38 caracteres C: \>

Para compreender melhor como a função strlen funciona, considere a seguinte implementação. A função simplesmente conta os caracteres em uma string até, mas não incluindo, o caractere NULL: 

size_t strlen(const char string) 
{
    int i = 0; 
    while (string[i]) 
        i++;
    return(i); 
} */