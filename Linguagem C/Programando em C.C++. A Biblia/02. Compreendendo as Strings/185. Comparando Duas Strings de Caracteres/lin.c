// Programa: lin.c 
// Escrito por: Eduardo Felizardo Cândido
// Data de criação: 18/06/2019 
// Propósito: Permite que seus programas testem se duas strings de caracteres.

/*Na Dica 173 você criou a função streql, que permite que seus programas testem se duas strings de caracteres são iguais. Dependendo do processamento que seu programa precisa executar, haverá algumas vezes (tais como quando seu programa efetuar uma operação de classificação) que você deverá saber se uma string é maior que outra. Para ajudar seus programas a efetuar operações que determinem o valor de várias strings, a maioria dos compiladores C fornece uma função chamada strcmp, que compara duas strings de caracteres, como mostrado aqui:

#include cstring.h> 
int strcmp(const char *strl, const *char str2); 

Se as strings forem iguais, strcmp retornará o valor 0. Se a primeira string for maior que a segunda, strcmp retornará um valor menor que 0. Da mesma forma, se a segunda string for maior que a primeira, strcmp retornará um valor maior que 0. O programa a seguir, strcmp.c, ilustra como usar a função strcmp: */

#include <stdio.h> 
#include <string.h>

int main(void) 
{
    printf("Comparando Abc com Abc %d\n", strcmp("Abc", "Abc")); 
    printf("Comparando abc com Abc %d\n", strcmp("abc", "Abc")); 
    printf("Comparando abcd com abc %d\n", strcmp("abcd", "abc")); 
    printf("Comparando Abc com Abcd %d\n", strcmp("Abc", "Abcd"));
    printf("Comparando abcd com abce %d\n", strcmp("abcd", "abce")); 
    printf("Comparando Abce com Abcd %d\n", strcmp("Abce", "Abcd"));
}

/*Para compreender melhor a função strcmp, considere a seguinte implementação:

int strcmp(const char *sl, const char *s2) 
{
    while ((*s1 == *s2) && (*s1)) 
    {
        s1++; 
        s2++; 
    }
    if ((*s1 == *s2) && (! *s1))    // Strings iguais 
    {
        retum(O);
    }
    else if ((*sl) && (1 *s2))      // Iguais mas s1 maior 
    {
        return(-1);
    }
    else if ((*s2) && (! *s1)) 
    {
        return(1);
    }
    else return((*s1 > *s2) ? -1 : 1); // Diferentes
}*/