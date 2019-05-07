/* Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Estrutura de dados */
struct Controle_pessoa
{
    char nome[60];
    int dia_nacimento;
    int mes_nacimento;
    int ano_nacimento;
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
    int idade[6] = {0}, mes[6] = {0}, dia[6] = {0};
    int i, j, k;

    /* Controle da idade */
    int anos[6] = {0}, meses[6] = {0}, dias[6] = {0};

    /* Comparação da idade */
    int idadeMaior = 0, diaMaior = 0, mesMaior = 0;
    int idadeMenor = 0, diaMenor = 0, mesMenor = 0;


    
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
    }
    
    /* calculos de idades */
    for(i = 0; i < 6; i++)
    {
        /* Mês de Nascimento == Mês Atual */
        if(pessoa[i].mes_nacimento == (data_hora_atual ->tm_mon))
        {
            /* Dia de Nascimento > Dia Atual */
            if(pessoa[i].dia_nacimento > (data_hora_atual ->tm_mday))
            {

            }
            /* Dia de Nascimento < Dia Atual */
            else if(pessoa[i].dia_nacimento < (data_hora_atual ->tm_mday))
            {

            }
            /* Dia de NAscimento == Dia Atual */
            else
            {

            }
        }
        /* Mês de Nascimento != Mês Atual */
        else 
        {
            /* Mês Nascimento > Mês Atual */
            if(pessoa[i].mes_nacimento > (data_hora_atual ->tm_mon))
            {
               /* Dia de Nascimento > Dia Atual */
                if(pessoa[i].dia_nacimento > (data_hora_atual ->tm_mday))
                {

                }
                /* Dia de Nascimento < Dia Atual */
                else if(pessoa[i].dia_nacimento < (data_hora_atual ->tm_mday))
                {

                }
                /* Dia de Nascimento == Dia Atual */
                else
                {

                }
            }
            /* Mês Nascimento < Mês Atual */
            else
            {
                /* Dia de Nascimento > Dia Atual */
                if(pessoa[i].dia_nacimento > (data_hora_atual ->tm_mday))
                {

                }
                /* Dia de Nascimento < Dia Atual */
                else if(pessoa[i].dia_nacimento < (data_hora_atual ->tm_mday))
                {

                }
                /* Dia de Nascimento == Dia Atual */
                else
                {

                }
            }
        }
    }
    /* Fim do \Claculo da idade */

    /* Comparação de idades */
    
    for(i = 0; i < 6; i++)
    {
        /* Atribuição de idade menor */
        for(j = 0; j < 1; j++)
        {
            idadeMenor = idade[i];
            mesMenor = mes[i];
            diaMenor = dia[i];
        }

        /* Comparando idade Maior */
        if(idade[i] > idadeMaior)
        {
            if()
        }
    }
    
    for(i = 0; i < 6; i++)
    {
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Idade: %d anos, %d meses, %d dias.\n\n", anos[i], meses[i], dias[i]);
    }
    return 0;
}
/* fim do código */

