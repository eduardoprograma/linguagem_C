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

/* inicio da função main */
int main(void)
{
    int controle = 1;/* controle para fazer duas mão de cartas */
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
    distribui(controle, baralho, face, naipe);
    
    /* distribui as cartas do baralho */
    controle = contr(controle);/* chama segunda mão */
    distribui(controle, baralho, face, naipe);

    return 0; // indica conclusão bem sucedida.
}
/* fim da função main */