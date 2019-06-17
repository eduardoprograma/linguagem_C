//Programa: lin.c
//escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/* Se você já programou em BASIC, FORTRAN ou em linguagem Assembly, pode estar habituado a implementar as operações if-elsee os laços usando o comando GOTO. Como a maioria das linguagens de programação, C fornece um comando goto, que permite que a execução do seu programa desvie-se para uma localização específica, chamada rótulo. O formato do comando goto é como segue:

                goto rotulo;
                rotulo:
                
O programa C a seguir, goto_100.c, usa o comando goto para exibir os números de 1 a 100:*/
#include<stdio.h>

int main(void)
{
    int conta = 1;

    rotulo:
        printf("%d ", conta++);

        if(conta <= 100)
        {
            goto rotulo;
        }
}
/* Quando você usa o comando goto, o rótulo precisa residir na função atual. Em outras palavras, você não
pode usar goto para desviar-se de main para um rótulo que aparece em outra função, ou vice-versa. Como no passado os programadores abusaram do comando goto, você deverá restringir o uso de goto sempre que for possível, e, em lugar dele, usar construções tais como i f if-else e while. Na maioria dos casos, você poderá usar essas três construções para reescrever um fragmento de código que usa goto, e, desse modo, produzir um código mais legível.*/