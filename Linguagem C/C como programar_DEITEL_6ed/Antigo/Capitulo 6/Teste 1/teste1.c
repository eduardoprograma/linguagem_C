/*Estudando a forma da char/String*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NOMEL 6
#define NOMEC 50

main()
{
    setlocale(LC_ALL, "protuguese-brazilian");
    /* Declaração das variáveis */
    char vetorNome[NOMEL][NOMEC], nome;
    int i;

    /* Entrada de dados */
    for(i = 0; i < NOMEL; i++)
    {
        printf("Digite o nome completo: ");
        scanf("%s", vetorNome[i]);
    }

    /* Bloco de comandos */
    for(i = 0; i < 6; i++)
    {
        printf("\n%s\t\n", vetorNome[i]);
    }
    system("pause");
    return 0;    
}
