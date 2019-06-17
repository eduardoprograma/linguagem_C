//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Já vimos que, a função printf supomos especificadores de formato que fornecem informações sobre os tipos de parâmetro (tais como int, float, char, etc.). Na Dica 58, você aprendeu que, usando o especificador de formato %f, é possível exibir valores em ponto flutuante. Dependendo dos requisitos do seu programa, algumas vezes você pode querer exibir os valores usando um formato exponencial. Para exibir um valor em ponto flutuante em um formato exponencial, use o especificador de formato %e ou %E. A diferença entre %e e %E é que este último instrui printfa usar uma letra E maiúscula na saída. O programa a seguir, exp_sai.c, usa os especificadores de formato %e e %E para exibir valores em ponto flutuante em seus formatos exponenciais:*/
#include<stdio.h>

int main(void)
{
    float pi = 3.14159;
    float raio = 2.0031;

    printf("A área do círculo é %e\n", 2 * pi * raio);
    printf("A área do círculo é %E\n", 2 * pi * raio);
}