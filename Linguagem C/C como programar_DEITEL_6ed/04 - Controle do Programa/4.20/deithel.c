/*Uma loja de venda de produtos por reembolso postal vende cinco produtos diferentes cujos preços de varejo são mostrados na tabela seguir:
pagina 180
Escreva um programa que leia uma série de pares de números como se segue: 
10 Número do produto 
11 Quantidade vendida em um dia 
Seu programa deve usar uma instrução switch para ajudar a determinar o preço de varejo de cada produto. Seu programa deve calcular e mostrar o valor total a varejo de todos os produtos vendidos na semana passada.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int Quantidade, n;
    float preco;
    float n1 = 0.0, n2 = 0.0, n3 = 0.0, n4 = 0.0, n5 = 0.0;

    /*Entarda de dados*/
    printf("Digite o numero do produto de 1 a 5(-1 para encerrar): ");
    scanf("%d", &n);

    /*Bloco de comandos*/
    do
    {
        switch (n)
        {
            case 1:
                printf("Digite a quantidade: ");
                scanf("%d", &Quantidade);
                preco = 2.98;
                n1 += preco * Quantidade;
                break;
            case 2:
                printf("Digite a quantidade: ");
                scanf("%d", &Quantidade);
                preco = 4.50;
                n2 += preco * Quantidade;
                break;
            case 3:
                printf("Digite a quantidade: ");
                scanf("%d", &Quantidade);
                preco = 9.98;
                n3 += preco * Quantidade;
                break;
            case 4:
                printf("Digite a quantidade: ");
                scanf("%d", &Quantidade);
                preco = 4.49;
                n4 += preco * Quantidade;
                break;
            case 5:
                printf("Digite a quantidade: ");
                scanf("%d", &Quantidade);
                preco = 6.87;
                n5 += preco * Quantidade;
                break;
        
            default:
                printf("Numero do produto não corresponde\n");
                break;
        }
        printf("Digite o numero do produto de 1 a 5(-1 para encerrar): ");
        scanf("%d", &n);
    } while (n != -1);
    printf("Produto 1: $ %.2f\n", n1);
    printf("Produto 2: $ %.2f\n", n2);
    printf("Produto 3: $ %.2f\n", n3);
    printf("Produto 4: $ %.2f\n", n4);
    printf("Produto 5: $ %.2f\n", n5);
    float total = 0.0;
    total = n1 + n2 + n3 + n4 + n5;
    printf("Valor total: $ %.2f\n", total);
    system("pause");
    return 0;
}
/*Fim do código*/