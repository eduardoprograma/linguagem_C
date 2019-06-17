//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/* Como você aprendeu, as macros oferecem um modo de definir constantes que o pré-processador substitui em todo o seu programa antes que a compilação inicie. Além disso, as macros lhe permitem criar operações similares às funções que trabalham como parâmetros. Os parâmetros são valores que você passa para a macro. Por exemplo, a seguinte macro, SOMA, retorna a soma dos dois valores que você passa para a macro:

#define SOMA(x, y) ((x) + (y)) 

O programa a seguir, ex_soma.c, usa a macro SOMA para somar vários valores: */
#include<stdio.h>

#define SOMA(x, y) ((x) + (y))

int main(void)
{
    printf("Somando 3 + 5 = %d\n", SOMA(3, 5)); 
    printf("Somando 3.4 + 3.1 = %f\n", SOMA(3.4, 3.1)); 
    printf("Somando -100 + 1000 = %d\n", SOMA(-100, 1000));
}

/* Dentro da definição da macro SOMA, x e y representam os parâmetros da macro. Quando você passa dois
valores para a macro, tal como SOMA(3, 5) o pré-processador substitui os parâmetros dentro da macro, como mostrado na Figura 154. No programa ex_soma.c, as substituições do pré-processador resultarão no seguinte código:

printf("Somando 3 + 5 = %d\n", ((3) + (5))); 
printf("Somando 3.4 + 3.1 = %f\n", ((3.4) + (3.1))); 
printf("Somando -100 + 1000 = %d\n", ((-100) + (1000))); */