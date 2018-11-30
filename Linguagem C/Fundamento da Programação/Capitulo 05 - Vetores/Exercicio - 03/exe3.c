/*Programa para controlar o estoque de mercadorias de uma empresa.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define SIZE1 10 //CÓDIGO DO PRODUTO
#define SIZE2 10 //TOTAL DO PRODUTO EM ESTOQUE
/*inicio*/
int main(){
    setlocale(LC_ALL, "pt-br");
    /*Declaração  e inicialização das varáveis*/
    int vetor1[SIZE1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, n, aux;
    int vetor2[SIZE2] = {100, 100, 10, 30, 50, 35, 20, 19, 30, 300};
    int j = 0, x, exc;
    int cc, cp, q, cont = 0;

    /*Entrada de dados*/
    printf("Digite o código do cliente: ");
    scanf("%d", &cc);
    for(cc; cc != 0; cont++) // Testa o código do cliente
    {
        j = 0;
        printf("Digite o código do produto\n Sendo que este vai de 1 a 10: ");
        scanf("%d", &cp);
        if (cp <= 10) {
            printf("Digite a quantidade desejada: ");
            scanf("%d", &q);
            for(i = 0; i < SIZE1; i++)
            {
                while(cp == vetor1[i]){
                    if (vetor2[i] > 0 && vetor2[i] >= q) {
                        vetor2[i] -= q; //Atualiza o estoque
                        printf("\nPedidio atendido.\nObrigado! Volte sempre.\n\n");
                        break;
                    }
                    else{
                        printf("\nNão temos estoque suficiente desta mercadoria.\n\n");
                        break;
                    }
                }
            }
        }
        else
        {
            printf("\nCódigo inexistente.\n");
        }
        printf("Digite o código do cliente: ");
        scanf("%d", &cc);
    }
    printf("\nFIM DO PROGRAMA.\n");
    printf("Estoque do atualiazado:\n");
    printf("%5s%15s\n", "Código", "Quantidade");
    j = 0;
    for(i = 0; i < SIZE1; i++)
    {
        printf("%3d%15d\n", vetor1[i], vetor2[i]);
    }
    
    system("pause");
    return 0;
}