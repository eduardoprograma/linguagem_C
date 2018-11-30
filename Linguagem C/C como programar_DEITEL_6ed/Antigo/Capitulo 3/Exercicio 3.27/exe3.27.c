#include <stdio.h>
#include <stdlib.h>

main () {
    int num, contador, maior, maiores;

    contador = 0;
    maior = 0;
    maiores = 0;

    
    while(contador < 10){
        contador++;
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        if (maior < num) {
            
            if (maiores < maior) {
                maiores = maior;
            }
            maior = num;
        }
        
        if (maiores <= maior && num != maior) {
            
            if (maiores < num) {
                maiores = num;
            }
            
        }
        
    }
    printf("\n\nO numero maior e: $%d\n\n", maior);
    printf("\n\nO segundo numero maior e: $%d\n\n", maiores);

    system("pause");
    return 0;
    
}