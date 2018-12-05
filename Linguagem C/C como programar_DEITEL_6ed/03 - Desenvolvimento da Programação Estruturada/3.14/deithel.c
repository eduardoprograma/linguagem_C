/*Escreva uma instrução simples em pseudocódigo que indique cada uma das ações seguintes:
a) Exiba a mensagem "Entre com dois inteiros". 
b) Atribua a soma das variáveis x, y e z à variável p. 
c) Teste a seguinte condição em uma estrutura de seleção if/else: O valor atual da variável m é maior que duas vezes o valor atual da variável v. 
d) Obtenha os valores das variáveis s, r e t a partir do teclado.*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Questões para resolver*/

    //a) Exiba a mensagem "Entre com dois inteiros". 
    printf("Entre com dois inteiros.\n\n");

    //b) Atribua a soma das variáveis x, y e z à variável p.
    /*Declare as variáveis*/
    int x, y, z, p = 0;

    /*Entre com o valor das variaveis*/
    printf("Digite 3 variaveis inteiras: ");
    scanf("%d%d%d", &x, &y, &z);

    /*Bloco de comando*/
    printf("A soma dos tres numeros: %d\n\n", p = x + y + z);

    //c) Teste a seguinte condição em uma estrutura de seleção if/else: O valor atual da variável m é maior que duas vezes o valor atual da variável v.
    /*Declare as variáveis*/
    int m, v;

    /*Entradade dados*/
    printf("Digite um valor para M e outro para V: ");
    scanf("%d%d", &m, &v);

    /*Bloco de comando*/
    m /= 2;
    if(m == v)
    {
        printf("O valor atual da variavel m e maior que duas vezes o valor atual da variavel v.\n\n");
    } 
    else
    {
        printf("O valor atual da variavel m nao é maior que duas vezes o valor atual da variavel v.\n\n");
    }
    
    //d) Obtenha os valores das variáveis s, r e t a partir do teclado.
    /*Declare as variáveis*/
    int s, r, t;

    /*Entrada de dados*/
    printf("Digite tres numeros inteiros: ");
    scanf("%d%d%d", &s, &r, &t);

    /*Saída de dados*/
    printf("Numeoros digitados %d, %d, %d.\n\n", s, r, t);

    system("pause");
    return 0;
}
/*Fim do código*/