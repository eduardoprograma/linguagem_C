//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/* Embora os compiladores C sejam muito similares, cada um deles oferece capacidades exclusivas. Para lhe ajudar a escrever programas que depois você possa migrar facilmente de um sistema para outro, o Instituto Nacional Americano de Normas (American National Standards Institute (ANSI)) define padrões para os operadores, construções, comandos e funções que um compilador deve suportar. Os compiladores que aderem a essas normas são chamados compiladores ANSI C. A medida que você cria programas, algumas vezes pode querer determinar se está ou não usando um compilador ANSI. Para lhe ajudar a fazer isso, os compiladores ANSI C definem a constante __STDC__(de STandarD C). Se o compilador estiver configurado para aderir ao padrão ANSI C, ele definirá a constante. Caso contrário, ele não definirá a constante. O programa a seguir, chc_ansi.c, usa a constante __STDC_para determinar se o compilador atual compila para os padrões ANSI: */
#include<stdio.h>
int main(void)
{
    #ifdef __STDC__ 
        printf("Adesão ao ANSI C\n");
    #else 
        printf("Não está no modo ANSI C\n");
    #endif
}