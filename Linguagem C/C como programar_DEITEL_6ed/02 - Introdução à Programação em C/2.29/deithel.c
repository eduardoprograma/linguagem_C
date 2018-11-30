/*Eis um pequeno passo à frente. Neste capítulo você aprendeu a respeito de inteiros e o tipo int. O C também pode representar letras maiúsculas, letras minúsculas e uma grande variedade de símbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente. O conjunto de caracteres que um computador utiliza e as representações dos números inteiros correspondentes àqueles caracteres é chamado conjunto de caracteres do computador. Você pode imprimir o número inteiro equivalente à letra maiúscula A, por exemplo, executando a instrução
printf("%d", 'A');
Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiúsculas, letras minúsculas e símbolos especiais. No mínimo, determine os números inteiros equivalentes ao conjunto seguinte: A BCabc 0 12 $ * + /eo caractere espaço em branco*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    char letra;

    /*Entrada de dados*/
    printf("Digite uma letra ou simbolo: ");
    scanf("%c", &letra);

    /*Bloco de comandos*/
    printf ( "Caractere Digitado : %c (Codigo ASCII = %d)\n" , letra , letra ) ;

    system("pause");
    return 0;
}
/*Fim do código*/
