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
    7.13 Projeto: embaralhar e distribuir cartas. Use as funções desenvolvid-
    as no Exercício 7.12 para escrever um programa que trate duas mãos de pô-
    quer com cinco cartas; avalie cada mão e determine qual é a melhor.
 ============================================================================
*/
/* Bibliotecas de cabeçalho */
/* Bibliotecas de cabeçalho */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define SIZE 5
/* fim Bibliotecas de cabeçalho */

/* Inicio protótipos de funções */
void embaralha(int wbaralho[][13]);
void distribui(const int wbaralho[][13], const char *wFace[], const char *wNaipe[]);
void ordem(const int wbaralho[][13], const char *wFace[], const char *wNaipe[]);
void mao(const char *wFace[], const char *wNaipe[]);
void bubble( int work[], const int size, int (*compare)( int a, int b ) );
int crescente(int a, int b);
void resultaMao(int par, int doisPares, int trinca, int quadra, int contNaipe, int contador_Straing);
/* fim protótipo de funções */

/* inicio da função main */
int main(void)
{
    /* inicializa o array */
    const char *naipe[4] = {"Copas", "Ouros", "Paus", "Espadas"};

    /* inicializa array naipe */
    const char *face[13] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Reis"};

    /* innicializa o array baralho */
    int baralho[4][13] = {0};

    /* gerador de números aleatórios */
    srand(time(0));

    /* embaralha */
    embaralha(baralho);

    /* distribui as cartas do baralho */
    distribui(baralho, face, naipe);

    /* coloca em ordem as cartas do baralho */
    ordem(baralho, face, naipe);

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

    /* distribui cada uma das 52 cartas */
    for(carta = 1; carta <= 5; carta++)
    {
        /* loop pelas linhas de wbaralho */
        for(linha = 0; linha <= 3; linha++)
        {
            /* loop pelas colunas de wbaralho para linha atual */
            for(coluna = 0; coluna <= 12; coluna++)
            {
                /* se slot contém cartão atual, mostra carta */
                if(wbaralho[linha][coluna] == carta)
                {
                    printf("%d-%-3s de %-3s%c", carta, wFace[coluna], wNaipe[linha], carta % 5 == 0 ? '\n' : '\t');
                }/* fim do if */
            }/* fim do for */
        }/* fim do for */
    }/* fim do for */
}
/* fim da função distribui as cartas */

/* Coloca em ordem de 0 a 4 a nossa array */
void ordem(const int wbaralho[][13], const char *wFace[], const char *wNaipe[])
{
    int carta;/* contador de cartas */
    int linha;/* contador de linha */
    int coluna;/* contador de coluna */
    const char *face[5];
    const char *naipe[5];
    int contador = 0;

    /* distribui cada uma das 52 cartas */
    for(carta = 1; carta <= 52; carta++)
    {
        /* loop pelas linhas de wbaralho */
        for(linha = 0; linha <= 3; linha++)
        {
            /* loop pelas colunas de wbaralho para linha atual */
            for(coluna = 0; coluna <= 12; coluna++)
            {
                /* se slot contém cartão atual, mostra carta */
                if(wbaralho[linha][coluna] == carta)
                {
                    face[contador] = wFace[coluna]; 
                    naipe[contador] = wNaipe[linha];
                    //printf("%s de %s\n", face[contador], naipe[contador]);
                    contador++;
                }/* fim do if */
            }/* fim do for */
        }/* fim do for */
        /* quando o contador chegar e 6 ele chama a próxima função */
        if(carta == 5)
        {
            mao(face, naipe);
        }
    }/* fim do for */
}

