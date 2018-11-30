#include <stdio.h>
#include <stdlib.h>

main () {
    int aprovacoes, reprovacoes, aluno, resultado;

    aprovacoes = 0;
    reprovacoes = 0;
    resultado = 0;
    aluno = 1;

    printf("Digite a nota do aluno (1 = aprovado, 2 = reprovado ou -1 para finalizar): ");
    scanf("%d", &resultado);
    //printf("\n");
    while(resultado != -1){
        aluno += 1;
        if (resultado == 1) {
            aprovacoes += 1;
        }
        
        if (resultado == 2) {
            reprovacoes += 1;
        }
        
        
        if (resultado != 1 && resultado != 2) {
            printf("'Numero invalido'\n\n");
        }
        printf("\n\n");
        printf("Digite a nota do aluno (1 = aprovado, 2 = reprovado ou -1 para finalizar): ");
        scanf("%d", &resultado);
        
    }
    printf("Aprovados %d\n\n", aprovacoes);
    printf("Reprovados %d\n\n", reprovacoes);
    
    if (aprovacoes > (aluno *.8)) {
        printf("Cobrar taxa escolar\n");
    }
    
    else
    {
        printf("Taxa de aprovados insatisfatoria, nao cobrar a taxa.\n\n");
    }
    system("pause");
    return 0;
    
}