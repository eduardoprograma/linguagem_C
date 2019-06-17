//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/* Quando você trabalhar com valores no nível de bit, algumas operações comuns que você efetuará são deslocamentos de bits, ou para a direita (para longe do bit mais significativo) ou para a esquerda (em direção ao bit mais significativo). Para ajudar seus programas a efetuar os deslocamentos bit a bit, C oferece dois operadores deslocamentos bit a bit: um operador que desloca os bits para a direita ( » ) e um que desloca os bits para a esquerda ( « ) . A expressão a seguir usa o operador de deslocamento para a esquerda bit a bit para deslocar os valores na variável sinaliz duas posições para a esquerda:

                        sinaliz = sinaliz « 2 ;
                        
 Suponha que a variável sinaliz contenha o valor 2, como mostrado aqui:
                        0000 0010 
Quando você deslocar o valor duas casas para a esquerda, o resultado será 8, como mostrado aqui:
                        0000 1000 
Quando você desloca valores para a esquerda, C preenche com zeros as posições dos bits menos significativos. No entanto, quando você desloca o valor para a direita, o valor que C coloca na posição do bit mais significativo depende do tipo da variável. Se a variável for sem sinal (isto é, você a declarou no programa como um tipo unsigned), C preencherá com 0 o bit mais significativo durante a operação de deslocamento para a direita. No entanto, se a variável é de um tipo com sinal (em outras palavras, se você não declarou a variável como unsigned), C usará o valor 1 se o valor é atualmente negativo, ou 0 se o valor for positivo. O programa a seguir, aesloca.c, ilustra o uso dos operadores deslocamento para a direita e deslocamento para a esquerda bit a bit.*/
#include<stdio.h>

int main(void)
{
    unsigned u_val = 1;
    signed int valor = -1;

    printf ("%u (sem sinal) deslocado à esquerda 2 vezes é %u\n", u_val, u_val << 2); 
    printf ("%u (sem sinal) deslocado à direita 2 vezes é %u\n", u_val, u_val >> 2); 
    
    u_val = 65535; 
    
    printf ("%u (sem sinal) deslocado à esquerda 2 vezes é %u\n", u_val, u_val << 2); 
    printf ("%u (sem sinal) deslocado à direita 2 vezes é %u\n", u_val, u_val >> 2 ); 
    printf ("%d (com sinal) deslocado à esquerda 2 vezes é %d\n", valor, valor << 2); 
    printf ("%d (com sinal) deslocado à direita 2 vezes é %d\n", valor, valor >> 2);
}