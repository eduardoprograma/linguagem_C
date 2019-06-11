//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019
//Discrição: Livro Programando em C/C++ A Biblia

/*Dependendo do seu aplicativo, algumas vezes você precisará trabalhar com valores octais (base 8) ou hexadecimais (base 16). Nessas ocasiões você dirá ao compilador que quer trabalhar com valores que não são decimais. Se você preceder um valor numérico com um 0 (zero), tal como 077, o compilador C tratará o valor como octal. Da mesma forma, se você preceder um valor com Ox, tal como OxFF, o compilador tratará o valor como hexadecimal. Os comandos a seguir ilustram como usar uma constante octal e hexadecimal:

            int valor_octal = 0227;
            int valor_hexa = OxFPO;*/

#include <stdio.h>

int main()
{
    int valor_octal = 0227;
    int valor_hexa = 0xFF0;

    printf("Valor octal %o\n", valor_octal);
    printf("Valor hexadecimal %x e %X\n", valor_hexa, valor_hexa);
    printf("Valor octal %#o\n", valor_octal);
    printf("Valor hexadecimal %#x e %#X\n", valor_hexa, valor_hexa);
    printf("%d, %d", valor_octal, valor_hexa);

    return 0;
}