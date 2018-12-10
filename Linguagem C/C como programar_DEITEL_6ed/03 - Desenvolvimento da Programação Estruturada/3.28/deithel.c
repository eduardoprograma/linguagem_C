/*Modifique o programa da Fig. 3.10 para validar suas entradas. Em qualquer entrada, se o valor fornecido for diferente de 1 ou 2, permaneça no loop até que o usuário forneça um valor válido.*/
/* Analise de resultados de exame */ 
#include <stdio.h>
int main(void) 
{
    /* inicializando variáveis em declarações */
    int aprovacoes = 0, reprovacoes = 0, aluno = 1, resultado; 
    /* processamento de 10 alunos; loop controlado por contador*/ 
    while (aluno <= 10) 
    {
        printf("Entre com o resultado (1 = aprovado,2 = reprovado): "); 
        scanf("%d", &resultado);
        if(resultado == 1 || resultado == 2)
        {
            /* if/else no interior do while */ 
            if (resultado == 1)
            {
                aprovacoes = aprovacoes + 1; 
            }
            else
            {
                reprovacoes = reprovacoes + 1;
            }
            aluno = aluno + 1; 
        }
        else
        {
            printf("Por favor digite (1 = aprovado,2 = reprovado):\n ");
        }
    }
    printf("Aprovados %d\n", aprovacoes); 
    printf("Reprovações %d\n", reprovacoes); 
    if (aprovacoes > 8)
    {
        printf ("Cobrar taxa escolar\n"); 
    }
    return 0; 
    /* finalização correta */
}