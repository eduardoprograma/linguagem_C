/*Programa recebe o total de vendas, o percntual de comissão, e o nome do vendedor*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Definição de posições por vetor*/
#define SIZEV 10 // Vendas
#define SIZEP 10 // Porcentagem
#define SIZENL 10 // Nome do vendedor Linha
#define SIZENC 60 // Nome do vendedor Coluna

/*Inicio*/
int main()
{
    setlocale(LC_ALL, "pt-br");

    /* Declaração de variáveis */
    float vetorV[SIZEV] = {0};
    float vetorP[SIZEP] = {0};
    char vetorN[SIZENL][SIZENC] = {0};
    int i, j, k;
    float p, v, vt, vtt, maior = 0, menor = 100000000000000;

    /* Entrada de dados */
    printf("\n");
    for(i = 0; i < SIZEV; i++)
    {
        printf("Digite o nome do vendedor %d: ", i + 1);
        //gets(vetorN[i]); // Não usar.
        scanf("%s", vetorN[i]);
        //printf("Vetror[%d]\t%s\t\n", i, vetorN[i]); // Teste se estamos conseguindo guardar o nome dos vendedores
        printf("Digite o valor total das vendas do vendedor: $");
        scanf("%f", &v);
        vetorV[i] = v;
        printf("Digite a porcentagem: ");
        scanf("%f", &p);
        vetorP[i] = p;
        printf("\n");
    }
    /* Relatório de todos os vendores e seus valores a receber */
    printf("%10s\t%10s\t%20s\t\n", "Vendedor", "Total de Vendas", "Total a receber");
    for(i = 0; i < SIZENL; i++)
    {
        vt = vetorV[i] + (vetorV[i] * vetorP[i]);
        printf("%10s\t%15.2f\t%20.2f\t\n", vetorN[i], vetorV[i], vt);
        //printf("%s\n", vetorN[i]); // Teste para o nome dos vendedores
    }

    /* Realtório gerla de vendas */
    printf("\n\nRelatório geral e total de vendas.\n");
    for(i = 0; i < SIZEV; i++)
    {
        vtt += vetorV[i] + (vetorV[i] * vetorP[i]);
    }
    printf("%10s: $%.2f\n","Total", vtt);

    /* Maior e menor venda */
    for(i = 0; i < SIZEV; i++)
    {
        vtt = vetorV[i] + (vetorV[i] * vetorP[i]);
        if(vtt > maior){
            j = i;  //Iguala os vetores para poder escrever o nome do vendedor
            vetorN[j];
            maior = vtt;
        }
        if(vtt < menor){
            k = i;  //Iguala os vetores para poder escrever o nome do vendedor
            vetorN[k];
            menor = vtt;
        }
    }
    /* O maior a receber e quem receberá */
    printf("\nRelatório de melhor vendedor\n");
    printf("\n%s\t%s\t\n\n", "Nome do vendor", "Total a receber");
    printf("%s\t%20.2f\t\n\n", vetorN[j], maior);

    /* O menor a receber e quem receberá */
    printf("\nRelatório de vendedor lanterna\n");
    printf("\n%s\t%s\t\n\n", "Nome do vendor", "Total a receber");
    printf("%s\t%20.2f\t\n\n", vetorN[k], menor);
    
    system("pause");
    return 0;
}
