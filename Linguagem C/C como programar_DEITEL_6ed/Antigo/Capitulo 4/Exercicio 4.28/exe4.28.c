#include <stdio.h>
#include <stdlib.h>
main () {
    int codigo, horasTrab, horasExt, totalHoras;
    double salMensal, salSeman, salHora, salExtra, vendas, salfixo, comis, servicos;
    salMensal = 7000;
    salHora = 31.25;
    salExtra = 0;
    salfixo = 250;
    vendas = 0;
    comis = 0;
    servicos = 1500;
    horasTrab = 40;
    printf("Lista de codigos:\n");
    printf("%2s%30s", "Gerentes -", "Codigo: 1\n");
    printf("%2s%22s", "Funcionarios H/H -", "Codigo: 2\n");
    printf("%2s%12s", "Funcionarios Comissionados -", "Codigo: 3\n");
    printf("%2s%15s", "Prestadores de servicos -", "Codigo: 4\n");
    printf("%2s%25s", "Para encerrar -", "Codigo:-1\n");
    printf("\nDigite o codigo desejado: ");
    scanf("%d", &codigo);
    while(codigo != -1){
        
        switch (codigo)
        {
            case 1:
                printf("O salario de gerente desta semana: $ %.2lf\n", salMensal/4);
                break;
            case 2:
                printf("Digite as horas trabalhadas: ");
                scanf("%d", &totalHoras);
                
                if (totalHoras >= 40) {
                    horasExt = totalHoras - horasTrab;
                    salSeman = (salHora * horasTrab) + ((salHora * 1.5) * horasExt);
                    printf("O salario do funcionario esta semana: $ %.2lf\n", salSeman); 
                }
                else
                {
                    salSeman = horasTrab * salHora;
                    printf("O salario do funcionario esta semana: $ %.2lf\n", salSeman); 
                }
                break;
            case 3:
                printf("Digite o valor das vendas: $ ");
                scanf("%lf", &vendas);
                comis = vendas * 0.057;
                salSeman = salfixo + comis;
                printf("O salario do vendedor esta semana: $ %.2lf\n", salSeman);
                break;
            case 4:
                printf("O salario do prestador de servico esta semana: $ %.2lf\n", servicos);
                break;
            default:
                printf("Digite um valor conforme recomendado.\n");
                break;
        }
        printf("\nDigite o codigo desejado: ");
        scanf("%d", &codigo);
    }
    system("pause");
    return 0;
}