/*O que o seguinte programa imprime?
#include <stdio.h> 
main() 
{ 
    int contador = 1; 
    while (contador <= 10) 
    { 
        printf("%s\n", contador % 2 ? "****" : "+ + + + + + + +"); 
        ++contador;
    }
    return 0; 
}*/

/*****************************************/
#include <stdio.h>
/*Inicio docódigo*/ 
int main(void) 
{ 
    /*Declaração de variáveis*/
    int contador = 1;

    /*Bloco de comandos*/ 
    while (contador <= 10) 
    { 
        printf("%s\n", contador % 2 ? "****" : "+ + + + + + + +"); 
        ++contador;
    }
    return 0; 
}
/*Fim do código*/
//A Bandeira dos EUA