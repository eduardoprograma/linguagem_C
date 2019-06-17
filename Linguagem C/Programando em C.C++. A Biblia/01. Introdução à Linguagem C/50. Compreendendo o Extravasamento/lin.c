//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019
//Descrição: Livro 

/*Como você aprendeu, o tipo de uma variável define o intervalo de valores que uma variável pode armazenar e as operações que um programa pode realizar com a variável. Por exemplo, as variáveis do tipo int podem armazenar valores no intervalo de -32.768 até 32.767. Se você atribuir um valor fora desse intervalo a uma variável do tipo int, ocorrerá um erro de extravasamento. Como você já aprendeu, C usa 16 bits para representar as variáveis do tipo int. O compilador C usa o mais significativo dos 16 bits para determinar o sinal de uma variável. Se o bit mais significativo for 0, o valor será positivo. Se o bit mais significativo for 1, o valor será negativo. C depois usa 15 bits para representar o valor da variável. Para compreender por que ocorre o extravasamento, você precisa considerar a implementação bit a bit do valor.
Se você somasse 1 ao valor seria 32.767, poderia esperar o resultado 32.768. No entanto, para C o valor seria -32.768.
*/

#include <stdio.h>
int main()
{
    int positivo = 32767;
    int negativo = -32768;
    
    printf("%d + 1 e %d\n", positivo, positivo + 1);
    printf("%d - 1 e %d\n", negativo, negativo - 1);
}

//Não aconteceu conforme o livro. Técnologia evolui desde da edição?

