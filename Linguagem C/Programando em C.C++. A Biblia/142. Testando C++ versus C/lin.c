//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/* Você pode usar várias das dicas apresentadas neste livro tanto na programação em C quanto em C++, enquanto ourras dicas aplicam-se apenas a C++. À medida que você criar seus próprios programas, algumas vezes desejará que o pré-processador determine se você está usando C ou C++ e processe seus comandas apropriadamente. Para lhe ajudar a realizar esses testes, muitos compiladores C++ definem a constante__cplusplus. Se você usar um compilador C padrão, a constante estará indefinida. O seguinte programa, lin.c, usa a constante __cplusplus para determinar o modo correto do compilador: */
#include<stdio.h>

int main(void)
{
    #ifdef __cplusplus 
        printf("Usando C++\n");
    #else 
        printf("Usando C\n");
    #endif
}