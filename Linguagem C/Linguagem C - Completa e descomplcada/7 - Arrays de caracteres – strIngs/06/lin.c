/* Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui. */
#include <stdio.h>
#include <string.h>
/* inicio do código */
int main () 
{
    /*declaração de variáveis */
    char str[100];
    int i, tam = 0, vogal = 0;
    setbuf(stdin, NULL);

    /* entrada de dados */
    printf("Digite uma palavra um nome ou frase:\n");
    printf("De um espaço e digite:");
    gets(str);

    /* bloco de comando */
    tam = strlen(str);
    for(i = tam; i != '\0'; i--)
    {
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'u' || str[i] == 'U')
        {
            vogal++;
        }
    }

    /* saida de dados */
    printf("O seu texto tem %i de vogais.\n\n", vogal);

    /* Bloco de comandos */
    char letra[2];
    printf("Digite uma vogal ou uma consoante para que possamos substituir todas as vogais da palavra.\n");
    printf("Digite: ");
    gets(letra);
    for(i = tam; i != '\0'; i--)
    {
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'u' || str[i] == 'U')
        {
            str[i] = letra[0];
        }
    }

    /* saida de dados */
    printf("A palavra com alteracoes: %s", str);

    return(0);
}
/* fim do código */