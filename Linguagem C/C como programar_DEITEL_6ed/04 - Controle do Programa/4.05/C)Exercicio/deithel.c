/*Ache o erro em cada uma das opções a seguir: (Obs.: pode haver mais de um erro.) 
c) imprimi-los. Admita que o usuário digitou 100 A como entrada de dados. scanf("%d", &intVal); charVal = getchar ( ); printf("Inteiro: %d\nCaractere: %c\n", intVal, charVal);*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração das variáveis*/
    int intVal;         //Declaração do inteiro
    char charVal[6];    //Declaração do caractere

    /*Entrada de dados*/
    printf("Digite um numero e uma letra: ");
    scanf("%d%s", &intVal, charVal);            //Lê os valores

    /*Bloco de comandos*/
    printf("Inteiro: %d\nCaractere: %s\n", intVal, charVal);    //Imprimi os valores

    system("pause");
    return 0;
}
/*Fim do código*/