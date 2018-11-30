#include <stdio.h>
#include <stdlib.h>

main () {
    double hNormal, hExtra, htrabalho;
    double vHnormal, vHextra;
    double salario; 

    hNormal = 40;
    hExtra = 0;
    htrabalho = 0;
    vHnormal = 0;
    vHextra = 0;
    salario = 0;

    printf("Digite o valor das horas trabalhadas: ");
    scanf("%lf", &htrabalho);
    
    while(htrabalho != -1){
        printf("Digite o valor das hora normal do empregado: $");
        scanf("%lf", &vHnormal);
        hExtra = htrabalho - hNormal;
        
        if (hExtra > 0) {
            vHextra = (vHnormal * hExtra) * 1.5;
            salario = (hNormal * vHnormal) + vHextra;
            printf("\n\nSalario: $%.2lf\n\n", salario);
        }
        
        else
        {
            salario = htrabalho * vHnormal;
            printf("\n\nSalario: $%.2lf\n\n", salario);
        }
        printf("Digite -1 para finalizar ou ...\n");
        printf("Digite o valor das horas trabalhadas: ");
        scanf("%lf", &htrabalho);
    }
    system("pause");
    return 0;
}