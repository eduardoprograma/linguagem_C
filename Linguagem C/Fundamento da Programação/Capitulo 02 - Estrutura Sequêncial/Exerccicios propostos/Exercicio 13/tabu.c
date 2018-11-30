/*Programa tabuada*/
#include <stdio.h>
#include <stdlib.h>
mian(){
    /*Declaração de variáveis*/
    float num = -1.0, tabuad, resulsoma, resulsub, resulmult, resuldiv;
    /*Enrada de dados*/
    printf("Programa de tabuada.\n\n");
    printf("Digite a tabuada: ");
    scanf("%f", &tabuad);
    /*BBloco de comando*/
    while(num < 10){
        num++;
        resulsoma = num + tabuad;
        resulsub = num - tabuad;
        resulmult = num * tabuad;
        resuldiv = num / tabuad;
        /*Saída de dados*/
        printf("%.1f + %.1f = %.1f\t", num, tabuad, resulsoma);
        printf("%.1f - %.1f = %.1f\t", num, tabuad, resulsub);
        printf("%.1f x %.1f = %.1f\t", num, tabuad, resulmult);
        printf("%.1f : %.1f = %.1f\t\n", num, tabuad, resuldiv);
    }    
    /*Fim do Programa*/
    system("pause");
    return 0;
}