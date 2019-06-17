//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data da Criação: 17/06/2019

/*Quando seus programas trabalharem com strings, algumas vezes você precisará anexar o conteúdo de uma string em outra string. Por exemplo, se uma string contém um nome de subdiretório e outra contém um nome de arquivo, você poderá anexar o nome de arquivo ao subdiretório para criar um nome de caminho completo. Os programadores C referenciam o processo de anexar uma string em outra como concatenação de strings. Para lhe ajudar a anexar uma string em outra, a maioria dos compiladores C fornece uma função chamada strcat, que concatena (anexa) uma string de origem em uma string-alvo, como mostrado aqui:

#tinclude <string.h> 
char *strcat (char alvo, const char *origem); 

O programa a seguir, strcat. c, ilustra como usar a função strcat: */
#include<stdio.h>
#include<string.h>

int main(void)
{
    char nome[64] = "Dalmata Macho"; 
    strcat(nome, " Happy");
    printf("O nome completo do Happy e %s\n", nome);
}

/*Quando você compilar e executar o programa strcat. c, sua tela exibirá o seguinte:

O nome completo do Happy é Dálmata Macho Happy C : \ >

Para compreender melhor a função strcat, considere a seguinte implementação: 

char *strcat(const *alvo, const char *origem) 
{
    char *original = alvo;
    while (*alvo)
        alvo++; //Encontra o final da String
    while (*alvo++ = *origem++);
    return(original);
}*/