/*(Outro Problema de Else Oscilante) Modifique o código a seguir para produzir a saída mostrada. Use as técnicas apropriadas para os recuos. Você não pode fazer nenhuma modificação além de inserir chaves. O compilador ignora os recuos em um programa C. Eliminamos os recuos do código a seguir para tornar o programa mais interessante. Nota: E possível que não seja necessário fazer nenhuma modificação. 
if (y == 8) 
if (x == 5) 
printf("@@@@@\n"); t a else 
printf("#####\n"),• printf("$$$$$\n"); printf("&&&&&\n");
a) Admitindo x = 5 e y = 8, a seguinte saída é produzida
@@@@@ 
$ $ $ $ $ 
& & & & &
b) Admitindo x = 5 e y = 8, a seguinte saída é produzida.
@@@@@
c) Admitindo x = 5 e y =8, a seguinte saída é produzida.
@@@@@ 
&&&&&
d) Admitindo x = 5 e y = 8, a seguinte saída é produzida.Nota: As três últimas instruções printf são parte de uma instrução composta.
# # # # # # 
$ $ $ $ $
& & & & &*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variaveis*/
    int x = 5, y = 8;

    /*Bloco de comando*/
    if ( y == 8 ) 
    {          
        if ( x == 5 )
        {
            puts( "@@@@@" ); 
        }
        else 
        {
            puts( "#####" ); 
            puts( "$$$$$" ); 
            puts( "&&&&&" );
        }
    }
puts("a) Admitindo x = 5 e y = 8, a seguinte saída é produzida"
            /*@@@@@ 
            $ $ $ $ $ 
            & & & & &*/);
    if ( y == 8 ) 
    {          
        if ( x == 5 )
        {
            puts( "@@@@@" );
            puts( "$$$$$" ); 
            puts( "&&&&&" ); 
        }
        else 
        {
            puts( "#####" ); 
            puts( "$$$$$" ); 
            puts( "&&&&&" );
        }
    }
puts("b) Admitindo x = 5 e y = 8, a seguinte saída é produzida."
            /*@@@@@*/);
    if ( y == 8 ) 
    {          
        if ( x == 5 )
        {
            puts( "@@@@@" ); 
        }
        else 
        {
            puts( "#####" ); 
            puts( "$$$$$" ); 
            puts( "&&&&&" );
        }
    }
puts("c) Admitindo x = 5 e y =8, a seguinte saída é produzida."
            /*@@@@@ 
            &&&&&*/);
    if ( y == 8 ) 
    {          
        if ( x == 5 )
        {
            puts( "@@@@@" );
            puts( "&&&&&" ); 
        }
        else 
        {
            puts( "#####" ); 
            puts( "$$$$$" ); 
            puts( "&&&&&" );
        }
    }
puts("d) Admitindo x = 5 e y = 8, a seguinte saída é produzida.Nota: As três últimas instruções printf são parte de uma instrução composta."
            /*# # # # # # 
            $ $ $ $ $
            & & & & &*/);
    if ( y == 8 ) 
    {          
        if ( x == 5 )
        {
            puts( "#####" ); 
            puts( "$$$$$" ); 
            puts( "&&&&&" );
        }
        else 
        {
            puts( "#####" ); 
            puts( "$$$$$" );
        }
    }        
}
/*Fim do código*/