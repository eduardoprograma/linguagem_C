/*Programa carrega 3 vetores com 10 posições
 *Nome de 10 produtos;
 *Código dos 10 Produtos;
 *Preço*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Definição do numero de elementos do vetor */
#define SIZENL 10
#define SIZENC 60
#define SIZEC 10
#define SIZEP 10

/* INICIO */
main(){
    setlocale(LC_ALL, "pt-br");

    /* Declaração das variáveis */
    char vetorProd[SIZENL][SIZENC] = {0};
    int vetorCod[SIZEC] = {0}, cod, i;
    float vetorPreco[SIZEP] = {0.0}, preco;

    /* Entrada de dados */
    for(i = 0; i < SIZENL; i++)
    {
        printf("\nDigite o nome d produto: ");
        scanf("%s", vetorProd[i]);
        printf("\nDigite o codigo do produto: ");
        scanf("%d", &cod);
        vetorCod[i] = cod;
        printf("\nDigite o preco: $");
        scanf("%f", &preco);
        vetorPreco[i] = preco;
    }

    printf("%10s%10s%12s%17s\n", "Nome do Produto", "Codigo", "Preco", "Preco novo"); //Cabeçalho
    /* Bloco de comando */
    for(i = 0; i < SIZENL; i++)
    {
        int par;
        par = vetorCod[i] % 2;
        /* Bloco de comando codigo par ou preço maior que $1000,00 */
        if(par == 0 || vetorPreco[i] > 1000){
            int j;
            j = i;
            /* Caso seja o codigo par */
            if(par == 0){
                float precoN;
                precoN = vetorPreco[j] + (vetorPreco[j] * 0.15);
                printf("%15s%10d%13.2f%15.2f\n", vetorProd[j], vetorCod[j], vetorPreco[j], precoN);
            }
            /* Caso seja apenas o preço */
            else{
                float precoN;
                precoN = vetorPreco[j] + (vetorPreco[j] * 0.10);
                printf("%15s%10d%13.2f%15.2f\n", vetorProd[j], vetorCod[j], vetorPreco[j], precoN);
            }
        }
        /* Bloco de comando codigo par e preço maior que $1000.00 */
        else if(par == 0 && vetorPreco[i] > 1000){
            int k;
            k = i;
            float precoN;
            precoN = vetorPreco[k] + (vetorPreco[k] * 0.20);
            printf("%15s%10d%13.2f%15.2f\n", vetorProd[k], vetorCod[k], vetorPreco[k], precoN);
        }
        /* Bloco de comando que não antende a nenum item anterior */
        else{
            int l;
            l = i;
            float precoN;
            precoN = vetorPreco[l] + (vetorPreco[l] * 0.00);
            printf("%15s%10d%13.2f%15.2f\n", vetorProd[l], vetorCod[l], vetorPreco[l], precoN);
        }
    }
    system("pause");
    return 0;
}
