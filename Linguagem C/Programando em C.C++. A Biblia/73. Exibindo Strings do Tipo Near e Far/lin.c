//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 12/06/2019

/*A seção Memória, mais à frente discute os ponteiros near e far em detalhes. Resumidamente, os ponteiros near e far representam os endereços de variáveis dentro do espaço de memória do programa. Os programas que rodam dentro de sistemas operacionais mais antigos, tal como o MS-DOS, usam ponteiros far para aumentar o intervalo de endereços de memória que o programa pode usar para armazenar informações. Quando seus programas trabalham com ponteiros de string algumas vezes você quererá exibir o conteúdo da string usando printf. No entanto, como você aprenderá posteriormente na seção Funções, o compilador gerará um erro se você passar um ponteiro far para uma função que espera um endereço near. Se você quiser exibir o conteúdo de uma string far (cujo início um ponteiro de string far indica) usando printf você precisará dizer a printf que está usando um ponteiro far. Para fazer isso, coloque um F maiúsculo (de far) imediatamente após o % no especificador de formato, como mostrado aqui:*/

#include<stdio.h>
#include<windef.h>

int main(void)
{
    char *titulo_near = "Bíblia do Programador C/C++, do Jamsa!";
    char far *titulo_far = "Bíblia do Programador C/C++, do Jamsa!";

    printf("Título do livro: %Ns\n", titulo_near);
    printf("Título do livro: %Fs\n", titulo_far);
}

//Isso não se usa mais segundo minhas pesquisas:
