#include <stdio.h>
#include <stdlib.h>

main () {
    int linha, coluna, somador, aux;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &linha);
    printf("confirme o valor: ");
    scanf("%d", &aux);

    
    if (linha <= 20){
        printf("\n\n");
        if (linha == aux){
            while (linha >= 1) { 
                coluna = 1; 
                while (coluna <= aux) { 
                    somador = linha + 1;
                    if (linha % somador) {
                        printf("*", "<");
                    }
                    ++coluna;
                } 
                --linha; 
                printf("\n");
            }
            printf("\n");
        }
        
        else
        {
            printf("Os valores devem ser iguais.\n");
        }
        
    }
    
    else
    {
        printf("Digite numeros de 1 a 20.\n\nPrograma finalizado.\n");
    }
    
    
    system("pause");
    return 0; 
}