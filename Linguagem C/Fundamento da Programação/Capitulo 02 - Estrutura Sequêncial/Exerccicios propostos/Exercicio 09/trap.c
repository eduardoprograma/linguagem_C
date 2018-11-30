/*Programa trapezio*/
#include <stdio.h>
#include <stdlib.h>
main(){
    /*Declare as varáveis*/
    float A, base_maior, base_menor, altura;
    /*Entre com os valor das variaveis*/
    printf("Bem vindo ao programa de calculo de area do trapezio.\n\n");
    printf("Digite a base maior: ");
    scanf("%f", &base_maior);
    printf("Digite a base menor: ");
    scanf("%f", &base_menor);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    /*Bloco de comando*/
    A = ((base_maior + base_menor) * altura) / 2;
    /*Saida das variaveis*/
    printf("\nA area do trapezio e %.1f\n\n", A);
    /*Fim do codigo*/
    system("pause");
    return 0;
}