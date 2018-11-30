/* Fig. 5,12: fig05_12. c
   Um exemplo de escopo */
#include <stdio.h>

void useLocal (void); /* protótipo da função */
void useStaticLocal (void); /* protótipo da função */
void useGlobal (void); /* protótipo da função */

int x = 1; /* variável global */

/* função principal começa a execução do programa */
int main (void)
{
   int x = 5; /* variável local para Main */

   printf ("local x no escopo externo do Main e %d\n", x);

   {/* Iniciar novo âmbito */
      int x = 7; /* variável local para novo escopo */

      printf ("local x no escopo interno do Main e %d\n", x);
   }/* finalizar novo escopo */

   printf ("local x no escopo externo do Main e %d\n", x);

   useLocal (); /* useLocal tem x local automático */
   useStaticLocal (); /* useStaticLocal tem estática local x */
   useGlobal (); /* useGlobal usa global x */
   useLocal (); /* useLocal reinitializes local automático x */
   useStaticLocal (); /* static local x retém o seu valor anterior */
   useGlobal (); /* global x também retém seu valor */

   printf ("\nlocal x in Main e %d\n", x);
   return 0; /* indica a terminação bem-sucedida */
}/* End Main */

/* useLocal reinicializa a variável local x durante cada chamada */
void useLocal (void)
{
   int x = 25; /* inicializado cada vez que useLocal é chamado */

   printf ("\nlocal x em useLocal e %d depois de entrar useLocal\n", x);
   x++;
   printf ("local x em useLocal e %d antes de sair useLocal\n", x);
}/* função End useLocal */

/* useStaticLocal Inicializa a variável local estática x somente a primeira vez 
   a função é chamada; valor de x é salvo entre chamadas para este
   função */
void useStaticLocal (void)
{
   /* inicializado apenas pela primeira vez useStaticLocal é chamado */
   static int x = 50;  

   printf ("\nlocal static x e %d na entrada useStaticLocal\n", x);
   x++;
   printf ("local estático x e %d em sair useStaticLocal\n", x);
}/* função End useStaticLocal */

/* função useGlobal modifica variável global x durante cada chamada */
void useGlobal (void)
{
   printf ("\nglobal x e %d na entrada useGlobal\n", x);
   x *= 10;
   printf ("global x e %d em sair useGlobal\n", x);
}/* função End useGlobal */



/**************************************************************************
 * (C) Copyright 1992-2010 por Deitel & Associates, Inc. e *
 * Pearson educação, Inc. Todos os direitos reservados.                           *
 *                                                                        *
 * Disclaimer: os autores e editor deste livro ter usado a sua *
 * os melhores esforços na preparação do livro. Estes esforços incluem o *
 * desenvolvimento, pesquisa e testes das teorias e programas *
 * para determinar a sua eficácia. Os autores e editores fazem *
 * nenhuma garantia de qualquer tipo, expressa ou implícita, em relação a estes *
 * programas ou à documentação contida nestes livros. Os autores *
 * e o Publisher não será responsabilizado em caso algum por incidentes ou
 * danos conseqüentes em relação a, ou decorrentes de, o *
 * mobiliário, desempenho ou utilização destes programas.                     *
 *************************************************************************/