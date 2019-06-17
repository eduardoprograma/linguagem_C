//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019
//Discrição: Livro

/*À medida que você trabalhar com variáveis do tipo char, ou com strings de caracteres, algumas vezes precisará atribuir um caractere de apóstrofo ou de aspas a uma variável. Por exemplo, para escrever Caixa dagua, você precisa incluir o apóstrofo dentro da string. Nesses casos, você precisa colocar o caractere dentro de apóstrofos precedido por uma barra invertida (\), como mostrado aqui:

            char apostrofe = '\'' ;
            char aspas = '\"';

Além dos caracteres de apóstrofo, seus programas podem requerer que você atribua um dos caracteres especiais listados na Tabela 52. Para fazer isso, simplesmente coloque o símbolo do caractere imediatamente após o caractere de barra invertida. Em todos os casos, você precisa usar letras minúsculas para representar o caractere
especial.
************************************************************************
Tabela 52 - Caracteres de escape definidos por C.
Caractere de Escape         Significado
************************************************************************
\a                          Caractere ASCII do aviso sonoro
\b                          Caractere de retrocesso
\f                          Caractere de avanço do formulário
\n                          Caractere de nova linha
\r                          Retomo do carro (sem alimentação de linha)
\t                          Tabulação horizontal
\v                          Tabulação vertical
\\                          Caractere da barra invertida
\'                          Apóstrofo
\"                          Aspas
\?                          Interrogação
\nnn                        Valor ASCII em octal
\xnnn                       Valor ASCII em hexadecimal                  */

#include <stdio.h>
int main(void)
{
    char apostrofe = '\'' ;
    char aspas = '\"';

    printf("\n\n");
    printf("%10C\n", apostrofe);
    printf("%10C\n", aspas);
}