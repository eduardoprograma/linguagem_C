/* Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido. Exemplo:
Número lido = 123 Número gerado = 321 */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    int numLido = 0, numGerado = 0;
    int digito1 = 0, digito2 = 0, digito3 = 0;

    /* Entrada de dados */
    printf("Digite o um numero inteiro de tres digitos: ");
    scanf("%d", &numLido);

    /* Bloco de comando */
    digito3 = numLido / 100; 
    digito2 = ((numLido / 10) % 10) * 10;
    digito1 = ((numLido % 100) % 10) * 100;
    numGerado = digito1 + digito2 + digito3;
    //printf("\n%d\n%d\n%d\n\n", digito3, digito2, digito1);  //Teste do código

    /* Saída de dados */
    printf("\nO numero lido = %d\nO numero gerado = %d\n\n", numLido, numGerado);
    return 0;
}
/* Fim do código */