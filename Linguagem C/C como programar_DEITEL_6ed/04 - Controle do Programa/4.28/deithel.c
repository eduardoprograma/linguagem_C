/*Uma empresa paga seus empregados como gerentes (que recebem um salário fixo mensal), trabalhadores comuns (que recebem um salário fixo por hora para as primeiras 40 horas de trabalho e 1,5 vez seu salário por hora normal para as horas extras trabalhadas), trabalhadores por comissão (que recebem $250 mais 5,7% de suas vendas brutas) ou trabalhadores por empreitada (que recebem uma quantia fixa por item para cada um dos itens produzidos — cada trabalhador por empreitada dessa empresa trabalha com apenas um tipo dei item). Escreva um programa que calcule o pagamento semanal de cada empregado. Você não sabe de antemão o número de empregados. Cada tipo de empregado tem seu código próprio de pagamento: gerentes possuem o código 1, trabalhadores comuns, o código 2, trabalhadores por comissão, o código 3, e trabalhadores por empreitada, o código 4. Use switch para calcular o pagamento de cada empregado com base em seu código de pagamento. Dentro do switch peça ao usuário (i.e., o responsável pela folha de pagamento) para entrar com os fatos adequados à necessidade de seu programa para calcular o pagamento de cada empregado com base em seu código.*/
#include <stdio.h>

int main(void)
{
    float fixo = 0;
    float semana = 0, horaNormal = 0, horaExtra = 0, horas = 0, horasHextras = 0, salario = 0;
    float taxaComis = 0.057, valorVendasBruto = 0, comissao = 0;
    float contrato = 0;
    int codigo  = 0;

    printf("%s\t%s\t%s\t%s\t\n","1 - Gerente", "2 - Funcionario", "3 - Vendedor", "4 - PJ");
    printf("(-1 finaliza o processo de calculo.\n");
    printf("Digite o codigo do funcionario:");
    scanf("%d", &codigo);
    printf("\n\n");

    while(codigo != -1)
    {
        switch (codigo)
        {
            case 1:
                printf("Digite o salario do gerente: $ ");
                scanf("%f", &fixo);
                salario = fixo / 4;
                printf("Salario do gerente pago.\n");
                printf("Valor $ %.2f\n", salario);
                break;
            case 2:
                printf("Digite o salario do funcionario: $ ");
                scanf("%f", &fixo);
                semana = fixo / 4;
                horaNormal = semana / 40;
                horaExtra = horaNormal + (horaNormal * 1.5);
                printf("Digite horas normais trabalhadas: ");
                scanf("%f", &horas);
                printf("Digite o numero de horas extras: ");
                scanf("%f", &horasHextras);
                salario = (horaNormal * horas) + (horasHextras * horaExtra);
                printf("Salario do funcionario pago.\n");
                printf("Valor $ %.2f\n", salario);
                break;
            case 3:
                printf("Digite o valor total das vendas do vendedor; $ ");
                scanf("%f", &valorVendasBruto);
                comissao = valorVendasBruto * taxaComis;
                salario = 250 + comissao;
                printf("Salario do vendedor pago.\n");
                printf("Valor $ %.2f\n", salario);
                break;
            case 4:
                printf("Digite o valor do contrato do PJ: $ ");
                scanf("%f", &contrato);
                salario = contrato / 4;
                printf("Salario do PJ pago.\n");
                printf("Valor $ %.2f\n", salario);
                break;
            default:
                printf("favor digitar uma opcao valida.\n");
                break;
        }
        printf("\n\n");
        printf("%s\t%s\t%s\t%s\t\n","1 - Gerente", "2 - Funcionario", "3 - Vendedor", "4 - PJ");
        printf("(-1 finaliza o processo de calculo.\n");
        printf("Digite o codigo do funcionario:");
        scanf("%d", &codigo);
        printf("\n\n");
    }
    return 0;
}