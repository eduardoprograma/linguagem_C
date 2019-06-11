//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Uma string de caracteres é uma seqüência de zero ou mais caracteres. (A seção Compreendendo as Strings, mais à frente, discute as strings de caracteres em maiores detalhes.) Uma das operações mais comuns que seus programas executarão é a saída de string de caracteres. Como você aprendeu, a função p rin tf suporta os especificadores de formato que oferecem informações sobre seus tipos de parâmetro (tais como int, float, char etc.). Para exibi uma string de caracteres usando printf, você deverá usar o especificador de formato %s. O programa a seguir, str_sai.c, usa o especificador de formato %s para exibir uma string de caracteres:*/

#include <stdio.h>

int main(void)
{
    char titulo[255] = "Bíblia do Programador C/C++, do Jamsa!";
    
    printf("O nome deste livro é %s\n", titulo);
}