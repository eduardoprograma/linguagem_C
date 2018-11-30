/*Dada a equação y = ax^3 + 7, qual das instruções em C a seguir, se houver alguma, são corretas para ela? 
a)y = a*x*x*x + 7; 
b)y = a*x*x* (x+7); 
c) y = (a * x) * x * (x + 7) ; 
d) y = (a * x) * x * x + 7; 
e) y = a * (x * x * x) + 7; 
f)y = a*x* (x * x + 7);*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do programa*/
int main(void)
{
    /*Declaração de variáveis*/
    int a, x, y = 0;

    /*Entrada de dados*/
    printf("Acredito que a quinta resolu%c%co %c a correta em rela%c%co a equa%c%co y = a * x^3 + 7:", 135, 198, 130, 135, 198, 135, 198);
    printf("\nDigite um valor para a: ");
    scanf("%d", &a);
    printf("\nDigite um valor para x: ");
    scanf("%d", &x);

    /*Bloco de comandos e saída de variaveis*/
    y = a*x*x*x + 7; 
    printf("\nO valor de y1 %c: %d", 130, y);
    y = a*x*x* (x+7);
    printf("\nO valor de y2 %c: %d", 130, y); 
    y = (a * x) * x * (x + 7) ; 
    printf("\nO valor de y3 %c: %d", 130, y);
    y = (a * x) * x * x + 7;
    printf("\nO valor de y4 %c: %d", 130, y); 
    y = a * (x * x * x) + 7;
    printf("\nO valor de y5 %c: %d", 130, y); 
    y = a*x* (x * x + 7);
    printf("\nO valor de y1 %c: %d\n", 130, y);

    printf("\nAp%cs fazer os testes eu me enganei.\n", 162);
}
/*Fim do programa*/