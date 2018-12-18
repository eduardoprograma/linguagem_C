/*Modifique o programa da Fig. 4.7 de forma que ele calcule o grau médio da turma.*/
#include <stdio.h>
//#define EOF (-1)

int main(void)
{
    int grau;
    int aConta = 0, bConta = 0, cConta = 0, dConta = 0, eConta = 0;

    printf("Entre com o conceito do aluno.\n");
    printf("Entre com o caractere EOF(fim) para finalizar entradas.\n");
    printf("Digite A, B, C, D ou E: ");
    scanf("%d", &grau);

    while((grau = getchar()) != -1)
    {
        switch(grau)
        {
            case 'A':
                ++aConta;
                break;
            case 'B':
                ++bConta;
                break;
            case 'C':
                ++cConta;
                break;
            case 'D':
                ++dConta;
                break;
            case 'E':
                ++eConta;
                break;
            case '\n':/*IGNORE ISTO NA ENTRADA*/
            case ' ':
                break;
            default:
                printf ("Fornecido um conceito incorreto."); 
                printf (" Entre com um novo conceito.\n");
                break;
               
        }
        printf("Digite A, B, C, D ou E: ");
        scanf("%d", &grau);
    }
    printf("\nOs totais de cada conceito sao:\n"); 
    printf("A: %d\n", aConta); 
    printf("B: %d\n", bConta);
    printf("C: %d\n", cConta); 
    printf("D: %d\n", dConta);
    printf("E: %d\n", eConta); 
    int A = aConta * 10;
    int B = bConta * 8;
    int C = cConta * 6;
    int D = dConta * 4;
    int E = eConta * 0;
    int media = (A + B + C + D + E) / (aConta + bConta + cConta + dConta + eConta);
    if(media >= 9 && media <= 10)
    {
        printf("A media da turma e A\n");
    }
    if(media >= 7 && media <= 8)
    {
        printf("A media da turma e B\n");
    }
    if(media >= 5 && media <= 6)
    {
        printf("A media da turma e C\n");
    }
    if(media >= 4 && media <= 5)
    {
        printf("A media da turma e D\n");
    }
    else
    {
        printf("A media da turma e E\n");
    }
    return 0;
}