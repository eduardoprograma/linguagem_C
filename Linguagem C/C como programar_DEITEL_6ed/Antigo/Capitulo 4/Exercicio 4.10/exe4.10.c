#include <stdio.h>
#include <stdlib.h>
main () {
    /*Declaração de variáveis*/
    int contador;
    double numero, soma, media;
    /*Inicialização*/
    numero = 0;
    contador = -1;
    soma = 0;
    media = 0;
    /*Desenvolvimento*/
    
    for(numero; numero != 9999; media == 0)
    {
        soma += numero;
        printf("\nDigite o valor '9999' para encerrar ou...");
        printf("\nDigite o valor a ser somado: ");
        scanf("%lf", &numero);
        contador++;
    }
    /*Conclusão*/
    media = (double) soma / contador;
    printf("\n\nA media dos valores digitados e igual a : %.2lf\n\n", media);
    system("pause");
    return 0;
}