#include <stdio.h>
#include <stdlib.h>

// ler um inteiro de 4 digitos
// substituir cada digito por (digito+7)%10+(7)
//  trocar o primeiro pelo terceiro e o segundo pelo quarto
// Imprimir o inteiro criptografado
// Criar um que descriptografe

void criptografa(){

    int num,a,b,c,d;

    printf("\nDigite o numero de 4 digitos que sera criptografado: ");
    scanf("%d", &num);

    //Inicia Criptografia
        a = num/1000;
        b = (num%1000)/100;
        c = (num%100)/10;
        d = num%10;


        printf("separado: %d %d %d %d\n", a,b,c,d);

        a = ((a+7)%10+7);
        b = ((b+7)%10+7);
        c = ((c+7)%10+7);
        d = ((d+7)%10+7);

        printf("Ordenado: %d %d %d %d\n", a,b,c,d);

        printf("Descriptografado: %d\n", num);
        printf("Criptografado: %d%d%d%d\n", c,d,a,b);
        system("pause");

 }

void descriptografa()
{
   
// Inverter equacao a = ((a+7)%10+7)
}

void menu()
{
    int  op;

    do{
    printf("\n\n Criptografia!!! \n\n");

    printf("1 - Criptografar\n");
    printf("2 - Descriptografar\n");
    printf("3 - Sair\n\n");
    printf("Escolha a opcao desejada:");
    scanf("%d", &op);

    switch(op){

        case 1:
            criptografa();
            break;

        case 2:
            descriptografa();
            break;

        case 3:
            break;

        default:
            break;
        }
    }while(op!=3);

}
int main()
{

    menu();
    system("pause");
    return 0;
}