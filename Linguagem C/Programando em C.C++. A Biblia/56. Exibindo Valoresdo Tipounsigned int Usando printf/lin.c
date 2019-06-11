//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Como você aprendeu, a função printf suporta especificadores de formato que fornecem a p r in tfnformações sobre seus tipos de parâmetro (tais como int, char etc.). Para exibir valores do tipo unsigned itit com printf, você deve usar o especificador de formato %u. Se você usar %d em lugar de %u, p rin tf tratará o valor especificado como tipo int, o que provavelmente exibirá o resultado incorreto. O programa seguinte u_intsai.c, usa o especificador de formato %u, bem como %d, para exibir o valor 42000. O programa u_intsai.c ilustra o tipo de erro que pode ocorrer se você usar o especificador de formato incorreto:*/

#include<stdio.h>
int main(void)
{
    unsigned int valor = 42000;

    printf("Exibindo 42000 como unsigned %u\n", valor);
    printf("Exibindo 42000 como int %d\n", valor);
}
 //Não acontece mais o que o livro expoem: