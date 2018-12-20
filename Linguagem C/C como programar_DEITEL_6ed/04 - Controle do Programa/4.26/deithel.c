/*Calcule o valor de ir a partir da série infinita pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ... Imprima uma tabela que mostra o valor de (pi) aproximado por 1 termo dessa série, por dois termos, por três termos etc. Quantos termos dessa série são necessários para obter 3.14? 3.141? 3.1415? 3.14159?*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float pi = 0, div1 = -3, div2 = -1;
    int i = 0;
    do
    {
        i++;
        div1 += 4;
        div2 += 4;
        pi += (4 / div1) - (4 / div2);
        //system("pause");    //Teste
        printf("calculando %d\n", i);
    }while(pi <= 3.14159);
    printf("\npi = %.2f", pi);
    printf("\npi = %.3f", pi);
    printf("\npi = %.4f", pi);
    printf("\npi = %.5f", pi);
    printf("\n");
    return 0;
}