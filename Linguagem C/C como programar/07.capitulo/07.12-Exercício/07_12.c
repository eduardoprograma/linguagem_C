/*
 ============================================================================
 Name			: exercicio_07.26
 Author      	: Eduardo Felizardo
 Creation date 	: 11/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    7.12 Embaralhamento e distribuição de cartas. Modifique o programa na Fi-
    gura 7.24 de modo que a função de distribuição de cartas cuide de uma mão 
    de cinco cartas no pôquer. Depois, escreva as seguintes funções adicionais:
    a) Determine se a mão contém um par. 
    b) Determine se a mão contém dois pares. 
    c) Determine se a mão contém uma trinca (por exemplo, três valetes).
    d) Determine se a mão contém uma quadra (por exemplo, quatro ases).
    e) Determine se a mão contém um flush (ou seja, cinco cartas do mesmo nai-
    pe).
    f) Determine se a mão contém straight (ou seja, cinco cartas de valores de 
    naipe consecutivos).
 ============================================================================
*/
/* Bibliotecas de cabeçalho */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
/* fim Bibliotecas de cabeçalho */

/* Inicio protótipos de funções */
void embaralha(int wbaralho[][13]);
void distribui(const int wbaralho[][13], const char *wFace[], const char *wNaipe[]);
void determine(const char *compara[], const char *naipeCompara[]);
void strainght(const char *compara[], const char *naipeCompara[]);
/* fim protótipo de funções */

/* inicio da função main */
int main(void)
{
    /* inicializa o array */
    const char *naipe[4] = {"Copas", "Ouros", "Paus", "Espadas"};

    /* inicializa array naipe */
    const char *face[13] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", 
    "Oito", "Nove", "Dez", "Valete", "Dama", "Reis"};

    /* innicializa o array baralho */
    int baralho[4][13] = {0};

    /* gerador de números aleatórios */
    srand(time(0));

    /* embaralha */
    embaralha(baralho);

    /* distribui as cartas do baralho */
    distribui(baralho, face, naipe);

    return 0; // indica conclusão bem sucedida.
}
/* fim da função main */

/* função embaralha as cartas */
void embaralha(int wbaralho[][13])
{
    int linha;/* numero de linha */
    int coluna;/* número de coluna */
    int carta;/* contador */

    /* para cada uma das 52 cartas, escolhe slot de deck aleatóriamente */
    for(carta = 1; carta <= 52; carta++)
    {
        /* escolhe novo local aleatório até que novo slot não ocupado seja encontrado */
        do
        {
            linha = rand() % 4;
            coluna = rand() % 13;
        }while(wbaralho[linha][coluna] != 0);/* fim do do...while */

        /* coloca número da carta no slot escolhido do baralho */
        wbaralho[linha][coluna] = carta;
    }/* fim do for */
}
/* fim da função ebaralha as cartas */

/* inicio da função distribui as cartas */
void distribui(const int wbaralho[][13], const char *wFace[], const char *wNaipe[])
{
    int carta;/* contador de cartas */
    int linha;/* contador de linha */
    int coluna;/* contador de coluna */
    const char *compara[5];/* char de comparação */
    const char *naipeCompara[5];/* char de comparação */
    int contCompara = 0;/* contador compara */

    /* distribui cada uma das 52 cartas */
    for(carta = 1; carta <= 5; carta++)
    {
        /* loop pelas linhas de wbaralho */
        for(linha = 0; linha <= 3; linha++)
        {
            /* loop pelas colunas de wbaralho para linha atual */
            for(coluna = 0; coluna <= 13; coluna++)
            {
                /* se slot contém cartão atual, mostra carta */
                if(wbaralho[linha][coluna] == carta)
                {
                    printf("%1s de %-8s\n", wFace[coluna], wNaipe[linha]);
                    compara[contCompara] = wFace[coluna];
                    naipeCompara[contCompara] = wNaipe[linha];
                    contCompara++;
                }/* fim do if */
            }/* fim do for */
        }/* fim do for */
    }/* fim do for */
    determine(compara , naipeCompara);
}
/* fim da função distribui as cartas */

