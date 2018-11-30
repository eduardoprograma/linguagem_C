#include <stdio.h>
#include <stdlib.h>

main () {
    int quilometro, contador;
    double abastecimento, mediaTanque, mediTotal, somaMediaTanque;

    //Inicialização
    quilometro = 0;
    abastecimento = 0;
    mediaTanque = 0;
    contador = 0;
    mediTotal = 0;
    somaMediaTanque = 0;

    //Desenvolvimento
    printf("Digite os litros consumidos, ou -1 para finalizar: ");
    scanf("%lf", &abastecimento);
    while(abastecimento != -1){
        printf("Diggite os quilometros percorridos: ");
        scanf("%d", &quilometro);
        mediaTanque = (float) quilometro / abastecimento;
        contador++;
        somaMediaTanque = somaMediaTanque + mediaTanque;
        printf("A media deste tanque foi %.2f k/l.\n\n", mediaTanque);
        printf("Digite os litros consumidos, ou -1 para finalizar: ");
        scanf("%lf", &abastecimento);
    }
    mediTotal = (float) somaMediaTanque / contador;
    printf("A soma das medias litros de combustivel consumido foi de %.2f km/l\n\n", somaMediaTanque);
    printf("O numero de abastecimentos foi de %d\n\n", contador);
    printf("A media total de combustivel consumido foi de %.2f km/l.\n\n", mediTotal);
    system("pause");
    return 0;
}