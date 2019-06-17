//Programa; lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/02/2019

/* Quando você trabalha em um grande projeto, algumas vezes pode querer que o pré-processador saiba o nome do arquivo-fonte atual. Por exemplo, você poderia usar o nome de arquivo dentro de uma diretiva de pré-processador que inclua uma mensagem para o usuário dizendo que o programa ainda está em desenvolvimento, como mostrado aqui:
O programa Folha.C ainda está em desenvolvimento e teste. Esta é uma versão Beta.
Para ajudar seus programadores a efetuar esse processamento, o pré-processador C define a constante__FILE_
como igual ao nome do arquivo-fonte atual. O programa a seguir, consfile.c, ilustra o uso da constante__FILE__: */
#include <stdio.h> 
int main(void) 
{ 
    printf("O arquivo %s está em teste Beta\n", __FILE__);
}

/* Quando você compilar e executar o programa consfile.c, sua tela exibirá o seguinte:
O arquivo lin.c está sob teste Beta */