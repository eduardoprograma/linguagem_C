#include <stdio.h>
#include <stdlib.h>

int calcula_Taxas(double horas);

int main()
{
    int car = 0;
    float horas = 0;
    float taxa_total = 0;


    printf("\n\nBem vindo ao programa Garagem!! \n\n\n");

    for (car=1; horas != -1; car++){
        printf("\n\nDigite o tempo que o carro ficou no estacionamento: ");
        scanf("%f", &horas);
        if (horas > 0 && horas <= 24) {
            float taxa;
            taxa = calcula_Taxas(horas);
            taxa_total += taxa;
            printf("\nValor a ser pago: $%.2lf\n", taxa);
            printf("\n_______________________\n");
        }
        else
        {
            printf("\nHoras invalidas.\n");
            printf("\n____________________\n");
        }   
    }
    float taxas;
    printf("\n%2s\t%s\t%s\t", "Carro", "Hora", "Taxa");
    printf("\n%2d\t%.2lf\t%.2lf\t", car, horas,calcula_Taxas(taxas));
    printf("\n%2s\t%8s%.2lf\t", "TOTAL: ", "$", taxa_total);
    printf("\nPrograma encerrado.\n");
    return 0;
}

int calcula_Taxas(double horas){
    float taxa = 0.0;
        if (horas > 0 && horas <= 3){
            taxa = 2;
        }
        if (horas > 17 && horas <= 24){
            taxa = 10;
        }
        if (horas > 3 && horas <= 17){
            taxa = (horas -3) * 0.5 + 2;
        }     
        return taxa;
}