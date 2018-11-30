/*O programa a seguir usa a função múltiplo para determinar se o inteiro digitado no teclado é um múltiplo de outro inteiro X. Examine a função múltiplo e depois determine o valor de X. 
    /* Este programa determina se um valor e múltiplo de X */ 
/*#include <stdio.h> 
intmúltiplo(int) ; 
main() {
    int y; 
    printf("Digite um inteiro entre 1 e 32000: "); 
    scanf("%d", &y); 
    if (múltiplo(y)) 
        printf("%d e um múltiplo de X\n", y); 
    else printf("%d nao e um múltiplo de X\n", y) ; 
    return 0; }
int múltiplo(int num) { 
    int i, mascara = 1, mult = 1; for (i = 1, i <= 10; i + + , mascara <<= 1) 
        if ((num & mascara) != 0) < mult = 0; break; 
    return mult; 
}*/