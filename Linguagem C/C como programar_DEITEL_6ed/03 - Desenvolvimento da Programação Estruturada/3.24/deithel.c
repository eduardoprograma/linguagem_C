/*O processo de encontrar o maior número (i.e., o máximo de um conjunto de números) é usado freqüentemente em aplicações computacionais. Por exemplo, um programa que determinasse o vencedor de um concurso de vendas receberia o número de unidades vendidas por vendedor. O vendedor que tivesse vendido mais unidades venceria o concurso. Escreva um pseudocódigo e depois um programa em C que receba uma série* de 10 números, determine o maior deles e o imprima. Sugestão: Seu programa deve usar três variáveis da seguinte maneira: 
contador: Um contador para contar até 10 (i.e., para controlar quantos números foram fornecidos e para determinar quando todos os 10 números foram processados), 
num: O número atual fornecido ao programa, 
maior: O maior número encontrado em cada instante.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int i = 0;
    float num = 0, maior = 0;

    /*Entrada de dados & Bloco de comandos*/
    while(i < 10)
    {
        i++;
        printf("Digite o valor da venda: $");
        scanf("%f", &num);
        if(num > maior)
        {
            maior = num;
        }
    }

    /*Saída de dados*/
    printf("O valor de venda maior: $%.2f", maior);
    printf("\n\n");
    system("pause");
    return 0;
}
/*Fim do código*/