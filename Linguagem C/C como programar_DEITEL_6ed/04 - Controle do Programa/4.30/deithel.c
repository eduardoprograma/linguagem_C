/*Escreva novamente o programa da Fig. 4.7 substituindo a instrução switch por uma instrução if/else aninhada: tenha o cuidado de lidar adequadamente com o caso default. Depois escreva novamente esta nova versão substituindo a instrução if/else aninhada por uma série de instruções if; aqui, também, tenha o cuidado de lidar apropriadamente com o caso default (isso é mais difícil do que com a versão if/else aninhada). Este exercício demonstra que switch é uma comodidade e que qualquer instrução switch pode ser escrita apenas com instruções de seleção simples. 431*/
#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h>

int main()
{ 
    char grau; 
    int ac = 0, bc = 0, cc = 0, dc = 0, ec = 0;
    int Ac = 10, Bc = 9, Cc = 7, Dc = 4, Ec = 0;
    int i = 1;

    printf("Digite um conceito igual A, B , C ou D (EOF PARA ENCERRAR): "); 
    for(grau = getchar(); i <= 45; i++)
    {
        if(grau == 'A' || grau == 'a')
        {
            ++ac;
            //printf("A\n" );
        }
        else
        {
            if(grau == 'B' || grau == 'b')
            {
                ++bc;
                //printf("B\n");
            }
            else
            {
                if(grau == 'C' || grau == 'c')
                {
                    ++cc;
                    //printf("C\n");
                }
                else
                {
                    if(grau == 'D' || grau == 'd')
                    {
                        ++dc;
                        //printf("D\n");
                    }
                    else
                    {
                        if(grau == 'E' ||grau == 'e')
                        {
                            ++ec;
                            //printf("E\n");
                        }
                        else
                        {
                            printf("Digite um conceito valido.\n");
                        }
                    }
                }
            }
        }
        printf("Digite um conceito igual A, B , C ou D (EOF PARA ENCERRAR): ");
        scanf("%s", &grau);
    }
    int media = 0;
    media = ((Ac * ac) + (Bc * bc) + (Cc * cc) + (Dc * dc) + (Ec * ec)) / (ac + bc + cc + dc + ec);
    printf("\nConceitos A: %d\n", ac);
    printf("\nConceitos B: %d\n", bc);
    printf("\nConceitos C: %d\n", cc);
    printf("\nConceitos D: %d\n", dc);
    printf("\nConceitos E: %d\n", ec);
    if(media == 10)
    {
        media = 'A';
        printf("A media da turma e: %c", media);
    }
    if(media > 7 && media <= 9)
    {
        media = 'B';
        printf("A media da turma e: %c", media);
    }
    if(media > 5 && media <= 7)
    {
        media = 'C';
        printf("A media da turma e: %c", media);
    }
    if(media >= 3 && media < 5)
    {
        media = 'D';
        printf("A media da turma e: %c", media);
    }
    if(media >= 0 && media < 3)
    {
        media = 'E';
        printf("A media da turma e: %c", media);
    }
    printf("\n\n");
    system("pause"); 
    return 0;
}
