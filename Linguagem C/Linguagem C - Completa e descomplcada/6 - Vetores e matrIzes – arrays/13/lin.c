/* Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir a ele para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado. */
#include<stdio.h>
#include<stdlib.h>
#define POSICAO 10
/* incio do código */
int main()
{
    /* declaração de variáveis */
    int vetor[POSICAO] = {0}, num = 0;
    int i, j;

    /* bloco de comandos */
        /* entrada de dados */
        for(i = 0; i <= 9; i++)
        {
            digito:
            printf("Digite um numero: ");
            scanf("%d", &num);
            vetor[i] = num;
            if(i > 0)
            {
                for(j = 0; j <= 9; j++)
                {
                    if(vetor[i] == vetor[j] & j != i)
                    {
                        printf("\nDigite outro numero.\nEste ja consta na base digitado\n");
                        printf("*Digite um numero: ");
                        scanf("%d", &num);
                        vetor[i] = num;
                    }
                }
            }
        }
    /* saída de dados*/
    puts("");
    puts("Os numeros digitados foram: ");
    puts("");
    for(i = 0; i <= 9; i++)
    {
        printf("%d\t", vetor[i]);
    }
    return 0;
}
/* fim do código */