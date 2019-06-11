//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Na Dica 65 você viu como formatar um valor inteiro colocando o número desejado de dígitos imediatamente após o % no especificador de formato %d. Se o valor inteiro que printfexibir não precisar do número de caracteres que você especificou, />rc'«//precederá o valor com o número de espaços necessários. Dependendo do propósito do seu programa, algumas vezes você pode querer que printf preceda o valor com zeros (chamado zero de preenchimento), em vez de espaços. Para instruir printf a preencher um valor com zeros, coloque um 0 (zero) imediatamente após o % no especificador de formato, antes do número desejado de dígitos. O programa a seguir, enche.c, ilustra o preenchimento com zeros:*/

#include<stdio.h>

int main(void)
{
    int valor = 5;

    printf ("%01d\n", valor);
    printf ("%02d\n", valor);
    printf ("%03d\n", valor);
    printf ("%04d\n", valor);
}