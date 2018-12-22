/*A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que: 
i. O primeiro ganhador receberá 46% do total. 
ii. O segundo receberá 32% do total. 
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/
#include <stdio.h>
#define PREMIO 780000
#define G1 0.46
#define G2 0.32

int main(void)
{
    /* Declaração de variáveis */
    float V1 = 0, V2 = 0, V3 = 0;

    /* Calculos */
    V1 = PREMIO * G1;
    V2 = PREMIO * G2;
    V3 = PREMIO - ((PREMIO * G1) + (PREMIO * G2));

    /* Saída de dados */
    printf("\nValor para o primeiro ganhador: R$%.2f\nValor para o segundo ganhador: R$%.2f\nValor para o terceiro ganhador: R$%.2f\n\n", V1, V2, V3);
    return 0;
}