/* inicio da função Determine */
void determine(const char *compara[], const char *naipeCompara[])
{
    int contadorInicial;/* conta o comparado */
    int contadorFinal;/* conta o comparando */
    int resumo = 0;/* compara */
    //int contaCarta = 0;/* conta cartas iguais */
    const char *aux = {" "};/* ponteiro auxiliar */
    
    /* contadores */
    int par = 0;/* conta par */
    int doisPares = 0;/* conta dois pares */
    int trinca = 0;/* conta tres cartas iguais */
    int quadra = 0;/* conta quatro cartas iguais */
    int flush = 0;/* conta cinco cartas iguais */

    /* Comparado */
    for(contadorInicial = 0; contadorInicial < 5; contadorInicial++)
    {
        /* Iguala  o valor do ponteiro */
        aux = compara[contadorInicial];
        /* comparando */
        for(contadorFinal = contadorInicial + 1; contadorFinal < 5; contadorFinal++)
        {
            /* compara as cartas */
            resumo = strcmp(compara[contadorInicial], compara[contadorFinal]);

            /* conta se a carta é igual */
            if(resumo == 0)
            {
                if(aux == compara[contadorInicial])
                {
                    par++;
                }
                if(aux == compara[contadorInicial])
                {
                    doisPares++;
                }
                if(aux == compara[contadorInicial])
                {
                    trinca++;
                }
                if(aux == compara[contadorInicial])
                {
                    quadra++;
                }
                if(aux == compara[contadorInicial])
                {
                    flush++;
                }
            }
        }
    }
    printf("\n");
    if(par == 1)
    {
        printf("Voce possui um par.\n");
    }
    if(doisPares == 2)
    {
        printf("Voce possui dois pares.\n");
    }
    if(trinca == 3)
    {
        printf("Voce possui uma trinca.\n");
    }
    if(quadra == 4)
    {
        printf("Voce possui uma quadra.\n");
    }
    if(par == 5)
    {
        printf("Voce possui um flush.\n");
    }
    if(par == 0)
    {
        strainght(compara, naipeCompara);
    }
}
/* fim da função Determine */

/* Determina se a mão possui cartas do mesmo Naipe e em sequencia */
/* inicio da função strainght */
void strainght(const char *compara[], const char *naipeCompara[])
{
    int contadorInicial;/* conta o comparado */
    int contadorFinal;/* conta o comparando */
    int resumo = 0;/* compara */
    const char *aux = {" "};/* ponteiro auxiliar */
    const char *face[13] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", 
    "Oito", "Nove", "Dez", "Valete", "Dama", "Reis"};

    /* contadores auxiliares */
    int cont  = 1;

    for(contadorInicial = 0; contadorInicial < 1; contadorInicial++)
    {
        /* inicia a variável auxiliar */
        aux = naipeCompara[contadorInicial];
        for(contadorFinal = 1; contadorFinal < 5; contadorFinal++)
        {
            resumo = strcmp(naipeCompara[contadorInicial], naipeCompara[contadorFinal]);
            
            /* conta quantas vezes o naipe aparece */
            if(resumo == 0)
            {
                cont++;
            }
        }
    }
    printf("cont =  %d\n\n", cont);
    if(cont == 5)
    {
        for(contadorInicial = 0; contadorInicial < 5; contadorInicial++)
        {
            for(contadorFinal = 1; contadorFinal < 13; contadorFinal++)
            {
                resumo = strcmp(compara[contadorInicial], face[contadorFinal]);
                if(resumo == 0)
                {

                }
            }
        }
    }
    else
    {
        printf("Sua mao e esta fraca.\n\n");
    }
}
/* fim da função strainght */
