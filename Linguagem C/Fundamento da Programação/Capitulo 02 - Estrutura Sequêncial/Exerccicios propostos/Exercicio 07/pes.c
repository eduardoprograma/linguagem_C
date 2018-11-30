/*programa de peso*/
#include <stdio.h>
#include <stdlib.h>
main(){
    /*Declare as variaveis*/
    float pes, gorda, magra; 
    /*Entre com o valor das variaveis*/
    printf("Bem vindo ao programa de peso.\n\n");
    printf("Digite seu peso: ");
    scanf("%f", &pes);
    /*Bloco de comando*/
    gorda = pes + (pes * 0.20);
    magra = pes - (pes * 0.15);
    /*Saida do valor das variaveis*/
    printf("\nSe voce engordar o peso sers %.2f kg\n", gorda);
    printf("\nSe voce emagrecer o peso sera %.2f kg\n", magra);
    /*Fim do codigo*/
    system("pause");
    return 0;
}