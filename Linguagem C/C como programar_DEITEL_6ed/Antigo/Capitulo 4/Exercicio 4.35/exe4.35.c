#include <stdio.h>
#include <stdlib.h>
main () {
    int ano;
    ano = 0;
    printf("Os calendarios aqui neste programa correspodem  aos anos de 1994 a 1999.\nPortanto e necessario que o usuario digite o ano no intervalo valido.\n%72s\n", "Grato.");
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    while(ano >= 1994 && ano <= 1999){
        
        switch (ano)
        {
            case 1994:
                printf("%");
                break;
        
            default:
                break;
        }
    }
    
    system("pause");
    return 0;
}