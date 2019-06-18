// Programa: lin.c 
// Escrito por: Eduardo Felizardo Cândido
// Data de criação:  18/06/2019
// Propósito: Comparar duas Strings e determinar se elas são iguais

/*Quando seus programas trabalham com strings, você freqüentemente comparará duas .strings para determinar se elas são ou não iguais. Para lhe ajudar a determinar se duas strings contêm os mesmos caracteres, você poderá usar a função streql, mostrada aqui:*/

int streql (char *str1, char *str2)         //Função streql criada para comparar, não faz parte da biblioteca.
{
    while ((*str1 == *str2) && (*str1)) 
    {
        str1++; 
        str2++;
    }
    return((*str1 == 0) && (*str2 == 0));   //Na verdade o exemplo demonstra (str1 = NULL). Mas não compila então coloquei o zero no lugar que neste caso surte o mesmo efeito.
} 

/*A função streql retornará o valor 1 se as duas strings forem iguais, e 0 se as strings não forem iguais. O seguinte programa C, streql.c, ilustra como usar a função streql:*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    printf("Testando Abc e Abc %d\n", streql("Abc", "Abc")); 
    printf("Testando abc e Abc %d\n", streql("abc", "Abc"));
    printf ("Testando abcd e abc %d\n", streql ("abcd", "abc"));
}
/*Quando você compilar e executar o programa streql.c\ sua tela exibirá a seguinte saída:
Testando Abc e Abc 1 
Testando abc e Abc 0 
Testando abcd e abc 0 */