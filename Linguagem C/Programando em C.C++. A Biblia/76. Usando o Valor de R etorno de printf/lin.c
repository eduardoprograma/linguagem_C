//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 13/06/2019

/* Na Dica 75 você aprendeu como usar o especificador de formato %n de printf para determinar o número de caracteres que printf escreveu. Usar o especificador de formato %n (Não funciona usar ltrlen) um modo de garantir que printfteve sucesso ao exibir sua saída. Al m disso, quando printf termina, ele retorna o número total de caracteres que escreveu. Se printf e. ncontrar um erro, retornar a constante EOF (que, como você aprender , indica o fim de um arquivo). O programa a seguir, printfok.c, usa o valor de retorno de prin tf para garantir que printf'foi bem-sucedido:*/

#include<stdio.h>

int main(void)
{
    int result;

    result = printf("Bíblia do Programador C/C++, do Jamsa!\n");
    if (result == EOF) 
        fprintf(stderr, "Erro dentro de printf\n");
}

// * stdin - é o arquivo de entrada padrão. Até o momento, para nós, foi o teclado.
// * stdout - é o arquivo de saída padrão. Até o momento, nossa saída padrão é a tela do computador, através do terminal de comando.
// * stderr - arquivo padrão de erro, onde podemos direcionar mensagens de erro para outro local sem ser o da saída padrão, como para um log (espécie de registro de ações).