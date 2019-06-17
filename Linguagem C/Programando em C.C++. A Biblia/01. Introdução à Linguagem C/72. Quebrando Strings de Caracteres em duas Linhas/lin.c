//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de Criação: 12/06/2019

/*Quando seus programas usam printf, algumas vezes uma string de caracteres não cabe na linha corrente. Nesses casos, simplesmente coloque uma barra invertida (\) no final da linha, o que fará o texto continuar no início da próxima linha, como mostrado aqui:*/

#include<stdio.h>

int main(void)
{
    printf("Esta linha é muito longa, e, portanto, não cabe na \
mesma linha.");
}

//No meu terminal essa dica não funcionou... VS Code. Já faz isso automáticamente.