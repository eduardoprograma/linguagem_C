/*
 ============================================================================
 Name			: fig07_17.c
 Author      	: Eduardo Felizardo
 Creation date 	: 06/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    Fig. 07.17: fig07_17.c
    Demosntrando o operador sizeof
 ============================================================================
*/
#include<stdio.h>
/* inicio da função main */
int main()
{
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    int array[20];/* cria array de 20 elementos */
    int *ptr =  &array;/* cria ponteiro para array */

    printf("   sizeof c = %d\tsizeof(char) = %d\n"
           "   sizeof s = %d\tsizeof(short) = %d\n"
           "   sizeof i = %d\tsizeof(int) = %d\n"
           "   sizeof l = %d\tsizeof(long) = %d\n"
           "   sizeof f = %d\tsizeof(float) = %d\n"
           "   sizeof d = %d\tsizeof(double) = %d\n"
           "   sizeof ld = %d\tsizeof(long double) = %d\n"
           "   sizeof array = %d\n"
           "   sizeof ptr =  %d\n", sizeof c, sizeof (char), sizeof s, sizeof(short), sizeof i, sizeof(int), sizeof l, sizeof(long), sizeof f, sizeof(float), sizeof d, sizeof(double), sizeof ld, sizeof(long double));

    return 0;/* indica conclusão bem-sucedida */
}
/* fim da função main */