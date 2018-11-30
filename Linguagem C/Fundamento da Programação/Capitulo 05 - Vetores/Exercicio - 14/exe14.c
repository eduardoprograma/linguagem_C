/*Programa recebe o nome e duas notas de seis alunos e mostra o relatório.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* DEFINE OS ELEMENTOS DOS VETORES */
#define SIZEAL 6
#define SIZEAC 6
#define SIZEAN 6

/* INICIO */
main()
{
    setlocale(LC_ALL, "pt-br");

    /* DECLARAÇÃO DE VARIÁVEIS */
    char vetorAluno[SIZEAL][SIZEAC] = {0};
    float vetorNota1[SIZEAN] = {0}, n = 0, media = 0, soma = 0;
    float vetorNota2[SIZEAN] = {0};
    int i, ap = 0, ex = 0, rp = 0;

    /* ENTRADA DE DADOS */
    for(i =0; i <SIZEAL; i++)
    {
        printf("Digite o nome do %dº Aluno: ", i + 1);
        scanf("%s", vetorAluno[i]);
        printf("Digite a nota da prova 1: ");
        scanf("%f", &n);
        vetorNota1[i] = n;
        printf("Digite a nota da prova 2: ");
        scanf("%f", &n);
        vetorNota2[i] = n;
    }
    /* BLOCO DE COMANDO */
    printf("\n%10s\t%10s\t%10s\t%10s\t%10s\t\n", "ALUNO", "1ªPROVA", "2ªPROVA", "MEDIA", "SITUAÇÃO");
    for(i = 0; i < SIZEAL; i++)
    {
        media = (vetorNota1[i] + vetorNota2[i]) / 2;
        soma += media;
        if(media >= 7){
            ap++;
            printf("%10s\t%10.2f\t%10.2f\t%10.2f\t%10s\t\n", vetorAluno[i], vetorNota1[i], vetorNota2[i], media, "Aprovado.");
        }
        else if(media < 7 && media >= 2){
            ex++;
            printf("%10s\t%10.2f\t%10.2f\t%10.2f\t%10s\t\n", vetorAluno[i], vetorNota1[i], vetorNota2[i], media, "Exame.");
        }
        else{
            rp++;
            printf("%10s\t%10.2f\t%10.2f\t%10.2f\t%10s\t\n", vetorAluno[i], vetorNota1[i], vetorNota2[i], media, "Reprovado");
        }
    }

    /* SÁIDA DE DADOS RELACIONAIS */

    /* MEDIA DA CLASSE */
    float mediaClasse = 0;
    mediaClasse = soma / 6;

    /* QUANTIDADE DE ALUNOS APROVADOS */
    float porcenAprovado = 0;
    porcenAprovado = ((float)ap / 6) * 100;

    /* QUANTIDADE DE ALUNOS DE EXAME */
    float  porcenExame = 0;
    porcenExame = ((float)ex / 6) * 100;

    /* QUANTIDADE DE ALUNOS REPROVADOS */
    float porcenReprovado = 0;
    porcenReprovado = ((float)rp / 6) * 100;

    /* SAÍDA DOS RESULTADOS */
    printf("\nA media da classe = %.2f\n", mediaClasse);
    printf("\nQuantidade de alunos aprovados = %.2f%%\n", porcenAprovado);
    printf("\nQuantidade de alunos de exame = %.2f%%\n", porcenExame);
    printf("\nQuantidade de alunos reprovados = %.2f%%\n\n", porcenReprovado);
    system("pause");
    return 0;
}
