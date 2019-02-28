/* Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida. */
/* Autor: Eduardo Cândido */
/* Estudante de Engenharia da computação */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro
{
    char nome[100];
    int idade;
    char endereco[100];
    int numero;
};

/* inicio do código */
int main()
{
    /* declaração de variáveis */
    struct cadastro c[1000];
    int i, opcao = 0, adciona = 0, controle = 0;
    int cad = 0;
    char name[100];
    char address[100];
    setbuf(stdin, NULL);

    /* entrada de dados */
    option:
    printf("Bem vindo ao cadastro:\n");
    printf("Informe a quantidade de registro a serem feitos: ");
    scanf("%i", &controle);
    printf("TABELA DE FUNCOES:\n");
    printf("1 - para novo cadastro;\n2 - Para consulta de cadastro.\n");
    printf("Digite a opcao: ");
    scanf("%i", &opcao);
    if(opcao == 1)
    {
        for(i = adciona; i < controle; i++)
        {
            printf("Registro N: %d\n", i);
            printf("Digite o Nome: ");
            gets(c[i].nome);
            printf("%s", c[i].nome);
            printf("Digite a idade: ");
            scanf("%d", &c[i].idade);
            printf("Digite o Endereco: ");
            gets(c[i].endereco);
            strcpy(c[i].endereco, address);
            printf("Digite o numero da residencia: ");
            scanf("%i", &c[i].numero);
        }
    }
    adciona = i;
    /* bloco de comando */
    if(opcao == 2)
    {
        for(i = adciona; cad != -1; i++)
        {
            printf("Digite o registro que deseja encontrar ou -1 para sair: ");
            scanf("%i", &cad);
            if(cad >= 0)
            {
                printf("Nome: %s\n", c[i].nome);
                printf("Idade: %i\n", c[i].idade);
                printf("Endereco: %s, ", c[i].endereco);
                printf("%i\n", c[i].numero);
                puts("");
            } 
        }
    }
    goto option;
    return 0;
}
/* fim do código */
