/*
 ============================================================================
 Name			: exercicio_X.XX
 Author      	: Eduardo Felizardo
 Creation date 	: 06/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================

 ============================================================================
*/

/* inicio da função distribui as cartas */
void distribui(int controle, const int wbaralho[][13], const char *wFace[], const char *wNaipe[])
{
    int carta;/* contador de cartas */
    int linha;/* contador de linhas */
    int coluna;/* contador de colunas */
    const char *face[5];/* ponteiro auxiliar */
    const char *naipe[5];/* ponteiro auxiliar */
    int contador = 0;/* contador auxliar */

    /* estrutura para duas mãos */
    int auxCarta;/* Número da carta que devera ser inicializada */
    int auxCartaNum;/* número que ao qual o contador decrtas deverá respeitar */

    /* Mão de cartas */
    if(controle == 1)
    {
        auxCarta = 1;
        auxCartaNum = 5;
        printf("\n\nA mao de cartas do primeiro jogador.\n");
    }
    else
    {
        auxCarta = 6;
        auxCartaNum = 10;
        printf("A mao de cartas do segundo jogador.\n");
    }

    /* distribui cada uma das 52 cartas */
    for(carta = auxCarta; carta <= auxCartaNum; carta++)
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
                    printf("%d-%-5s de %-5s%c", carta, wFace[coluna], wNaipe[linha], carta % 1 == 0 ? '\n' : '\t');
                    face[contador] = wFace[coluna];
                    naipe[contador] = wNaipe[linha];
                    contador++;
                }/* fim do if */
            }/* fim do for */
        }/* fim do for */
    }/* fim do for */
    mao(face, naipe);
}
/* fim da função distribui as cartas */