/* Determina a mão de cartas */
void mao(const char *wFace[], const char *wNaipe[])
{
    int contador;/* contador */
    int contAuxiliar;/*contador auxiliar */
    int retorno1 = 0;/* retorna 0 se a comparação for igual */
    int retorno2 = 0;/* retorna 0 se a comparação for igual */
    int contNaipe = 0;/* conta o naipe */
    int face[] = {0};/* recebe o array para organiza-lo*/
    /* contadores dos tipos de mão */
    int par = 0;
    int doisPares = 0;
    int trinca = 0;
    int quadra = 0;
    //int flush = 0;
    int contador_auxStraing = 1;

    for(contador = 0; contador < 5; contador++)
    {
        for(contAuxiliar = contador + 1; contAuxiliar < 5; contAuxiliar++)
        {
            //printf("Face = %s e Naipe = %s\n", wFace[contador], wNaipe[contAuxiliar]);
            retorno1 = strcmp(wFace[contador], wFace[contAuxiliar]);
            retorno2 = strcmp(wNaipe[contador], wNaipe[contAuxiliar]);
            //printf("%d e %d\n", retorno1, retorno2);

            /* Contadores */
            if(retorno1 == 0)
            {
                par++;
                doisPares++;
                trinca++;
                quadra++;
                //flush++;
            }
            /*if((contador == 0) && (flush == 4))
            {
                flush += 1;
            }*/
            if(retorno2 == 0)
            {
                contNaipe++;
                if((contador == 0) && (contNaipe == 4))
                {
                    contNaipe += 1;
                }
            }
        }//printf("contador auxiliar =  %d\n", contAuxiliar);
    }
    //printf("%d, %d, %d, %d e %d, Naipe =  %d\n\n", par, doisPares, trinca, quadra, flush, contNaipe);
    for(contador = 0; contador < 5; contador++)
    {
        if(strcmp(wFace[contador],"As") == 0)
        {
            face[contador] = 1;
        }
        if(strcmp(wFace[contador],"Dois") == 0)
        {
            face[contador] = 2;
        }
        if(strcmp(wFace[contador],"Tres") == 0)
        {
            face[contador] = 3;
        }
        if(strcmp(wFace[contador],"Quatro") == 0)
        {
            face[contador] = 4;
        }
        if(strcmp(wFace[contador],"Cinco") == 0)
        {
            face[contador] = 5;
        }
        if(strcmp(wFace[contador],"Seis") == 0)
        {
            face[contador] = 6;
        }
        if(strcmp(wFace[contador],"Sete") == 0)
        {
            face[contador] = 7;
        }
        if(strcmp(wFace[contador],"Oito") == 0)
        {
            face[contador] = 8;
        }
        if(strcmp(wFace[contador],"Nove") == 0)
        {
            face[contador] = 9;
        }
        if(strcmp(wFace[contador],"Dez") == 0)
        {
            face[contador] = 10;
        }
        if(strcmp(wFace[contador],"Valete") == 0)
        {
            face[contador] = 11;
        }
        if(strcmp(wFace[contador],"Dama") == 0)
        {
            face[contador] = 12;
        }
        if(strcmp(wFace[contador],"Reis") == 0) 
        {
            face[contador] = 13;
        }
    }
    /*for(contador = 0; contador < 5; contador++)
    {
        printf("%5d",face[contador]);
    }*/
    
    /* passa a função para crescente */
    bubble(face, 5, crescente);

    /* saída crescente */
    //puts(" ");
    /*for(contador = 0; contador < 5; contador++)
    {
        printf("%5d",face[contador]);
    }*/
    for(contador = 0; contador < 5; contador++)
    {
        if(contNaipe == 5)
        {
            if(face[contador] == face[contador - 1])
            {
                contador_auxStraing++;
            }
        }
    } 
    resultaMao(par, doisPares, trinca, quadra, contNaipe, contador_auxStraing);
}

/* */
void bubble(int work[], const int size, int(*compare)(int a, int b))
{
    int passada; /* contador de passada */
    int contador; /* contador de comparações */

    void swap(int *elemento1Ptr, int *elemento2Ptr); /* protótipo */ 

    /* loop das passadas */
    for(passada = 1; passada < size; passada++ )
    {
        /* loop para comparações de passada */
        for(contador = 0; contador < size -1; contador++)
        {
            /* */
            if((*compare)(work[contador], work[contador + 1]))
            {
                swap(&work[contador], &work[contador + 1]);
            }/* fim de if */
        }/* fim de for */
    }/* fim de for */
}/* fim da função bubble */

void swap(int *elemento1Ptr, int *elemento2Ptr)
{
    int manutecao;/* variavel temporaria */

    manutecao = *elemento1Ptr;
    *elemento1Ptr = *elemento2Ptr;
    *elemento2Ptr = manutecao;
}/* fim da função swap */

/* */
int crescente(int a, int b)
{
    return b < a;/* */
}
/* */


void resultaMao(int par, int doisPares, int trinca, int quadra,int contNaipe, int contador_Straing)
{
    if(par == 0)
    {
        printf("Parece que a mao nao esta muito boa.\n");
    }
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
    if(contNaipe == 5)
    {
        printf("Voce possui um flush.\n");
    }
    if((contNaipe == 5) && (contador_Straing == 5))
    {
        printf("E tambem um Straight\n");
    }
}
