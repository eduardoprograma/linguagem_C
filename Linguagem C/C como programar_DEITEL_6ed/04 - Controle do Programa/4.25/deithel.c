/*Imprima uma tabela de valores equivalentes decimais, binários, octais e hexadecimais. Se você não está familiarizado com estes sistemas de numeração, leia inicialmente o Apêndice D se quiser tentar solucionar este exercício.*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int numero = 0;
    int decimal= -1, binario = 0;
    int bin1 = 0, bin2 = 0, bin3 = 0, bin4 = 0, bin5 = 0, bin6 = 0, bin7 = 0, bin8 = 0, bin9 = 0, bin10 = 0;
    int octal = 0, restOctal = 0, restOctal1 = 0, restOctal2 = 0;
    int hexa1 = 0, hexa2 = 0, dec2 = 0; 

    printf("Digite um numero inteiro (0 a 100) para definirmos a nossa tabela: ");
    scanf("%d", &numero);
    printf("\n");

    /*Bloco de comando*/
    printf("%5s\t%12s\t%8s\t%8s\t\n", "Decimal", "Binario", "Octal", "Hexadecimal");
    do
    {
        /***************************************************************************************************/
        /*Calculo decimal*/ 
        decimal++;
        printf("%5d\t", decimal);

        /***************************************************************************************************/    
        /*Calculo binario*/
        binario = decimal;
        /*Binario 9*/
        if(binario >= pow(2, 9) )
        {
            bin10 = 1;
            binario -= pow(2, 9);
        }
        else
        {
            bin10 = 0;
        }
        /*Binario 8*/
        if(binario >= pow(2, 8))
        {
            bin9 = 1;
            binario -= pow(2, 8);
        }
        else
        {
            bin9 = 0;
        }
        /*Binario 7*/
        if(binario >= pow(2, 7))
        {
            bin8 = 1;
            binario -= pow(2, 7);
        }
        else
        {
            bin8 = 0;
        }
        /*Binario 6*/
        if(binario >= pow(2, 6))
        {
            bin7 = 1;
            binario -= pow(2, 6);
        }
        else
        {
            bin7 = 0;
        }
        /*Binario 5*/
        if(binario >= pow(2, 5))
        {
            bin6 = 1;
            binario -= pow(2, 5);
        }
        else
        {
            bin6 = 0;
        }
        /*Binario 4*/
        if(binario >= pow(2, 4))
        {
            bin5 = 1;
            binario -= pow(2, 4);
        }
        else
        {
            bin5 = 0;
        }
        /*Binario 3*/
        if(binario >= pow(2, 3))
        {
            bin4 = 1;
            binario -= pow(2, 3);
        }
        else
        {
            bin4 = 0;
        }
        /*Binario 2*/
        if(binario >= pow(2, 2))
        {
            bin3 = 1;
            binario -= pow(2, 2);
        }
        else
        {
            bin3 = 0;
        }
        /*Binario 1*/
        if(binario >= pow(2, 1))
        {
            bin2 = 1;
            binario -= pow(2, 1);
        }
        else
        {
            bin2 = 0;
        }
        /*Binario 0*/
        if(binario >= pow(2, 0))
        {
            bin1 = 1;
            binario -= pow(2, 0);
        }
        else
        {
            bin1 = 0;
        }
        printf("%5d%d%d%d%d%d%d%d%d%d\t", bin10, bin9, bin8, bin7, bin6, bin5, bin4, bin3, bin2, bin1);
        /***************************************************************************************************/
        /*Calculo octal*/
        int octal1 = 0;
        if(decimal >= 64 && decimal <= 100)
        {
            octal1 = decimal / 64;
            restOctal2 = decimal % 64;
            octal = restOctal2 / 8;
            restOctal1 = restOctal2 % 8;
            restOctal = restOctal1 / 1;
        }
        if(decimal >= 8 && decimal <= 63)
        {
            octal = decimal / pow(8, 1);
            restOctal = decimal % 8;
        }
        if(decimal >= 0 && decimal <= 7)
        {
            octal = 0;
            restOctal = decimal / 1;
        }
        printf("%5d%d%d", octal1, octal, restOctal);
        /***************************************************************************************************/
        /*Calculo Hexadecimal*/
        hexa1 = decimal / pow(16, 1);
        dec2 = hexa1 * pow(16, 1);
        hexa2 = decimal - dec2;
        if(hexa1 >= 10 && hexa1 <= 15)
        {
            if(hexa1 == 10)
            {
                hexa1 = 'A';
            }
            if(hexa1 == 11)
            {
                hexa1 = 'B';
            }
            if(hexa1 == 12)
            {
                hexa1 = 'C';
            }
            if(hexa1 == 13)
            {
                hexa1 = 'D';
            }
            if(hexa1 == 14)
            {
                hexa1 = 'E';
            }
            if(hexa1 == 15)
            {
                hexa1 = 'F';
            }
        }
        if(hexa2 >= 10 && hexa1 <= 15)
        {
            if(hexa2 == 10)
            {
                hexa2 = 'A';
            }
            if(hexa2 == 11)
            {
                hexa2 = 'B';
            }
            if(hexa2 == 12)
            {
                hexa2 = 'C';
            }
            if(hexa2 == 13)
            {
                hexa2 = 'D';
            }
            if(hexa2 == 14)
            {
                hexa2 = 'E';
            }
            if(hexa2 == 15)
            {
                hexa2 = 'F';
            }
        }
        if(hexa1 >= 10 && hexa2 <= 9)
        {
            printf("%15c%d", hexa1, hexa2);
        }
        if(hexa1 <= 9 && hexa2 >= 10)
        {
            printf("%15d%c", hexa1, hexa2);
        }
        if(hexa1 >= 10 && hexa2 >= 10)
        {
            printf("%15c%c", hexa1, hexa2);
        }
        if(hexa1 <= 9 && hexa2 <= 9)
        {
            printf("%15d%d", hexa1, hexa2);
        }
        printf("\n");
    }while(decimal < numero);
    return 0;
}