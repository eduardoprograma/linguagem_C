/* Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem “FIM!” após a contagem. */
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int n;

    /* bloco de comandos */
    for(n = 10; n >= 0; n--)
    {
        printf("%d\t", n);  //Escreva na tela o número atual de 'Contagem'.  
        Sleep(2000);      
    }
    /* saída */
    printf("FIM\n");
    return 0;
}
/* Fim do código */