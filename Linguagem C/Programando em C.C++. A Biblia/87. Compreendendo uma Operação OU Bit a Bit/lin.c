//Programa: lin,c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 14/06/2019

/* À medida que a complexidade de seus programas for aumentando você ver que pode aumentar o desempenho do programa ou reduzir as necessidades de memória de um programa usando as opera ões bit a bit As opera ões bit a bit manipulam os valores um ou mais bits ao mesmo tempo. Quando você precisar manipular um valor um único bit, pode utilizar o operador OU bit a bit da linguagem C (I). O operador OU bit a bit examina cada bit dentro de dois valores e gera um terceiro valor como resultado. Por exemplo, assuma que duas vari veis contenham os Valores 3 e 4, cujos bits s o, respectivamente, 00000011 e 00000100. O operador OU bit a bit retorna o valor 7, como mostrado aqui: 

                                        3 00000011 
                                        4 00000100
                                          ________
                                        7 00000111

 No valor 3, os bits 0 e 1 têm um valor 1 e todos os outros bits têm um valor 0. No valor 4, o bit 2 tem B um valor 1, e todos os outros bits têm o valor 0. O resultado de uma operaç o OU ter um valor 1 dentro de cada bit correspondente que tenha um valor 1 em um dos valores originais. Neste caso, o resultado tem um valor 1 nos bits 0, 1 e 2. O programa a seguir, oujbit.c, ilustra como você usa o operador OU bit a bit da. linguagem C:*/

 #include<stdio.h>

 int main(void)
 {
     printf("0 | 0 e %d\n", 0 | 0);
     printf("0 | 1 e %d\n", 0 | 1);
     printf("1 | 0 e %d\n", 1 | 0);
     printf("1 | 1 e %d\n", 1 | 1);
     printf("__________\n");
     printf("1 | 2 e %d\n", 1 | 2);
     printf("128 | 127 e %d\n", 128 | 127);
 }

 /* Quando você compilar e executar o programa ou_bit.c; sua tela exibir o seguinte:
0 | 0 é 0 
0 | 1 é 1 
1 | 0 é 1
1 | 1 é 1 
1 | 2 é 3 
128 | 127 é 255 */