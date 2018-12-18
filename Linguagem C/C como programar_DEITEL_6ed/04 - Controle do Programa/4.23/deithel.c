/*Modifique o programa da Fig. 4.6 de forma que ele use somente inteiros para calcular os juros compostos. (Sugestão: Trate todas as quantias monetárias como números inteiros de pennies, sabendo que um penny é um centésimo de um dólar. A seguir, "divida" o resultado em suas partes de dólares e cents usando as operações de divisão e resto, respectivamente. Insira um ponto.)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração das variáveis*/
    int ano;
    double quantia, principal = 1000.0, taxa = .05; 
    
    /*Bloco de comandos*/
    printf ("%4s%21s\n", "Ano", "Saldo na conta"); 
    for (ano = 1; ano <= 10; ano++) 
    {
        quantia = principal * pow(1.0 + taxa, ano); 
        printf("%4d%21.2f\n", ano, quantia);
    }
    return 0;
}
/*Fim do código*/