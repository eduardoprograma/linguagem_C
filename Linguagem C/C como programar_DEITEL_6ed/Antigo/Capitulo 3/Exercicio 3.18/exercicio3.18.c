#include <stdio.h>
#include <stdlib.h>

main () {
    int numConta;
    double saldoDev, totalCompra, totalcred, Limcred;
    double novoSaldo;
    //incialização
    numConta = 0;
    saldoDev = 0;
    totalCompra = 0;
    totalcred = 0;
    Limcred = 0;

    //Desenvolvimento
    printf("Digite o numero da conta: ");
    scanf("%d", &numConta);
    while(numConta != -1){
        printf("Digite o saldo inicial: $");
        scanf("%lf", &saldoDev);
        printf("Digite o valor da compra: $");
        scanf("%lf", &totalCompra);
        printf("Digite o total de credito: $");
        scanf("%lf", &totalcred);
        printf("Digite o limite de credito: $");
        scanf("%lf", &Limcred);
        novoSaldo = saldoDev + totalCompra - totalcred;
        
        if (novoSaldo > Limcred) {
            printf("\nNumero da conta: %d\n", numConta);
            printf("Limite de credito: $%.2f\n", Limcred);
            printf("Saldo: $%.2f\n\n", novoSaldo);
            printf("Limite de credito excedido...\n");
            printf("Nao foi possivel concluir a operacao.\n\n");
        }
        
        else
        {
            printf("\nNumero da conta: %d\n", numConta);
            printf("Limite de credito: $%.2f\n", Limcred);
            printf("Saldo: $%.2f\n", novoSaldo);
            printf("Operacao realizada com sucesso...\n\n");
        }
        printf("Digite o numero da conta: ");
        scanf("%d", &numConta); 
    }
    system("pause");
    return 0;
}