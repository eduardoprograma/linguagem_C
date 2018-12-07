/*Tendo em vista o alto preço da gasolina, os motoristas estão preocupados com a quilometragem percorrida por seus automóveis. Um motorista fez o controle recompletando várias vezes o tanque e registrando os quilômetros percorridos e os litros de gasolina necessários para encher o tanque. Desenvolva um programa em C que receba como dados a quilometragem dirigida e os litros usados para recompletar o tanque. O programa deve calcular e exibir a quilometragem por litro obtida para cada recompletamento. Depois de processar todas as informações, o programa deve calcular e exibir a média de quilômetros por litro obtida para todos os recompletamentos.

Entre com os litros consumidos (-1 para finalizar): 12.8 
Entre com os km percorridos: 287 
A taxa km/litro para esse tanque foi 22.421875

Entre com os litros consumidos (-1 para finalizar): 10.3 
Entre com os km percorridos: 200 
A taxa km/litro para esse tanque foi 19.417475

Entre com os litros consumidos (-1 para finalizar): 5 
Entre com os km percorridos: 120 
A taxa km/litro para esse tanque foi 24.000000

Entre com os litros consumidos (-1 para finalizar): -1 
A taxa total de km/litro foi 21.601423*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    float quilometragem_Dirigida = 0, litros_Abastecidos = 0;
    float quilometragem_Por_Litro = 0, media_Quilometro_Por_Litro = 0;
    int contador_Abastecimentos = 0;
    float total_Abastecimentos = 0;

    /*Entrada de dados*/
    printf("Entre com os litros consumidos (-1 para finalizar): ");
    scanf("%f", &litros_Abastecidos);

    /*Bloco de comandos*/
    while(litros_Abastecidos != -1)
    {
        contador_Abastecimentos++;
        printf("Entre com os km percorridos: ");
        scanf("%f", &quilometragem_Dirigida);

        quilometragem_Por_Litro = quilometragem_Dirigida / litros_Abastecidos;      //Calculo

        printf("A taxa total de km/litro: %.2f km/l\n\n", quilometragem_Por_Litro);
        total_Abastecimentos += quilometragem_Por_Litro;

        printf("Entre com os litros consumidos (-1 para finalizar): ");
        scanf("%f", &litros_Abastecidos);
    }

    media_Quilometro_Por_Litro = (float)total_Abastecimentos / contador_Abastecimentos;

    /*Saída de dados*/
    printf("O numero de abastecimentos e de %d, e a media deste numero foi de %.2f km/l\n\n", contador_Abastecimentos,media_Quilometro_Por_Litro);

    system("pause");
    return 0;
}
/*Fim do código*/