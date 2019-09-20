/*
 ============================================================================
 Name			: void_mao.c
 Author      	: Eduardo Felizardo
 Creation date 	: 19/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    Exercício 7.12
    Função mao
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/* inicio da função mao */
void mao(const char *wFace[], const char *wNaipe[])
{
   int contador;/* contador */
   int contAuxiliar;/* contador auxiliar */
   int retorno1;/* retorna 0 se a comparação for igual */
   int retorno2;/* retorna 0 se a comparação for igual */
   int contNaipe;/* conta o naipe */
   int face[] = {0};/* recebe o array para organiza-lo */

   /* contadores do tipo de mão */
   int par = 0;/* conta 1 para par */
   int doisPares = 0;/* conta 2 para doois pares */
   int trinca = 0;/* conta 3 para três cartas com a mesma face */
   int quadra = 0;/* conta 4 para quatro cartas com a  mesma face */
   int contNaipe = 0;/* conta 5 para cartas do mesmo naipe */
   int straight = 0;/* conta 5 para cartas do mesmo naipe */
   int contadorStraight = 0;/* conta 5 para cartas do mesmo sequênciais */

   /* loop de contador da comparação */
   for(contador = 0; contador < 5; contador++)
   {
      for(contAuxiliar = contador - 1; contador < 5; contAuxiliar++)
      {
         retorno1 = strcmp(wFace[contador],wFace[contAuxiliar]);
         retorno2 = strcmp(wNaipe[contador], wNaipe[contAuxiliar]);

         /* contadores */
         if(retorno1 == 0)
         {
            par++;
            doisPares++;
            trinca++;
            quadra++;
         }
         /* contador flush */
         if(retorno2 == 0)
         {
            contNaipe++;
            /* condição para ser flush */
            if((contador == 0) && (contNaipe == 4));
            {
               contNaipe += 1;
            }/* fim de if */
         }/* fim de if */
      }/* fim de for */
   }/* fim de for */

   /* loop para transformar o string em um inteiro corresppondente com a sua face */
   for(contador = 0; contador < 5; contador++)
    {
        if(strcmp(wFace[contador],"As") == 0)
        {
            face[contador] = 1;
        }/* fim de if */
        if(strcmp(wFace[contador],"Dois") == 0)
        {
            face[contador] = 2;
        }/* fim de if */
        if(strcmp(wFace[contador],"Tres") == 0)
        {
            face[contador] = 3;
        }/* fim de if */
        if(strcmp(wFace[contador],"Quatro") == 0)
        {
            face[contador] = 4;
        }/* fim de if */
        if(strcmp(wFace[contador],"Cinco") == 0)
        {
            face[contador] = 5;
        }/* fim de if */
        if(strcmp(wFace[contador],"Seis") == 0)
        {
            face[contador] = 6;
        }/* fim de if */
        if(strcmp(wFace[contador],"Sete") == 0)
        {
            face[contador] = 7;
        }/* fim de if */
        if(strcmp(wFace[contador],"Oito") == 0)
        {
            face[contador] = 8;
        }/* fim de if */
        if(strcmp(wFace[contador],"Nove") == 0)
        {
            face[contador] = 9;
        }/* fim de if */
        if(strcmp(wFace[contador],"Dez") == 0)
        {
            face[contador] = 10;
        }/* fim de if */
        if(strcmp(wFace[contador],"Valete") == 0)
        {
            face[contador] = 11;
        }/* fim de if */
        if(strcmp(wFace[contador],"Dama") == 0)
        {
            face[contador] = 12;
        }/* fim de if */
        if(strcmp(wFace[contador],"Reis") == 0) 
        {
            face[contador] = 13;
        }/* fim de if */
    }/* fim de for */

    /* Chama a função bubble */
    //bubble(face, 5, crescente);

   /* Loop Compara para saber se a mao é um Straight */
    for(contador = 0; contador < 5; contador++)
    {
       if(contNaipe == 5)
       {
          if(face[contador] == face[contador - 1])
          {
             contadorStraight++;
          }/* fim de if */
       }/* fim de if */
    }/* fim de for */
    //resultado(par, doispares, trinca, quadra, conNaipe, contadorStraight);
}
/* fim da função mao */