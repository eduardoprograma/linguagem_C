#include <stdio.h>
#include <stdlib.h>

main () {
    int dias;
    double capital, taxa;
    float juros;

    dias = 0;
    capital = 0;
    taxa = 0;
    juros = 0;

    printf("Digite o valor do emprestimo pretendido: $");
    scanf("%lf", &capital);
    
    while(capital != -1){
        printf("Digite a taxa de juros: ");
        scanf("%lf", &taxa);
        printf("Digite o periodo do emprestimo: ");
        scanf("%d", &dias);
        juros = (float) capital * taxa * dias / 365;
        printf("\n\nO valor do juros a ser pago: $%.2f\n\n", juros);
        printf("Digite -1 para finalizar ou...\n");
        printf("Digite o valor do emprestimo pretendido: $");
        scanf("%lf", &capital); 
    }
    system("pause");
    return 0;
}