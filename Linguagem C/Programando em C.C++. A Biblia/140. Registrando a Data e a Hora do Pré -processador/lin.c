//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de Criação: 17/06/2019

/* Ao trabalhar em programas grandes, você poderá querer que seu pré-processador trabalhe com a data e a hora atuais. Por exemplo, você pode querer que o programa exiba uma mensagem que informa a data e a hora em que você compilou pela última vez o programa, como mostrado aqui: Teste Beta: FOLHA.C: Última compilação em Jul 8 1998 14:45 Para lhe ajudar a realizar esse processamento, o pré-processador C atribui a data e a hora atuais às constantes __DATE e __TIME . O programa a seguir, datahora.c, ilustra como você poderia usar as constantes _DATE_ e _TIME_: */

#include<stdio.h>

int main(void)
{
    printf("Teste Beta: Ultima compilacao em %s %s\n", __DATE__, __TIME__);
}