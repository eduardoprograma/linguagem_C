//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de Criação: 11/06/2019

/*Como já vimos, a função printf suporta os especificadores de formato que lhe oferecem informações sobre os tipos de parâmetros (tais como int, float, char etc.). Para exibir valores do tipo long int com printf, você deverá usar o especificador de formato %ld. Se você usar % dem lugar de %ld, printf tratará o valor especificado como tipo int, muito provavelmente exibindo o resultado errado. O programa a seguir, longsai.c, usa o especificador de formato %ld, bem como %d, para exibir o valor 1000000. O programa longsai.c ilustra o tipo de erro que poderá ocorrer se você usar o especificador de formato incorreto:*/
//Vamos testar?

#include <stdio.h>
int main(void)
{
    long int um_milhao = 1000000;
    
    printf ("Um milhão e %ld\n", um_milhao);
    printf ("Um milhão e %d\n", um_milhao);
}

//Não ocorre mais o que o livro descreve...