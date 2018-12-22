/*Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e p = 3.141592*/
#include <stdio.h>
#define p 3.141592
int main(void)
{
    /*Declaração de variáveis*/
    float R = 0, G = 0;

    /*Entrada de dados*/
    printf("Digite o valor da angulo: ");
    scanf("%f", &G);
    R = G * p/180;  //Calculo
    
    /*Saída de dados*/
    printf("\nO valor do angulo em radianos e %.2f\n\n", R);
    return 0;
}