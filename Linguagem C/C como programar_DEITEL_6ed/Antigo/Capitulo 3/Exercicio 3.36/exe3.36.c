#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {
    int binario, decresto, expoente;

    decresto = 0;
    expoente = 0;

    printf("Digite um numero binario: ");
    scanf("%d", &binario);
    
    while(binario > 0){
        expoente++;
        decresto = decresto + pow(2, expoente) * (binario % 10);
        binario = binario / 10;
    }
    printf("\nDecimal equivalente do numero binario: \t %d\n\n", decresto / 2);
    system("pause");
    return 0;
}