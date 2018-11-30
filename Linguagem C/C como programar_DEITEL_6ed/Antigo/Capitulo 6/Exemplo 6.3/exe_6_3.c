/*Inicializando um array*/
#include <stdio.h>
#include <stdlib.h>
main(){
    int n[0], i; //Decalração de varáveis 
    for(i = 0; i <= 9; i++)/*Inicializa array*/
    {
        n[i] = 0;
    }
    printf("%s%13s\n", "Elemento", "Valor");
    for(i = 0; i <= 9; i++)/*Imprime o array*/
    {
        printf("%7d%13d\n", i, n[i]);
    }
    system("pause");
    return 0;
}