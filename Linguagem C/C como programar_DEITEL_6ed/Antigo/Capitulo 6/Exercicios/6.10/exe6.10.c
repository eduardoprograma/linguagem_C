/*Programa de calculo de salário semanal dos vendedores*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Define os elementos do vetor */
#define NOMEL 10
#define NOMEC 50
#define VENDA 10
#define TOTAL 10

/* INICIO */
main()
{
    setlocale(LC_ALL, "portuguese-brazilian");

    /* Declaração de variáveis */
    char vetorNome[NOMEL][NOMEC];
    int i, d299 = 0, d399 = 0, d499 = 0, d599 = 0, d699 = 0, d799 = 0, d899 = 0, d999 = 0, d1000 = 0;
    float vetorVendas[VENDA] ={0}, vetorTotal[TOTAL] = {0}, vendas = 0;

    /* Entrada de dados */
    for(i = 0; i < NOMEL; i++)
    {
        printf("Digite o nome do vendedor: ");
        scanf("%s", vetorNome[i]);
        printf("Digite o valor das vendas: $");
        scanf("%f", &vetorVendas[i]);
    }
    
    /* Identificação da tabela */
    printf("\n\n%10s\t%15s\t%15s\t%15s\t\n", "Nome", "Vendas", "Porcentagem", "TOTAL");

    /* Bloco de comandos */
    for(i = 0; i < NOMEL; i++)
    {
        float porcentagem = vetorVendas[i] * 0.09;
        vetorTotal[i] = vetorVendas[i] + porcentagem + 200;

        /* Saída de dados */
        printf("%20s\t%15.2f\t%15.2f\t%15.2f\t\n", vetorNome[i], vetorVendas[i], porcentagem, vetorTotal[i]);
    }
    
    /* Saída de dados conforme pedido no exercicio */
    for(i = 0; i < TOTAL; i++)
    {
        if (200 <= vetorTotal[i] && vetorTotal[i] < 299) {
            d299++;
        }
        if (300 <= vetorTotal[i] && vetorTotal[i] < 399) {
            d399++;
        }
        if (400 <= vetorTotal[i] && vetorTotal[i] < 499) {
            d299++;
        }
        if (500 <= vetorTotal[i] && vetorTotal[i] < 599) {
            d299++;
        }
        if (600 <= vetorTotal[i] && vetorTotal[i] < 699) {
            d299++;
        }
        if (700 <= vetorTotal[i] && vetorTotal[i] < 799) {
            d299++;
        }
        if (800 <= vetorTotal[i] && vetorTotal[i] < 899) {
            d299++;
        }
        else if (900 <= vetorTotal[i] && vetorTotal[i] < 999) {
            d299++;
        }
        else{
            d1000++;
        }
    }
    printf("%s\t%s\t\n", "INTERVALOS", "QUANTIDADE");
    printf("%s\t%d\t\n", "$200 - $299", d299);
    printf("%s\t%d\t\n", "$300 - $399", d399);
    printf("%s\t%d\t\n", "$400 - $499", d499);
    printf("%s\t%d\t\n", "$500 - $599", d599);
    printf("%s\t%d\t\n", "$600 - $699", d699);
    printf("%s\t%d\t\n", "$700 - $799", d799);
    printf("%s\t%d\t\n", "$800 - $899", d899);
    printf("%s\t%d\t\n", "$900 - $999", d999);
    printf("%s\t%d\t\n", "$1000      ", d1000);
    system("pause");
    return 0;
}