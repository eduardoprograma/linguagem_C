/*Escreva uma instrução simples em C que faça cada uma das tarefas seguintes: 
a) Atribua a soma de x e y a z e incremente o valor de x de 1 depois do cálculo. 
b) Multiplique a variável produto por 2 usando o operador *=. 
c) Multiplique a variável produto por 2 usando os operadores = e *. 
d) Verifique se o valor da variável contagem é maior que 10. Se for, imprima "Contagem maior que 10". 
e) Decremente a variável x de 1 e depois a subtraia da variável total. 
f) Adicione a variável x à variável total e depois decremente a variável x de 1. 
g) Calcule o resto depois de q ser dividido por divisor e atribua o resultado a q. Escreva essa instrução de duas maneiras diferentes. 
h)Imprima o valor 123 .4567 com 2 dígitos de precisão. Que valor é impresso? 
i)Imprima o valor de ponto flutuante 3.14159 com três dígitos à direita do ponto decimal. 
Que valor é impresso?*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x = 0, y = 0, z = 0;
    int soma = 0, produto = 0;
    
    /*Entrada de dados*/
    printf("Digite 3 n%cmeros inteiros: ", 130);
    scanf("%d%d%d", &x, &y, &z);
    /*Bloco de comando*/
    printf("Atribua a soma de x e y a z e incremente o valor de x de 1 depois do cálculo\n");
    printf("%d\n", soma = (x + 1) + y + z);
    printf("Multiplique a variável produto por 2 usando o operador *=.\n"); 
    produto = x * y * z;
    printf("%d\n", produto *= 2);
    printf("Multiplique a variável produto por 2 usando os operadores = e *.\n");
    produto = x * y * z;
    printf("%d\n", produto = produto * 2);
    printf("Verifique se o valor da variável contagem é maior que 10. Se for, imprima 'Contagem maior que 10'.\n");
    int contagem = 11;
    while(contagem > 10 && contagem < 12){
        contagem++;
        printf("Contagem maior que 10\n");
    }
    printf("Decremente a variável x de 1 e depois a subtraia da variável total.\n");
    x -= 1;
    int total = x + y + z; 
    printf("%d\n", total);
    printf("Adicione a variável x à variável total e depois decremente a variável x de 1.\n");total += x - 1;
    printf("%d\n", total); 
    printf("Calcule o resto depois de q ser dividido por divisor e atribua o resultado a q. Escreva essa instrução de duas maneiras diferentes.\n");
    int q, divisor;
    printf("Digite o valor de q: ");
    scanf("%d", &q);
    printf("Digite o valor do divisor: ");
    scanf("%d", &divisor);
    printf("%d\n", (q / divisor) + (q % divisor));
    int divisao = 0;
    divisao = q / divisor;
    int resto = 0;
    resto = q / divisor;
    printf("%d\n", divisao + resto);
    printf("Imprima o valor 123 .4567 com 2 dígitos de precisão. Que valor é impresso?\n");
    printf("%.2f\n", 123.4567);
    printf("Imprima o valor de ponto flutuante 3.14159 com três dígitos à direita do ponto decimal. Que valor é impresso?\n");
    printf("%.3f\n", 3.14159);

    system("pause");
    return 0;
}
/*Fim do código*/