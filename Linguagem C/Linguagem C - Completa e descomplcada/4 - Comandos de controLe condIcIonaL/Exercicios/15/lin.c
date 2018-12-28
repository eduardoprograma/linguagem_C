/* Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são calculadas como em que ∆ = b^2 – 4 * a * c e ax^2 + bx + c = 0 representa uma equação do segundo grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do contrário, imprima: 
• Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”. 
• Se ∆ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”. 
• Se ∆ > 0, existem duas raízes reais. Imprima as raízes. */
#include <stdio.h>
#include <math.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    int a = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0;

    /* Entrada de dados */
    printf("Digite 3 numeros inteiros: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a == 0)
    {
        printf("Não é equação de segundo grau ('a = 0').\n");
    }
    /* Bloco de comandos */
    else
    {
        delta = pow(b, 2) - 4 * a * c;
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a);
        
        if(delta < 0)
        {
            printf("Nao existe raiz\n");
            printf("O valor de DELTA=%d\n", delta);
        }
        else if(delta == 0)
        {
            printf("Raiz unica.\n");
        }
        else
        {
            printf("O valor de x'=%d, x''=%d\n", x1, x2);
        }
    }
    return 0;
}
/* Fim do código */