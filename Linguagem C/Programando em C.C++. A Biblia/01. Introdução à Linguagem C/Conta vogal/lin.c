//Programa: lin.c
//Escrito por: Eduardo felizardo Cândido
//Data de criação; 17/06/2019

#include<stdio.h>
int main(void)
{
    char letra;
    int conta_vogal = 0;
    int conta_consoantes = 0;

    for (letra = 'A'; letra < 'Z'; letra++)
    {
        switch (letra)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            conta_vogal++;
            break;
            default: conta_consoantes++;
        }
    }
    printf("O numero de vogais e %d\n", conta_vogal);
    printf("O numero de consoantes e %d\n", conta_consoantes);
}