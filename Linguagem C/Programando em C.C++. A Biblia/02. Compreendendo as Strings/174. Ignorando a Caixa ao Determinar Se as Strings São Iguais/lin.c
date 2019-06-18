// Programa: lin.c 
// Escrito por: Eduardo Felizardo Cândido
// Data de criação:  18/06/2019
// Propósito: Permite que seus programas determinem rapidamente se duas strings são iguais.

/*Na Dica 173 você criou a função streql, que permite que seus programas determinem rapidamente se duas strings são iguais. Quando a função streql compara duas strings, streql considera os caracteres maiúsculos e minúsculos como diferentes. Algumas vezes você pode querer comparar duas strings sem considerar a caixa. Para comparar strings sem considerar a caixa, você pode criar a função strieql, como mostrado aqui: */
#include<ctype.h>
#include<cstddef>
int strieql(char *str1, char *str2)
{
    while((toupper(*str1) == toupper(*str2)) && (*str1))
    {
        str1++;
        str2++;
    }
    return((*str1 == NULL) && *str2 == NULL);
}

/*Como você pode ver, a função strieql converte cada caractere em cada string para maiúscula antes de comparar as duas strings. O programa a seguir, lin.c, ilustra como usar strieql(função criada para comparação): */
#include<stdio.h>
#include<ctype.h>

int main(void)
{
    printf("Testando Abc e Abc %d\n", strieql("Abc", "Abc")); 
    printf("Testando abc e Abc %d\n", strieql("abc", "Abc")); 
    printf("Testando abcd e abc %d\n", strieql("abcd", "abc"));
}
/*Quando você compilar e executar o programa strieql.c, sua tela exibirá o seguinte:
Testando Abc e Abc 1 
Testando abc e Abc 1 
Testando abcd e abc 0 */