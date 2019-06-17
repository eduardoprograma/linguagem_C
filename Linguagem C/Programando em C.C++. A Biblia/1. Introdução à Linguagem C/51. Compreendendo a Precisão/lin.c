//Prigrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Como vimos, os computadores representam os números internamente usando combinações de ls e Os (dígitos binários). Nas dicas anteriores, você aprendeu que, como um tipo tem um número fixo de bits, cada tipo somente pode conter um intervalo específico de valores. Se você atribuiu um valor fora do intervalo do tipo, ocorrerá um erro de extravasamento. Os números em ponto flutuante podem experimentar extravasamento e ter precisão insuficiente. A precisão de um valor define seu grau de exatidão. Os valores do tipo float, por exemplo, oferecem de seis a sete dígitos significativos. Por exemplo, assuma que você atribuiu o valor 1.234567890 a uma variável do tipo float. Como o tipo float somente oferece sete dígitos significativos, você somente pode contar com precisão até 1.23456. Por outro lado, os valores do tipo double, oferecem 14 a 15 dígitos significativos. Como resultado, um valor do tipo double poderia armazenar com exatidão o valor 1.234567890.
Quando você trabalhar com números em ponto flutuante, você precisa saber que o computador representa os valores usando um número fixo de bits. Portanto, é impossível para o computador sempre representar os valores com exatidão. Por exemplo, o computador pode representar o valor 0.4 como 0.3999999, ou o valor 0.1 como 0.099999, e assim por diante. O programa a seguir, preciso.c, ilustra a diferença entre precisão dupla e simples:*/

#include <stdio.h>
int main(void)
{
    float exato = 0.123456790987654321;
    double mais_exato = 0.1234567890987654321;

    printf("Valor de float\t %0.19f\n", exato);
    printf("Valor de double\t %0.19f\n", mais_exato);
}