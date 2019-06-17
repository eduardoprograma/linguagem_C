//Programa: r.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/* Como foi visto, os comandos if-else de C lhe permitem testar múltiplas condições. Por exemplo, considere o seguinte teste da variável letra:
            letra = getchO; 
            letra = toupper(letra);

            if (letra == 'A') 
                system("DIR");
            else if (letra == 'B') 
                system("TIME");
            else if (letra == 'C') 
                system("DATE");
                
Nos casos em que você está comparando a mesma variável com múltiplos valores, C fornece um comando switch, com o seguinte formato:
            switch (expressão) 
            { 
                    case Constante_l: comando; 
                    case Constante_2: comando; 
                    case Constante_3: comando;
            }

Em vez de usar os comandos if-else anterior, você poderia usar switch como segue:
                    switch (letra) 
                    { 
                        case 'A': system("DIR"); 
                        break;
                        case 'B': system("TIME"); 
                        break;
                        case 'C': system("DATE"); 
                        break;
                    }
Ao encontrar um comando switch no seu programa, C avalia a expressão que segue para produzir um resultado. C então compara o resultado com cada um dos valores constantes, especificados por você, que seguem a palavra-chave case. Se C encontrar uma coincidência, ele executará os comandos correspondentes. O comando break separará comandos correspondentes de um case para o outro. Você normalmente colocará um comando break após o último comando que corresponde a uma opção. Na Dica 130, você aprenderá os detalhes que governam o uso do comando break em switch. O programa a seguir, swt_menu.c, usa o comando switch para processar a seleção de menu de um usuário:*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
    char letra;

    do 
    { 
        printf("A Exibir listagem do diretório\n"); 
        printf("B Alterar a hora do sistema\n"); 
        printf("C Alterar a data do sistema\n");
        printf("S Sair\n"); 
        printf("Escolha: "); 
        letra = getch(); 
        letra = toupper(letra); 
        switch (letra) 
        { 
            case 'A': system("DIR"); 
            break;
            case 'B': system("TIME"); 
            break;
            case 'C': system("DATE"); 
            break;
        }; 
    }while (letra != 'S');
}