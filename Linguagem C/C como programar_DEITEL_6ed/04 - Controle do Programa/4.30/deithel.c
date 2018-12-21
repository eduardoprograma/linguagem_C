/*Escreva novamente o programa da Fig. 4.7 substituindo a instrução switch por uma instrução if/else aninhada: tenha o cuidado de lidar adequadamente com o caso default. Depois escreva novamente esta nova versão substituindo a instrução if/else aninhada por uma série de instruções if; aqui, também, tenha o cuidado de lidar apropriadamente com o caso default (isso é mais difícil do que com a versão if/else aninhada). Este exercício demonstra que switch é uma comodidade e que qualquer instrução switch pode ser escrita apenas com instruções de seleção simples. 431*/
#include <stdio.h>

int main(void)
{
    char grau = ' ';
    int aConta = 0, bConta = 0, cConta = 0, dConta = 0, eConta = 0;

    printf("Entre com o conceito.\n");
    printf("Entre com o caractere EOF (fim) para finalizar as entradas.\n");
    printf("Digite o conceito: ");
    scanf("%c", &grau);

    while(grau != EOF)
    {
        if(grau == 'A')
        {
            ++aConta;
        }
        else
        {
            if(grau == 'B')
            {
                ++bConta;
            }
            else
            {
                if(grau == 'C')
                {
                    ++cConta;
                }
                else
                {
                    if(grau == 'D')
                    {
                        ++dConta;
                    }
                    else
                    {
                        if(grau == 'E')
                        {
                            ++eConta;
                        }
                        /*else
                        {
                            printf ("Fornecido um conceito incorreto."); 
                            printf (" Entre com um novo conceito.\n");
                        }*/
                    }
                }
            }
        }
        printf("Entre com o conceito.\n");
        printf("Entre com o caractere EOF (fim) para finalizar as entradas.\n");
        printf("Digite o conceito: ");
        scanf("%c", &grau);
    }
    printf("\nOs totais de cada conceito sao:\n"); 
    printf("A: %d\n", aConta); 
    printf("B: %d\n", bConta); 
    printf("C: %d\n", cConta); 
    printf("D: %d\n", dConta); 
    printf("F: %d\n", eConta); 
    return 0;
}