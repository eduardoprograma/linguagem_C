#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main () {
    int ano;
    double quantia, principal = 1000, taxa = .05;
    printf("%4s%21s\n", "Ano", "Saldo da conta");
    
    for(ano = 1; ano <= 10; ano++)
    {
        quantia = principal * pow(1 + taxa, ano);
        printf("%4d%21.0f\n", ano, quantia);
    }
    system("pause");
    return 0;
}