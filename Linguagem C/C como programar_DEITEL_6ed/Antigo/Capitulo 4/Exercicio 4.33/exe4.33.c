#include <stdio.h>
#include <stdlib.h>
main()
{
    int num, resto;
    int term1, term2;
    int A, B, C, D, E, F;
    printf("%2s%10s%9s%15s\n", "DECIMAL", "BINARIO", "OCTAL", "HEXADECIMAL");
    
    for(num = 0; num < 256; num++)
    {
        printf("%4d\t", num);                                   //DECIMAL
        resto = num % 2;
        if (num >= 0) {                                         //BINARIO 
            printf("%2d%d%d%d%d%d%d%d", (((((((num / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2, ((((((num / 2) / 2) / 2) / 2) / 2) / 2) % 2,(((((num / 2) / 2) / 2) / 2) / 2) % 2, ((((num / 2) / 2) / 2) / 2) % 2, (((num / 2) / 2) / 2) % 2, ((num/2) / 2) % 2, (num/2) % 2, num % 2);
        }
        
        if (num >= 0) {                                         //OCTAL 
            printf("%6d%d%d", (num / 8) /8, (num / 8) % 8, num % 8);
        }    
       
       if (num >= 0) {
           term1 = num % 16;
           term2 = (num / 16) % 16;
           
           if (term1 >= 0 && term1 != 10 && term1 != 11 && term1 != 12 && term1 != 13 && term1 != 14 && term1 != 15) {
               
               if (term2 >= 0 && term2 != 10 && term2 != 11 && term2 != 12 && term2 != 13 && term2 != 14 && term2 != 15) {
                   printf("%8d%d\n", term2, term1);
               }
            }
            
            if (term1 >= 0 && term1 == 10 || term1 == 11 || term1 == 12 || term1 == 13 || term1 == 14 || term1 == 15) {
                
                if (term2 >= 0 && term2 != 10 && term2 != 11 && term2 != 12 && term2 != 13 && term2 != 14 && term2 != 15) {
                    if ( term1 == 10){
                        printf("%8d%s\n", term2, "A");
                    }
                    if ( term1 == 11){
                        printf("%8d%s\n", term2, "B");
                    }
                    if ( term1 == 12){
                        printf("%8d%s\n", term2, "C");
                    }
                    if ( term1 == 13){
                        printf("%8d%s\n", term2, "D");
                    }
                    if ( term1 == 14){
                        printf("%8d%s\n", term2, "E");
                    }
                    if ( term1 == 15){
                        printf("%8d%s\n", term2, "F");
                    }
                }
                
            }
            if (term2 >= 0 && term2 == 10 || term2 == 11 || term2 == 12 || term2 == 13 || term2 == 14 || term2 == 15) {
                
                if (term1 >= 0 && term1 != 10 && term1 != 11 && term1 != 12 && term1 != 13 && term1 != 14 && term1 != 15) {
                    if ( term2 == 10){
                        printf("%8s%d\n", "A", term1);
                    }
                    if ( term2 == 11){
                        printf("%8s%d\n", "B", term1);
                    }
                    if ( term2 == 12){
                        printf("%8s%d\n", "C", term1);
                    }
                    if ( term2 == 13){
                        printf("%8s%d\n", "D", term1);
                    }
                    if ( term2 == 14){
                        printf("%8s%d\n", "E", term1);
                    }
                    if ( term2 == 15){
                        printf("%8s%d\n", "F", term1);
                    }
                }
                
            }
            
            if (term2 >= 0 && term2 == 10 || term2 == 11 || term2 == 12 || term2 == 13 || term2 == 14 || term2 == 15 && term1 >= 0){
                
                if (term1 == 10 || term1 == 11 || term1 == 12 || term1 == 13 || term1 == 14 || term1 == 15) {
                   if ( term2 == 10 && term1 == 10){
                        printf("%8s%s\n", "A", "A");
                    }
                    if ( term2 == 10 && term1 == 11){
                        printf("%8s%s\n", "A", "B");
                    }
                    if ( term2 == 10 && term1 == 12){
                        printf("%8s%s\n", "A", "C");
                    }
                    if ( term2 == 10 && term1 == 13){
                        printf("%8s%s\n", "A", "D");
                    }
                    if ( term2 == 10 && term1 == 14){
                        printf("%8s%s\n", "A", "E");
                    }
                    if ( term2 == 10 && term1 == 15){
                        printf("%8s%s\n", "A", "F");
                    } 
                    if ( term2 == 11 && term1 == 10){
                        printf("%8s%s\n", "B", "A");
                    }
                    if ( term2 == 11 && term1 == 11){
                        printf("%8s%s\n", "B", "B");
                    }
                    if ( term2 == 11 && term1 == 12){
                        printf("%8s%s\n", "B", "C");
                    }
                    if ( term2 == 11 && term1 == 13){
                        printf("%8s%s\n", "B", "D");
                    }
                    if ( term2 == 11 && term1 == 14){
                        printf("%8s%s\n", "B", "E");
                    }
                    if ( term2 == 11 && term1 == 15){
                        printf("%8s%s\n", "B", "F");
                    }
                    if ( term2 == 12 && term1 == 10){
                        printf("%8s%s\n", "C", "A");
                    }
                    if ( term2 == 12 && term1 == 11){
                        printf("%8s%s\n", "C", "B");
                    }
                    if ( term2 == 12 && term1 == 12){
                        printf("%8s%s\n", "C", "C");
                    }
                    if ( term2 == 12 && term1 == 13){
                        printf("%8s%s\n", "C", "D");
                    }
                    if ( term2 == 12 && term1 == 14){
                        printf("%8s%s\n", "C", "E");
                    }
                    if ( term2 == 12 && term1 == 15){
                        printf("%8s%s\n", "C", "F");
                    }
                    if ( term2 == 13 && term1 == 10){
                        printf("%8s%s\n", "D", "A");
                    }
                    if ( term2 == 13 && term1 == 11){
                        printf("%8s%s\n", "D", "B");
                    }
                    if ( term2 == 13 && term1 == 12){
                        printf("%8s%s\n", "D", "C");
                    }
                    if ( term2 == 13 && term1 == 13){
                        printf("%8s%s\n", "D", "D");
                    }
                    if ( term2 == 13 && term1 == 14){
                        printf("%8s%s\n", "D", "E");
                    }
                    if ( term2 == 13 && term1 == 15){
                        printf("%8s%s\n", "D", "F");
                    }
                    if ( term2 == 14 && term1 == 10){
                        printf("%8s%s\n", "E", "A");
                    }
                    if ( term2 == 14 && term1 == 11){
                        printf("%8s%s\n", "E", "B");
                    }
                    if ( term2 == 14 && term1 == 12){
                        printf("%8s%s\n", "E", "C");
                    }
                    if ( term2 == 14 && term1 == 13){
                        printf("%8s%s\n", "E", "D");
                    }
                    if ( term2 == 14 && term1 == 14){
                        printf("%8s%s\n", "E", "E");
                    }
                    if ( term2 == 14 && term1 == 15){
                        printf("%8s%s\n", "E", "F");
                    }
                    if ( term2 == 15 && term1 == 10){
                        printf("%8s%s\n", "F", "A");
                    }
                    if ( term2 == 15 && term1 == 11){
                        printf("%8s%s\n", "F", "B");
                    }
                    if ( term2 == 15 && term1 == 12){
                        printf("%8s%s\n", "F", "C");
                    }
                    if ( term2 == 15 && term1 == 13){
                        printf("%8s%s\n", "F", "D");
                    }
                    if ( term2 == 15 && term1 == 14){
                        printf("%8s%s\n", "F", "E");
                    }
                    if ( term2 == 15 && term1 == 15){
                        printf("%8s%s\n", "F", "F");
                    }
                }   
            }
            
        }
    }
    printf("\n");
    system("pause"); 
    return 0;
}
