#include <stdio.h>
#include <stdlib.h>
int main () {
    //Declaração das variáveis
    float n1, n2, m;
    //Entrada de dados
    printf("Digite dois numeros: ");
    scanf("%f, %f", &n1, &n2);
    //Multiplicação das variáveis
    m = n1 * n2;
    //Saída dos dados
    printf("Multiplicacao = %.2f", m);
    //Fim
    return 0;
}