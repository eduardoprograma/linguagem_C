#include <stdio.h>
#include <stdlib.h>
main () {
    int numProd = 0, 
        QuantVendDia = 0;
    double subTotal = 0,
            total = 0, 
            valor = 0;
    int casN1 = 0, casQ1 = 0; 
    double casV1 = 0, casS1 = 0;
    int casN2 = 0, casQ2 = 0; 
    double casV2 = 0, casS2 = 0;
    int casN3 = 0, casQ3 = 0; 
    double casV3 = 0, casS3 = 0;
    int casN4 = 0, casQ4 = 0; 
    double casV4 = 0, casS4 = 0;
    int casN5 = 0, casQ5 = 0; 
    double casV5 = 0, casS5 = 0;

    printf("Digite um numero do produto: ");
    scanf("%d", &numProd);
    
    while(numProd != -1){
        printf("Digite a quantidade vendida: ");
        scanf("%d", &QuantVendDia);        
        
        switch (numProd)
        {
            case 1:
                valor = 2.98;
                subTotal = (double) valor * QuantVendDia;
                printf("%d\t%d\t%.2lf\t%.2lf\t", numProd, QuantVendDia, valor, subTotal);
                casN1 = numProd;
                casQ1 += QuantVendDia;
                casV1 = valor;
                casS1 += subTotal;
                break;
            case 2:
                valor = 4.50;
                subTotal = (double) valor * QuantVendDia;
                printf("%d\t%d\t%.2lf\t%.2lf\t", numProd, QuantVendDia, valor, subTotal);
                casN2 = numProd;
                casQ2 += QuantVendDia;
                casV2 = valor;
                casS2 += subTotal;
                break;
            case 3:
                valor = 9.98;
                subTotal = (double) valor * QuantVendDia;
                printf("%d\t%d\t%.2lf\t%.2lf\t", numProd, QuantVendDia, valor, subTotal);
                casN3 = numProd;
                casQ3 += QuantVendDia;
                casV3 = valor;
                casS3 += subTotal;
                break;
            case 4:
                valor = 4.49;
                subTotal = (double) valor * QuantVendDia;
                printf("%d\t%d\t%.2lf\t%.2lf\t", numProd, QuantVendDia, valor, subTotal);
                casN4 = numProd;
                casQ4 += QuantVendDia;
                casV4 = valor;
                casS4 += subTotal;
                break;
            case 5:
                valor = 6.87;
                subTotal = (double) valor * QuantVendDia;
                printf("%d\t%d\t%.2lf\t%.2lf\t", numProd, QuantVendDia, valor, subTotal);
                casN5 = numProd;
                casQ5 += QuantVendDia;
                casV5 = valor;
                casS5 += subTotal;
                break;
            default:
                printf("Codigo do produto nao consta na base de dados.\nDigite outro valor.\n");
                break;
        }
        total = (double) casS1 + casS2 + casS3 + casS4 + casS5;
        printf("\nDigite o codigo do produto: ");
        scanf("%d", &numProd);

    }
    
    printf("\n__________________________________________________\n");
    printf("\nCod do produto\tQuant.\tValor Unit.\tSubtotal\t\n");
    printf("__________________________________________________\n");
    printf("\n%8d\t%5d\t%10.2lf\t%8.2lf\t\n", casN1, casQ1, casV1, casS1, casS1);
    printf("%8d\t%5d\t%10.2lf\t%8.2lf\t\n", casN2, casQ2, casV2, casS2);
    printf("%8d\t%5d\t%10.2lf\t%8.2lf\t\n", casN3, casQ3, casV3, casS3);
    printf("%8d\t%5d\t%10.2lf\t%8.2lf\t\n", casN4, casQ4, casV4, casS4);
    printf("%8d\t%5d\t%10.2lf\t%8.2lf\t\n", casN5, casQ5, casV5, casS5);
    printf("\n__________________________________________________\n");
    printf("                                Total: $%8.2lf\t\n", total);
    printf("__________________________________________________\n");
    system("pause");
    return 0;
}