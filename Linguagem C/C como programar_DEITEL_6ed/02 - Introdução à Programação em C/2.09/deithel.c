/*2.9 Escreva uma única instrução em C, ou linha única, que cumpra os comentários a seguir:
a) Exiba a mensagem ‘Digite dois números.’ 
b) Atribua o produto das variáveis b e c à variável a.
c) Indique um programa que realize um cálculo de folha de pagamento (ou seja, use um texto que ajude a documentar um programa).
d) Informe três valores inteiros usando o teclado e coloque esses valores nas variáveis inteiras a, b e c.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define PRODUTO (b * c)

/*Inicio do programa*/
int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brasil.1252");

    /*Declaração das varáveis*/
    int a, b, c;

    /*Incializando as variáveis*/
    printf("Digite dois números: ");
    scanf("%d%d", &b, &c);

    a = PRODUTO;

    printf("Este programa trata-se de um software de calculo de folha de pagamento.\n\n");
    printf("Digite três valores inteiros: ");
    scanf("%d%d%d", &a, &b, &c);
    
    /*Saída de dados*/
    
    return 0;
}
/*Fim do programa*/