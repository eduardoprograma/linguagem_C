/*Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.*/
#include <stdio.h>

int main(void)
{
    float x = 1.43, y = 2.34, z = 5.25, f = 1.01, media = 0;
    media = (x + y + z + f) / 4;
    printf("\nA media entre os %.2f, %.2f, %.2f, %.2f e de %.2f\n\n", x, y, z, f, media);
    return 0; 
}