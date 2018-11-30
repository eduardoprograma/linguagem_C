#include <stdio.h>
#include <stdlib.h>
main()
{
    int num, resto;
    int A, B, C, D, E, F;
    printf("%2s%10s%9s%15s\n", "DECIMAL", "BINARIO", "OCTAL", "HEXADECIMAL");
    
    for(num = 0; num < 16; num++)
    {
        printf("%4d\t", num);                                   //DECIMAL
        resto = num % 2;
        if (num >= 0 && num < 4)                                //BINARIO DE DOIS DIGITOS
        {
            printf("%7d%d", num / 2, resto);
        }
        
        if (num >= 4 && num < 8) {                              //BINARIO DE TRÊS DIGITOS
           printf("%6d%d%d", (num/2)/2, (num/2)%2, num%2);
        }
    
        if (num >= 8) {                                         //BINARIO DE QUATRO DIGITOS
            printf("%5d%d%d%d", ((num / 2) / 2) / 2, ((num/2)/2) % 2, (num/2)%2, num%2);
        }
        
        if (num >= 0 && num < 8) {                              //OCTAL = DECIMAL
            printf("%9d", num);
        }
        
        if (num >= 8) {                                         //OCTAL DE DOIS DIGITOS
            printf("%8d%d", num / 8, num % 8);
        }    
       
       if (num >= 0 && num < 10) {
           printf("%8d\n", num);
       }
       
       if (num >= 10) {
           if ( num == 10){
               printf("%8s\n", "A");
           }
           if ( num == 11){
               printf("%8s\n", "B");
           }
           if ( num == 12){
               printf("%8s\n", "C");
           }
           if ( num == 13){
               printf("%8s\n", "D");
           }
           if ( num == 14){
               printf("%8s\n", "E");
           }
           if ( num == 15){
               printf("%8s\n", "F");
           }
       }
       
    }
    
    system("pause"); 
    return 0;
}
