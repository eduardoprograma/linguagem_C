//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/* Na dica 163 você aprendeu que as funções de C normalmente usam o caractere NULL para representar o final de uma string. Funções tais como fgets e cgets automaticamente atribuem o caractere NULL para indicar o final de uma string. O programa a seguir, exib_str.c, usa a função gets para ler uma string de caracteres do teclado. O programa depois usa um laço for para exibir os caracteres da string um de cada vez até que a condicional string[i] != NULL seja avaliada como falsa: */
#include<stdio.h>

int main(void)
{
    char string[256];   // String digitada pelo usuário 
    int i;              // índice para a string

    printf("Digite uma string de caracteres e pressione Enter:\n"); 
    gets(string); 
    // Exibe cada string de caracteres até que NULL seja encontrado 
    for (i = 0; string[i] != NULL; i++) 
    {
        putchar(string[i]);
    }
    printf("\nO número de caracteres na string é %d\n", i);
}