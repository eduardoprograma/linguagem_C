#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int cateto1, cateto2, hipotenusa;

    for(hipotenusa = 1; hipotenusa < 500; hipotenusa++) {
        for(cateto1 = 1; cateto1 < 500; cateto1++) {
            for(cateto2 = 1; cateto2 < 500; cateto2++) {
                int esquerdo = cateto1 * cateto1 + cateto2 * cateto2;
                int direito = hipotenusa * hipotenusa;

                if(esquerdo == direito) {
                    printf("Sao numeros de pitagoras: %2d%5d%5d\n", hipotenusa, cateto1, cateto2);
                } else if(esquerdo > direito) {
                /* otimização de performance -- não haverão mais números válidos quando o lado esquerdo é maior que o direito */
                    break;
                }
            }
        }
    }
    system("pause");
    return 0;
}