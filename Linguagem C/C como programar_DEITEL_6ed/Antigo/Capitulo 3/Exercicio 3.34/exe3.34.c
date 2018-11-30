#include <stdio.h>
#include <stdlib.h>

main () {
    int linha, coluna, somador, aux, num;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &linha);

    aux = (- linha % 2) + 4;
    coluna = 1;
    somador = 0;
    
    if (linha <= 20){
        printf("\n\n");
        
        while (coluna <= linha) {
            coluna++;
            printf("*");
        }
        printf("\n");
        while(linha >= aux){
            aux++;
            printf("*");
            
            if (coluna >= linha) {
                num = linha;
                if (num >= 0 && num <= 2) {
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                if (num == 3) {
                    num += 1;
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                if (num >= 4 && num <= 5) {
                    num = 5;
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                if (num >= 6 && num <= 7) {
                    num = 6;
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                if (num >= 8 && num <= 9) {
                    num = 7;
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                if (num >= 10 && num <= 11) {
                    num = 8;
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                if (num >= 12 && num <= 13) {
                    num = 9;
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                if (num >= 14 && num <= 15) {
                    num = 10;
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                if (num >= 16 && num <= 17) {
                    num = 11;
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                if (num >= 18 && num <= 19) {
                    num = 12;
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                if (num == 20) {
                    num = 13;
                    coluna = (- linha / 2) + num;
                    while(coluna <= linha){
                        coluna++;
                        printf(" ");
                    }
                }
                /*coluna = (- linha / 2) + 7;
                while(coluna <= linha){
                    coluna++;
                    printf(" ");
                }*/
            }
            printf("*");
            printf("\n");
        }
        coluna =1;
        while(coluna <= linha){
            coluna++;
            printf("*");
        }
        printf("\n");
    }
    
    else
    {
        printf("Digite numeros de 1 a 20.\n\nPrograma finalizado.\n");
    }
    
    
    system("pause");
    return 0; 
}