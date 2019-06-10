/* Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* estrutura atleta */
struct atleta
{
    char nome[60];
    char esporte[60];
    int idade;
    float altura;
}game[5];
/* Fim da estrutura */

/* Inicio do código */
int main()
{
    /****************************processo*************************/
    //ponteiro para struct que armazena data e hora  
    struct tm *data_hora_atual;     
    
    //variável do tipo time_t para armazenar o tempo em segundos  
    time_t segundos;
    
    //obtendo o tempo em segundos  
    time(&segundos);   
    
    //para converter de segundos para o tempo local  
    //utilizamos a função localtime  
    data_hora_atual = localtime(&segundos);  
    /**********************************************************/

    /* Declaração de variáveis */
    int i, j;
    int idadeMaior = 0, idadeNormal = 0;
    float alturaMaior = 0, alturaNormal;
    char nome_idade_maior[60], nome_altura_maior[60], esporte_idade[15], esporte_altura[15];
    /* Fim da declaração de variáveis */

    /* Entrada de dados */
    for(i =0; i < 5; i++)
    {
        printf("Digite nome completo: ");
        fflush(stdin);
        fgets(game[i].nome, 60, stdin);
        printf("Digite a idade: ");
        scanf("%i", &game[i].idade);
        printf("Digite a altura: ");
        scanf("%i", &game[i].altura);
        printf("Informe o categoria de esporte do atleta: ");
        fflush(stdin);
        fgets(game[i].esporte, 15, stdin);        
    }
    /* Fim da entrada de dados */

    /* Comparação de dados */
    for(i = 0; i < 5; i++)
    {
        if(game[i].idade > idadeMaior)
        {
            strcpy(nome_idade_maior, game[i].nome);
            idadeMaior = game[i].idade;
            alturaNormal = game[i].altura;
            strcpy(esporte_idade, game[i].esporte);
        }
        if(game[i].altura > alturaMaior)
        {
            strcpy(nome_altura_maior, game[i].nome);
            idadeNormal = game[i].idade;
            alturaMaior = game[i].altura;
            strcpy(esporte_altura, game[i].esporte);
        }
    }
    /* Fim da comparação de dados */

    /* Saida de dados */
    for(i = 0; i <5; i++)
    {
        if (strcmp(nome_idade_maior, nome_altura_maior) == 0)
        {
            printf("\nO jogador mais velho e mais alto e %s, com idade %d anos e altura %.2f. E pratica o esporte %s\n\n", nome_idade_maior, idadeMaior, alturaMaior, esporte_idade);
        }
        else
        {
            printf("\nO jogador mais velho e %s, com idade %d anos e altura %.2f. E pratica o esporte %s\n\n", nome_idade_maior, idadeMaior, alturaNormal, esporte_idade);
            printf("\nO jogador mais alto e %s, com idade %d anos e altura %.2f. E pratica o esporte %s\n\n", nome_altura_maior, idadeNormal, alturaMaior, esporte_altura);
        }
    }
    /* Fimd e saída de dados */

    return 0;
}
/* Fim do código */