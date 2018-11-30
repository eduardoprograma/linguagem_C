/*Escreva um programa em C que receba três números inteiros diferentes digitados no teclado e imprima a soma, a média, o produto, o menor e o maior desses números. Use a instrução if somente na forma ensinada neste capítulo. A tela de diálogo deve aparecer como se segue:
Entre com três inteiros diferentes: 13 27 14 
A soma e 54 
A media e 18 
O produto e 4914 
O menor e 13 
O maior e 27*/

#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x, y, z;

    /*Entrada de dados*/
    printf("Digite um valor inteiro para x: ");
    scanf("%d", &x);
    printf("Digite um valor inteiro para y: ");
    scanf("%d", &y);
    printf("Digite um valor inteiro para z: ");
    scanf("%d", &z);

    /*Bloco de comandos*/
    printf("A soma %c %d\n", 130, x + y + z);                 //Valor da soma
    printf("A m%cdia %c %d\n",130, 130, (x + y + z) / 3);     //Valor da média
    printf("O produto %c %d\n", 130, x * y * z);              //Valor do produto
    if(x < y && x < z)                                      //Teste Valor x menor
    {
        printf("O menor %c %d\n", 130, x); 
    }
    if(x > y && y < z)                                      //Teste Valor y menor
    {
        printf("O menor %c %d\n", 130, y); 
    }
    else if(z < y && x > z)                                 //Teste Valor z menor
    {
        printf("O menor %c %d\n", 130, z); 
    }

    if(x > y && x > z)                                      //Teste Valor x maior
    {
        printf("O maior %c %d\n", 130, x); 
    }
    if(x < y && y > z)                                      //Teste Valor y maior
    {
        printf("O maior %c %d\n", 130, y); 
    }
    else if(z > y && x < z)                                 //Teste Valor z maior
    {
        printf("O maior %c %d\n", 130, z); 
    }
     
    system("pause");
    return 0;
}
/*Fim do código*/