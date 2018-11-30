#include <stdio.h>
#include <stdlib.h>
main () {
    int conta;
    double limold, limnew, saldoDev, saldoAt;
    conta = 0;
    limold = 0;
    limnew = 0;
    saldoDev = 0;
    saldoAt = 0;
    printf("Digite o numero da conta: ");
    scanf("%d", &conta);
    printf("Digite o limite atual: $");
    scanf("%lf", &limold);
    for(conta; conta != -1; saldoAt == 0)
    {
        printf("Digite o saldo do credito: $");
        scanf("%lf", &saldoDev);
        limnew = limold / 2;
       if (conta != 0) {
            printf("\nNumero da conta: %d\n", conta);
            printf("Limite de credito: $%.2lf\n", limnew);
            saldoAt = limnew - saldoDev;
            printf("Saldo atual: $%.2lf\n", saldoAt);
            
            if (saldoAt < 0) {
                printf("\nO saldo do cliente negativo.\n");
            }
            else {
                printf("\nSaldo positivo.\nTome cuidado com o limite do credito\n");
                printf("\nSaldo restante atualizado: $%.2lf\n", saldoAt);
            }
        }
        printf("Digite o numero da conta: ");
        scanf("%d", &conta);
        
        if (conta != -1) {
            printf("Digite o limite atual: $");
            scanf("%lf", &limold);
        }
    }
    system("pause");
    return 0; 
}