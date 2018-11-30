/*Programa média*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    /*Declare as variáveis*/
    float n1, n2, media;
    /*Entre com o valor das varáveis*/
    printf("Bem vindo ao programa Media.\n\n");
    printf("Digite o valor da primeira nota: ");
    scanf("%f", &n1);
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &n2);
    /*Bloco de comandos*/
    media = ((n1 * 2) + (n2 *3)) / 5;
    /*Saida do valor da variável média*/
    printf("A media do aluno e %.2f\n\n", media);
    /*Fim do código*/
    system("pause");
    return 0;
}
