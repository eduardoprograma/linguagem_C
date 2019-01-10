/* Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor E, conforme a fórmula a seguir:
E = (1/1!) + (1/2!) + (1/3!) + ... + (1/N!) */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração das variáveis */
    float N, fator = 1;
    int i;
    float E = 0;

    /* Entrada de dados */
    printf("Digite um numero inteiro: ");
    scanf("%f", &N);

    /* bloco de comando */
    while(N != -1)
    {
        for(i = 1; i <= N; i++)
        {
            fator *= i;
            //printf("%.2f\n", fator);
            E += (1 / fator);
        }
        printf("\nO valor de 'E': %.2f\n\n", E);
        printf("Digite um numero inteiro(-1 para encerrar): ");
        scanf("%f", &N);
        fator = 1;          //Reinicia o fator
        E = 0;              //Reinicia o valor de E
        i = 1;              //Reinicia o contador
    }
    return 0;
}
/* Fim do código */