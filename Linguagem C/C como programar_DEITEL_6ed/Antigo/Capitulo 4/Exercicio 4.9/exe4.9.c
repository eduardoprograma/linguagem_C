#include <stdio.h>
#include <stdlib.h>

main () {
    /*Declaração de variáveis*/
    int numero, contador, valor, soma;
    /*Inicialização*/                          
    numero = 0;
    contador = 1;
    valor = 0;
    soma = 0;
    /*Desenvolvimento*/
    printf("Digite o numero de somas a ser executadas: ");
    scanf("%d", &numero);
    
    for(contador; contador <= numero ; contador++)
    {
        printf("\n\nDigite o numero a ser somado: ");
        scanf("%d", &valor);
        soma += valor;
    }
    /*Conclusão*/
    printf("\n\nA soma dos numeros em seu total e: %d\n\n", soma);
    system("pause");
    return 0;
}