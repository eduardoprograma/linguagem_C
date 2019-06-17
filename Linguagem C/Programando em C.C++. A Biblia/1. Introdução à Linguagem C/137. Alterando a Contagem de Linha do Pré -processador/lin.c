//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/04/2019

/* Na Dica 136 você aprendeu como usar a constante__LINE do pré-processador dentro de seus programas. Quando você usar a constante__LINE . algumas vezes poderá querer alterar o número da linha atual do préprocessador. Por exemplo, assuma que você esteja u sando__LINE para ajudar a depurar seus programas, como discutido na Dica 136. Se você restringiu o erro a um conjunto específico de instruções, pode querer que o pré-processador exiba os números de linha relativos a uma localização específica. Para lhe ajudar a executar esse processamento, o pré-processador C fornece a diretiva Mine que lhe permite alterar o número da linha atual. A diretiva a seguir, por exemplo, instrui o pré-processador a definir seu número de linha para 100: 

        #lin 100
        
Você também pode usar a diretiva Mine para alterar o nome do arquivo de código-fonte que a constante __FILE__exibirá:

        #line 1 "NOMEARQ.C
        
O programa a seguir, lin.c, ilustra como usar a diretiva Mine:*/
#include<stdio.h>

int main(void)
{
    printf("Arquivo %s: Cheguei com sucesso a linha %d\n ", __FILE__, __LINE__);

    // Outros comandos aqui 
    #line 100 "NOMEARQ.C"

    printf("Arquivo %s: Cheguei com sucesso a linha %d\n " , __FILE__ , __LINE__) ;
}