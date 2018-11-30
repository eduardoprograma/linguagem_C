/*Programa que identifica alunos que estão cursando simultaneamente Lógica e Linguagem de programação*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Definição do tamanho dos elementos de vetorização*/
#define SIZEL 15 //Matriculados em Lógica
#define SIZELP 10//Matriculados em Linguagem de Programação

/*Inicio*/
int main()
{
    setlocale(LC_ALL, "pt-br");

    /*Decalração de varáveis*/
    int vetorL[SIZEL] = {0}, i , n;
    int vetorLP[SIZELP] = {0}, j = 0, np, ni, cont;

    /*Entrada de dados*/
    printf("Matriculados em Lógica.\n\n");
    for(i = 0; i < SIZEL; i++) //Matriculados em Lógica
    {
        printf("Digite o número da matricula: ");
        scanf("%d", &n);
        vetorL[i] = n;
    }
    printf("\nMatriculados em Linguagem de Programalção.\n\n");
    for(i =0; i < SIZELP; i ++) //Matriculados em Linguagem de Programação
    {
        printf("Digite o número da matricula: ");
        scanf("%d", &n);
        vetorLP[i] = n;
    }    
    /*Bloco de comando*/
    printf("\nNº da Matrícula\t\n");
    i = -1;
    for(cont = 0; cont < 150; cont++)
    {
        i++;
        /*Saída de dados do bloco de comando*/
        if(vetorL[j] == vetorLP[i]){
            np++;
            printf("%10d\t\n", vetorL[j]);
        }
        else{
            ni++;
        }
        if(i == 10){
            j++;
            i = 0;
        }
        //printf("%d\t%d\t\n", j, i); ///Teste para saber se o programa está comparando
    }
    if(np == 0 && ni > 0){
        printf("\nNão existe alunos matriculados na mesma nas duas mate´ria simultaneamente.\n");
    }
    system("pause");
    return 0;
}
