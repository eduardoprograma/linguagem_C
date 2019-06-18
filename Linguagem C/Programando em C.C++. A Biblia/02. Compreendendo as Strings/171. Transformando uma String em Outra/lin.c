// Programa: lin.c 
// Escrito por: Eduardo Felizardo Cândido
// Data de criação: 18/06/2019 
// Propósito: Mostrar como copiar o conteúdo de uma String em outra.

/*Várias dicas neste livro mostraram como copiar o conteúdo de uma string em outra. A função strxfrm copia o conteúdo de uma string em outra (até o número de caracteres que você especifica dentro do parâmetro n ) e, depois, retorna o tamanho da string resultante:

#include <string.h> 
size_t strxfrm(char *alvo, char *origem, size_t n);

O parâmetro alvo é um ponteiro para o qual a função strxfrm copia a string origem. O parâmetro n especifica o número máximo de caracteres a copiar. O programa a seguir, strxfrm. c, ilustra como usar a função strxfrm: */
#include<stdio.h>
#include<string.h>

int main(void)
{
    char buffer[64] = "Programador Formado e outra coisa..."; 
    char alvo[64]; int tamanho;

    tamanho = strxfrm(alvo, buffer, sizeof(buffer)); 
    
    printf("Tamanho %d Alvo %s Buffer %s\n", tamanho, alvo, buffer);
}
