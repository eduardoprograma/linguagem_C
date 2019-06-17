//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/* Na Dica 94 você viu como usar os operadores de deslocamento para a esquerda e para a direita de C. Quando você realiza um operação de deslocamento para a esquerda, C preenche com zero o bit menos significativo. Por outro lado, quando você realiza uma operação de deslocamento para a direita, o valor que C coloca na posição do bit mais significativo depende do tipo do valor e do valor atual. À medida que você for trabalhando no nível de bit, algumas vezes poderá querer simplesmente rotacionar os bits, em vez de deslocá-los para a direita ou para a esquerda. Quando você rotaciona os bits para a esquerda, o bit mais significativo do valor torna-se o menos significativo, enquanto os outros bits movem-se uma posição para a direita. Quando você rotaciona os valores para a direita, o valor do bit menos significativo torna-se o mais significativo. Para ajudá-lo a rotacionar os bits, muitos compiladores C fornecem as funções _rotl e _rotr, que rotacionam os bits que compõem um valor sem sinal para a esquerda ou para a direita, como mostrado aqui: 

    #include <stdlib.h>
        unsigned _rotl(unsigned valor, int conta); 
        unsigned _rotr(unsigned valor, int conta);
        
A variável conta especifica o número de vezes que você quer rotacionar o valor. O programa a seguir, lin.c, ilustra o uso das funções _rotl e _rotr:*/

#include<stdio.h>

int main(void)
{
    unsigned valor = 1;
    int conta = 1;
    unsigned _rotl(unsigned valor,int conta);   // deslocamento para a esquerda
    unsigned _rotr(unsigned valor,int conta);   // deslocamento para a direita

    printf("%u rotacionado à direita uma vez é %u\n", valor, _rotr(valor, conta)); 
    
    valor = 5;
    conta = 2;

    printf("%u rotacionado à direita duas vezes é %u\n", valor, _rotr(valor, conta)); 
    
    valor = 65534;
    conta = 2; 
    
    printf("%u rotacionado à esquerda duas vezes é %u\n", valor, _rotl(valor, conta));

}