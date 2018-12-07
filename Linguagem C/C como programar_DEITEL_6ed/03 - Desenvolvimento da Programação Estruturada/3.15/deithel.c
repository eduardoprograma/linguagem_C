/*Formule um algoritmo em pseudocódigo que faça o seguinte: 
a) Obtenha dois números a partir do teclado, calcule a soma dos números e exiba o resultado. 
b) Obtenha dois números a partir do teclado, determine o maior (se houver) e o exiba. 
c) Obtenha uma série de números positivos a partir do teclado, determine sua soma e a exiba. Admita que o usuário deve digitar o valor sentinela — 1 para indicar.o "final da entrada de dados".*/

#include <stdio.h>
#include <stdlib.h>

/*Iniciodo código*/
int main(void)
{
    /**************************************************************************************/
    //a) Obtenha dois números a partir do teclado, calcule a soma dos números e exiba o resultado.
    /**************************************************************************************/

    /*Declaração das variáveis*/
    int num1, num2;

    /*Entrada de dados*/
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    /*Bloco de comandos*/
    int soma = 0;
    soma = num1 + num2; 

    /*Saída de dados*/
    printf("A soma %c %d\n\n", 130, soma);

    /**************************************************************************************/
    //b) Obtenha dois números a partir do teclado, determine o maior (se houver) e o exiba.
    //Aproveitar as varáveis já declaradas
    /**************************************************************************************/
    
    /*Entrada de dados*/
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    /*Bloco de comando*/
    if(num1 > num2)
    {
        printf("O primeiro numero %c maior\n\n", 130);
    }
    else if(num1 < num2)
    {
        printf("O segundo numero %c maior\n\n", 130);
    }
    else
    {
        printf("Não corresponde ao nosso interesse.\n\n");
    }
    
    /**************************************************************************************/
    //c) Obtenha uma série de números positivos a partir do teclado, determine sua soma e a exiba. Admita que o usuário deve digitar o valor sentinela — 1 para indicar.o "final da entrada de dados".
    //Aproveitamento de variaveis
    /**************************************************************************************/

    /*Entrada de dados*/
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Para finalizar digite -1 aqualquer momento:\n\n");
    soma = 0;
    /*Bloco de comandos*/
    while(num1 != -1)
    {
        soma += num1;
        printf("Digite um numero inteiro: ");
        scanf("%d", &num1);
        printf("\n");
    }

    /*Saída de dados*/
    printf("A soma %c %d\n\n", 130, soma);

    system("pause");
    return 0;
}
/*Fim do código*/