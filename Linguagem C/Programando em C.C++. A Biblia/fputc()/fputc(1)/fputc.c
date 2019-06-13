//Programa: fputc.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 13/06/2019

/* fputc() - Como escrever um caractere em um arquivo
***************************************************
 
Sem mais delongas, vamos as vias de fato e finalmente aprender a criar e escrever em um arquivo externo de nosso computador.
Para fazer isso vamos usar a função fputc(), que recebe dois dados: o caractere e o FILE*, que terá as informações do local onde iremos escrever o dito caractere:

int fputc(int char, FILE *arq);

Essa função retorna EOF caso não tenha conseguido escrever no arquivo, ou retorna o inteiro que representa o caractere, caso tenha ocorrido.
Exemplo de código - Escrevendo um caractere em um arquivo
Escreva um programa que peça um caractere para o usuário e salve esta entrada em um arquivo chamado "char.txt", localizado na mesma pasta do programa executável.
Vamos inicialmente definir nosso endereço através de uma string (char url[]), que é simplesmente "char.txt", bem como o caractere ch para armazenar o caractere que o usuário digitar.
Como queremos salvar o char em um arquivo, criamos um ponteiro arq do tipo FILE.
Em seguida, pedimos para o usuário digitar algum caractere, que capturamos através da função getchar() e salvamos em ch.
Agora vamos abrir um arquivo para escrever, e isso é feito através da função fopen(), que vai receber a string com a localização do arquivo (isto está armazenado na variável url) e o modo de abertura.
Como queremos escrever, o modo é o "w".
Para checarmos se abertura do arquivo foi realmente efetuada, testamos se a fopen não retornou NULL para arq. Caso não, vamos escrever o caractere no arquivo.
Isso é feito pela função fputc, que diferente da putchar que necessita só do caractere, ela também necessita saber onda vai ser a saída (pois não é mais a saída padrão, a tela).
Essa saída é indicada pelo vetor arq. E pronto, caractere salvo no arquivo "char.txt".
Mas antes de finalizar o programa, devemos adotar a boa prática de programação que nossa apostila de C ensinou: fechar os arquivos, usando a fclose e passando o arq como argumento.
Nosso código C ficou:*/


#include <stdio.h>

int main(void)
{
    char url[]="char.txt";
    char ch;
    FILE *arq;
 
    printf("Caractere: ");
    ch=getchar();
 
    arq = fopen(url, "w");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
    {
        fputc(ch, arq);
        fclose(arq);
    }
 
    return 0;
}

/* Pronto, agora vá na pasta onde está localizado seu executável e vai ver que foi criado um arquivo chamado "char.txt", e dentro dele está o caractere que você digitou.
Pode fechar o programa, reiniciar a máquina ou fazer o que quiser, que o dito cujo arquivo vai continuar no seu HD.

Bacana, não?
Agora experimente rodar de novo o programa, escrevendo outro caractere.
Veja que o antigo foi substituído. Isso ocorreu devido ao modo de abertura, "w".      */
