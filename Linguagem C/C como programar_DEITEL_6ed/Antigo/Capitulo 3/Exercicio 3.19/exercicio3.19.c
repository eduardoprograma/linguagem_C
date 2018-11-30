#include <stdio.h>
#include <stdlib.h>

main () {
    double salFixo, venda, comissao; 
    float salBruto;
    salFixo = 200;
    comissao = 0;
    salBruto = 0;

    printf("Digite as vendas da semana: $");
    scanf("%lf", &venda);
    
    while(venda != -1){
        comissao = venda * .09;
        salBruto = (float) salFixo + comissao;
        printf("\nSalario: $%.2f\n\n", salBruto);

        printf("Digite -1 para finalizar ou...\n");
        printf("Digite as vendas da semana: $");
        scanf("%lf", &venda);
    }
    system("pause");
    return 0;
}