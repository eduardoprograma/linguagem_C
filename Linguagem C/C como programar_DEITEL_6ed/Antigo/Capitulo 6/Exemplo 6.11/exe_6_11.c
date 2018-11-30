/*Os arrays statics sao inicializados com zero*/
#include<stdio.h>
#include<stdlib.h>
void staticArrayInit(void);
void automaticArrayInit(void);
main(){
    printf("Primeira chamada de cada função:\n");
    staticArrayInit();
    automaticArrayInit();
    printf("\n\nSegunda chamada de cada função:\n");
    staticArrayInit();
    automaticArrayInit();
    system("pause");
    return 0;
}
/*Função para demonstração um array local static*/
void staticArrayInit(void){
    static int a[3];
    int i;
    printf("\nValores de staticArrayInit ao entrar:\n");
    for(i = 0; i <= 2; i++)
    {
        printf("array[%d] = %d", i, a[i]);
    }
    printf("\nValores de staticArrayInit ao sair:\n");
    for(i = 0; i <= 2; i++)
    {
        printf("array[%d] = %d", i, a[i] += 5);
    }
}
/*Função para demonstrar um array local automatic*/
void automaticArrayInit(void){
   int a[3] = {1, 2, 3};
   int i;
   printf("\n\nValores de automaticArrayInit ao entrar:\n");
   for(i = 0; i <= 2; i++)
   {
       printf("array[%d] = %d", i, a[i]);
   }
   printf("\n\nValores automaticArrayinit ao sair:\n");
   for(i = 0; i <= 2; i++)
   {
       printf("array[%d] = %d", i, a[i] += 5);
   }
   
    
}