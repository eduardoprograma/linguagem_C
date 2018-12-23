/* Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.” 
• Caso contrário, imprima: “Empréstimo concedido.” */
#include <stdio.h>
#include <math.h>

/* Incio do código */
int main(void)
{
    /* Declaração das variáveis */
    float salario, porcSalario = 0, prestacao;
    float PORCENTAGEM = 0.20;

    /* Entrada de dados */
    printf("Digite o salario do cliente: ");
    scanf("%f", &salario);
    printf("Valor da prestação do emprestimo: ");
    scanf("%f", &prestacao);

    /* Bloco de comandos */
    porcSalario = salario * PORCENTAGEM;
    //printf("%f\n", porcSalario);  //testando a variavel
    
    if(porcSalario >= prestacao)
    {
        printf("Emprestimo concedido.\n\n");
    }
    else
    {
        printf("Emprestimo nao concedido.\n\n");
    }
    return 0;
}
/* Fim do código */