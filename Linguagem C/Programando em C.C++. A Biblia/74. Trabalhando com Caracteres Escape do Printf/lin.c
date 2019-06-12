//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 12/06/2019

/* Quando você trabalha com strings de caracteres, algumas vezes quererá usar caracteres especiais, tais como tabulação, retorno do carro, ou alimentação de linha. C define vários caracteres de escape (isto é, caracteres que você precede com o símbolo de escape de C, a barra invertida) para facilitar para você a inclusão de caracteres especiais dentro de uma string. Por exemplo, vários dos programas apresentados neste livro usam o caractere de nova linha (\n) para avançar a saída para o início da próxima linha, como mostrado aqui:

            printf("Linha 1\nLinha 2\nLinha 3\n“);
            
A Tabela 74 lista os caracteres de escape que você pode usar dentro de suas strings de caractere (e, portanto, a saída de printf).

Caractere de Escape                     Significado
***************************************************************************************
\a                                      Caractere ASCII de aviso sonoro
\h                                      Caractere de retrocesso
\f                                      Caractere de avanço de formulário
\n                                      Caractere de nova linha
\r                                      Retomo do carro (sem alimentação de linha)
\t                                      Tabulação horizontal
\v                                      Tabulação vertical
\\                                      Caractere de barra invertida
\'                                      Apóstrofe
\"                                      Aspas
\?                                      Interrogação
\nnn                                    Valor ASCII em octal
\xnnn                                   Valor ASCII em hexadecimal                      */