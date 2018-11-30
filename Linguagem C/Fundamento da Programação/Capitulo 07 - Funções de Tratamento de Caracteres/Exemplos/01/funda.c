/*Faça um programa que receba uma frase,calcule e mostre a quantidade de palavras da frase digitada.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*ELEMENTOS DO VETOR OU MATRIZ*/
#define FRASE 100

/*INICIO DO CÓDIGO*/
main()
{
    /*DECLARAÇÃO DAS VARIÁVEIS*/
    char frase[FRASE] = "";         //Declaração do vetor caractere;
    int palavra = 0;                //Contador de palavra

    /*ENTRADA DE DADOS*/
    printf("Digite uma frase:\n");  //Entrada da frase;
    scanf("%s", &frase);            //Lê a frase

    /*BLOCO DE COMANDOS*/
    while(frase != "/0"){           //Determina o fim da frase
        if(frase == "")            //Compara o carctere com espaço em branco
        {
            palavra++;              //Contador
        }
    }
    
    system("pause");
    return 0;
}
/*FIM DO CÓDIGO*/