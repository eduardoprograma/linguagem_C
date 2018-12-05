/*Identifique e corrija os erros em cada um dos itens seguintes (Nota: pode haver mais de um erro em cada conjunto de linhas de código):
a) if (idade >= 65); 
printf("Idade e maior que ou igual a 65\n"); 
else printf("Idade e menor que 65\n");
b) int x = 1, total; 
while (x <= 10) { total += x; + +x; }
c) While (x <= 100) 
total += x; + +x;
d) while (y > 0) 
{ printf("%d\n", y); ++y; }*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    //a) if (idade >= 65); 
    //printf("Idade e maior que ou igual a 65\n");
    //else printf("Idade e menor que 65\n");

    //Como deve ser o programa
    /*Declare as variáveis*/
    int idade;

    /*Entrada de dados*/
    printf("Digite a idade: ");
    scanf("%d", &idade);

    /*Bloco de comando*/ 
    if(idade >= 65)
    {
        printf("Idade e maior que ou igual a 65\n");
    }
    else
    {
        printf("Idade e inferior que a 65\n");
    }
    printf("\n");

    //b) int x = 1, total; 
    //while (x <= 10) { total += x; + +x; }

    //Como deve ser um programa:
    /*Declare as variáveis*/
    int x = 1, total = 0;

    /*Bloco de comando*/
    while(x <= 10)
    {
        total += x;
        ++x;
    }

    /*Saída de dados*/
    printf("O valor total: %d", total);
    printf("\n\n");

    //c) While (x <= 100) 
    //total += x; + +x;

    //Como deve ser um programa
    /*Declare as variáveis*/
    x = 0;          //Variável já declarada
    total = 0;      //Variável já declarada   

    /*Bloco de comando*/
    while(x <= 100)
    {
        total += x;
        ++x;
    }
    printf("O valor total: %d", total);
    printf("\n\n");

    //d) while (y > 0) 
    //{ printf("%d\n", y); ++y; }

    //Como deve ser um programa
    /*Declare as variáveis*/
    int y = 1;

    /*Bloco de comando*/
    while(y < 100)
    {
        printf("%d\n", y);
        ++y;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
/*Fim do código*/