/*Uma pessoa investe $1000,00 em uma conta de poupança 
que rende juros de 5 por cento. Admitindo que todos os 
juros são deixados em depósito na conta, calcule e 
imprima a quantia na conta ao final de cada ano, ao 
longo de 10 anos. Use a seguinte fórmula para determinar 
estas quantias: a = p(l + r)^n = M=P.(1+i)n*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {
    int ano;
    double quantia, principal = 1000.0, taxa = .05;
    printf ("%4s%21s\n", "Ano", "Saldo na conta"); 
    for (ano = 1; ano <= 10; ano++) {
        if (ano > 1 && ano <= 5) {
            taxa = .05;
            quantia = principal * pow(1.0 + taxa, ano); 
            printf("%4d%21.2f\n", ano, quantia);
        }
        
        if (ano == 6) {
            taxa = .06;
            quantia = principal * pow(1.0 + taxa, ano); 
            printf("%4d%21.2f\n", ano, quantia);
        }
        if (ano == 7) {
            taxa = .07;
            quantia = principal * pow(1.0 + taxa, ano); 
            printf("%4d%21.2f\n", ano, quantia);
        }
        if (ano == 8) {
            taxa = .08;
            quantia = principal * pow(1.0 + taxa, ano); 
            printf("%4d%21.2f\n", ano, quantia);
        }
        if (ano == 9) {
            taxa = .09;
            quantia = principal * pow(1.0 + taxa, ano); 
            printf("%4d%21.2f\n", ano, quantia);
        }
        if (ano == 10) {
            taxa = 1;
            quantia = principal * pow(1.0 + taxa, ano); 
            printf("%4d%21.2f\n", ano, quantia);
        }
        continue;
    }
    system("pause");
    return 0;
}