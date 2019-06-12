//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de Criação: 12/06/2019

/* Quando seus programas efetuam formatação sofisticada na tela, algumas vezes você quererá saber o número de caracteres que p rin tf exibiu. Quando você usar o especificador de formato %n, p rin tf atribuirá a uma variável (passada por ponteiro) um contador do número de caracteres que p rin tf exibiu. Q programa a seguir, prt_cnt.c, ilustra o uso do especificador de formato %n:*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    //Forma de ser feita no livro, está desatualizada...
    int primeiro_conta;
    int segundo_conta;

    printf("Bíblia%n do Programador C/C++, do Jamsal%n\n", &primeiro_conta, &segundo_conta);    //Não funciona...
    printf("Primeiro conta %d Segundo conta %d\n", primeiro_conta, segundo_conta);              //Não funciona...
    printf("\n\n");

    //Forma atual de se fazer a contagem de caracteres utlizando o exemplo do livro....
    
    int tamanho1;
    int tamanho2;
    char palavra[7] = "Biblia";
    char frase[40] = "do Programador C/C++, do Jamsal";

    tamanho1 = strlen(palavra);
    tamanho2 = strlen(frase);

    printf("%s %s\n", palavra, frase);
    printf("Primeiro conta %d Segundo conta %d\n", tamanho1, tamanho2);
}

