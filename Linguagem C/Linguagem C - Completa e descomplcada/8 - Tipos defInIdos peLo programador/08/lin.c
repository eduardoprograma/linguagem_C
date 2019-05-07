/* Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Estrutura de dados */
struct Controle_pessoa
{
    char nome[60];
    int dia_nacimento;
    int mes_nacimento;
    int ano_nacimento;
    int idade;
}pessoa[6];
/*Fim da estrutura de dados */

/* inicio do código */
int main()
{
    /***********************************************************/
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

    /* declaração das varáveis */
    int i, j;

    /* Varáveis de Comparação da idade */
    int idadeMaior = 0, diaMaior = 0, mesMaior = 0, anoMaior = 0;
    int idadeMenor = 0, diaMenor = 0, mesMenor = 0, anoMenor = 0;
    char nomeMaior[60], nomeMenor[60];


    
    printf("\nData ........: %d/%d/%d\n\n", data_hora_atual->tm_mday, data_hora_atual->tm_mon+1, data_hora_atual->tm_year+1900); //data atualizada do sistema.

    /* entrada de dados */
    for(i = 0; i < 6; i++)
    {
        printf("Digite o nome completo     : ");        //Nome completo da pessoa a ser estudada.
        fflush(stdin);                                  //Limpa o buffer do teclado.
        fgets(pessoa[i].nome, 60, stdin);               //Guarda o nome no vetor.

        printf("Digite a dadta de nacimento: ");        //Digite como exemplo 00/00/0000.
        scanf("%d/%d/%d", &pessoa[i].dia_nacimento, &pessoa[i].mes_nacimento, &pessoa[i].ano_nacimento);
        //guarda a data.
        printf("\n\n");
        pessoa[i].idade = (data_hora_atual -> tm_year + 1900) - pessoa[i].ano_nacimento;   //Calculo da idade
    }

    /* Comparação de idades */
    
    for(i = 0; i < 6; i++)
    {
        /* Atribuição de idade menor */
        for(j = 0; j < 1; j++)
        {
            idadeMenor = pessoa[i].idade;
            anoMenor = pessoa[i].ano_nacimento;
            mesMenor = pessoa[i].mes_nacimento;
            diaMenor = pessoa[i].dia_nacimento;
            strcpy(nomeMenor, pessoa[i].nome);
        }

        /* Comparando idade Maior */
        if(pessoa[i].idade > idadeMaior)
        {
            idadeMaior = pessoa[i].idade;
            anoMaior = pessoa[i].ano_nacimento;
            mesMaior = pessoa[i].mes_nacimento;
            diaMaior = pessoa[i].dia_nacimento;
            strcpy(nomeMaior,pessoa[i].nome);
        }            

        /* Idade Igual, porem mes e dia diferentes */
        else if(pessoa[i].idade == idadeMaior)
        {
            if(pessoa[i].mes_nacimento > mesMaior)
            {
                idadeMaior = pessoa[i].idade;
                anoMaior = pessoa[i].ano_nacimento;
                mesMaior = pessoa[i].mes_nacimento;
                diaMaior = pessoa[i].dia_nacimento;
                strcpy(nomeMaior, pessoa[i].nome);
            }
            else if(pessoa[i].mes_nacimento == mesMaior)
            {
                if(pessoa[i].dia_nacimento > diaMaior)
                {
                    idadeMaior = pessoa[i].idade;
                    anoMaior = pessoa[i].ano_nacimento;
                    mesMaior = pessoa[i].mes_nacimento;
                    diaMaior = pessoa[i].dia_nacimento;
                    strcpy(nomeMaior, pessoa[i].nome);
                }
            }
        }
        else
        {
            if(pessoa[i].idade < idadeMenor)
            {
                idadeMenor = pessoa[i].idade;
                anoMenor = pessoa[i].ano_nacimento;
                mesMenor = pessoa[i].mes_nacimento;
                diaMenor = pessoa[i].dia_nacimento;
                strcpy(nomeMenor, pessoa[i].nome);
            }
            else if(pessoa[i].idade == idadeMenor)
            {
                if(pessoa[i].mes_nacimento < mesMenor)
                {
                    idadeMenor = pessoa[i].idade;
                    anoMenor = pessoa[i].ano_nacimento;
                    mesMenor = pessoa[i].mes_nacimento;
                    diaMenor = pessoa[i].dia_nacimento;
                    strcpy(nomeMenor, pessoa[i].nome);
                }
                else if(pessoa[i].mes_nacimento == mesMenor)
                {
                    if(pessoa[i].dia_nacimento < diaMenor)
                    {
                        idadeMenor = pessoa[i].idade;
                        anoMenor = pessoa[i].ano_nacimento;
                        mesMenor = pessoa[i].mes_nacimento;
                        diaMenor = pessoa[i].dia_nacimento;
                        strcpy(nomeMenor, pessoa[i].nome);
                    }
                }
            }
        } 
    }
    
    /* Saída de dados */
    printf("\n\n");
    printf("%s e a pessoa mais velha, nascida em %d/%d/%d. Sua idade e %d\n\n", nomeMaior, diaMaior, mesMaior, anoMaior, idadeMaior);
    printf("%s e a pessoa mais nova, nascida em %d/%d/%d. Sua idade e %d\n\n", nomeMenor, diaMenor, mesMenor, anoMenor, idadeMenor);
    return 0;
}
/* fim do código */

