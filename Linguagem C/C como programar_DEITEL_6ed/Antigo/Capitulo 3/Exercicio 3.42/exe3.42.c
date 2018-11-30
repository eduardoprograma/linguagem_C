#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {
    float raio, diam, perim, area, pi;
    pi = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    perim = 2 * pi * raio;
    diam = perim / pi;
    area = pi * pow(raio, 2);
    printf("\nRaio: %.2f\n", raio);
    printf("\nDiametro: %.2f\n", diam);
    printf("\nPerimetro: %.2f\n", perim);
    printf("\nArea: %.2f\n\n", area);

    system("pause");
    return 0;
}