/*Identifique c corrija os erros em cada um dos itens seguintes: 
a) while (c <= 5) < produto *= c; 
b) scanf("%.4f", &valor); 
c) if (gênero == 1) printf("Feminino\n") else; printf("Masculino\n");*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração das variáveis*/
    int c, genero, produto = 1;
    float valor = 0;

    //a) while (c <= 5) < produto *= c;
    /*Entrada de dados*/
    printf("Digite um valor para c menor ou igual a 5: ");
    scanf("%d", &c);

    /*Bloco de comandos*/
    while(c <= 5)
    {
        c++;
        produto *= c;
        printf("O valor do produto %c %d.\n", 130, produto);
    }
    printf("\n\n");

    //b) scanf("%.4f", &valor);
    /*Entrada de dados*/
    printf("Digite o valor: R$ ");
    scanf("%f", &valor);

    /*Saída de dados*/
    printf("O valor %c %.4f\n", 130, valor);
    printf("\n\n");

    //c) if (gênero == 1) printf("Feminino\n") else; printf("Masculino\n");
    /*Entrada de dados*/
    printf("Digite 1 para Feminino e 2 para Masculino\n");
    printf("Qual os eu sexo(genero): ");
    scanf("%d", &genero);

    /*Bloco de comandos*/
    if(genero == 1)
    {
        printf("Feminino.\n");
    }
    else if(genero == 2)
    {
        printf("Masculino.\n");
    }
    else
    {
        printf("Genero n%co definido\n", 198);
    }
    printf("\n\n");

    system("pause");
    return 0;
}
/*Fim do código*/