//Programa: fputc.c
//escrito por: Eduardo Felizardo Cândido
//Data de Criação: 13/06/2019

/* Exemplo de código - Adicionando caractere com o modo "a" (append)
Crie um programa semelhante ao anterior, mas em vez de substituir o caractere, ADICIONE um caractere ao fim do arquivo.
Escreva no arquivo: "C Progressivo"
Para escrever um texto em sequência, temos que alterar apenas uma coisa: o modo de abertura, de "w" para "a", assim sempre que escrevermos algo, será inserido ao final, anexando, em vez de substituir.
Vamos criar um looping do while para pedir caracteres ao usuário, e este laço só termina se digitarmos enter (caractere '\n').
Como vamos 'mexer' várias vezes no arquivo, abrimos ele antes do looping e fechamos depois.
Nosso código fica: */


#include <stdio.h>

int main(void)
{
    char url[]="char.txt";
    char ch;
    FILE *arq;
    
    arq = fopen(url, "a");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        do
        {
            printf("Caractere: ");
            ch=getchar();
            fflush(stdin);
            fputc(ch, arq);
        }while(ch != '\n');
        fclose(arq);
    return 0;
}


/* Digite caractere por caractere, inclusive espaço, o seguinte: C Progressivo
Em seguida dê enter para terminar.
Veja como ficou seu arquivo char.txt

Agora rode o programa de novo, e digite outra coisa qualquer e dê enter ao final.
Veja novamente seu arquivo! Vai ver que o que tinha antes não foi apagado, e o que digitou depois está na linha de baixo.
Interessante, não? */