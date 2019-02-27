/* Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* inicio do código */
int main()
{
    /* declaração de variáveis */
	char vogais[100], c;
    int i, vogal = 0;

    /* entrada de dados */
    printf("Digite uma palavra ou um nome: ");
    gets(vogais);

    for(i = strlen(vogais); i != '0'; i--)
    {
        c = vogais[i];
        switch (c)
        {
            case 'A':
                vogal++;
                break;
            case 'a':
                vogal++;
                break;
            case 'E':
                vogal++;
                break;
            case 'e':
                vogal++;
                break;
            case 'I':
                vogal++;
                break;
            case 'i':
                vogal++;
                break;
            case 'O':
                vogal++;
                break;
            case 'o':
                vogal++;
                break;
            case 'U':
                vogal++;
                break;
            case 'u':
                vogal++;
                break;
            default:
                break;
        }
    }
    
    printf("O numero de vogais existentes nesta palavra e %i", vogal);
    return 0;
}
/* fim do código */