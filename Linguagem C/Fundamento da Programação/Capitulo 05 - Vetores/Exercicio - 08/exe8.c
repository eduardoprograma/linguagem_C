/*Programa carrega o nome de 7 alunos e suas médias finais:
 *Nome do aluno com maior nota;
 *Para cada aluno com média menor que 7:
 *  Mostrar o quanto esse aluno precisa tirar no exame;
 *  considerando que a média para exame é maior que 5.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Define o numero de elementos dos vetores */
#define SIZEAL 7
#define SIZEAC 60
#define SIZEM 7

/* Inicio */
main(){
    setlocale(LC_ALL, "pt-br");

    /* Declaração de variáveis */
    float vetorA[SIZEAL][SIZEAC] = {0};
    float vetorM[SIZEM] = {0};
    float aluno, media, notaF;
    int i, j, k;

    /* Entrada de dados */
    for(i = 0; i < SIZEAL; i++)
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", vetorA[i]);
        printf("Digite a média do aluno : ");
        scanf("%f", &media);
        vetorM[i] = media;
    }
    printf("\n");

    /* Bloco de comando */
    printf("%10s%15s%15s%15s\n", "Nome do aluno","Media final", "Situação", "Nota de Exame");
    for(i = 0; i < SIZEAL; i++)
    {
        /* Bloco de comando de média maior ou igual a 7 */
        if(vetorM[i] >= 7.0){
            j = i;
            printf("%10s%15.2f%15s\n", vetorA[j], vetorM[j], "Aprovado");
        }
        /* Bloco de comando de média menor que 7 */
        else{
            k = i;
            notaF = 10 - vetorM[k];
            printf("%10s%15.2f%15s%15.2f\n", vetorA[k], vetorM[k], "Exame", notaF);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}