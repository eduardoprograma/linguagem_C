//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Como já foi visto, a função printf suporta especificadores de formato que informam os tipos dos parâmetros (tais como int, float, char etc.). Vimos também que uma variável é um nome que seu programa associa com uma posição de memória. À medida que a complexidade do seu programa aumentar, mais cedo ou mais tarde você trabalhará com os endereços de memória (chamados ponteiros). Quando você começar a trabalhar com ponteiros, algumas vezes precisará exibir o endereço de um ponteiro. Para exibir um endereço de ponteiro usando printf, use o especificador de formato %p. O programa a seguir, ptr_sai.c, usa o especificador %p para exibir um endereço de memória:*/
#include <stdio.h>

int main(void)
{
    int valor;
    printf("O endereço da variável valor é %p\n", &valor);
}