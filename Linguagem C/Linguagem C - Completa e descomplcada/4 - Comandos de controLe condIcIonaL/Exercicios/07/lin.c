/* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.
Estado Imposto: MG = 7%, SP = 12%, RJ = 15%, MS = 8%. */ 
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    float venda = 0, preFinal = 0;
    const float mg = 0.07, sp = 0.12, rj = 0.15, ms = 0.08;
    int estado;

    /* Entrada de dados */
    printf("Entre com o valor da venda: ");
    scanf("%f", &venda);
    printf("Entre com o Estado;1-MG, 2-SP, 3-RJ ou 4-MS: ");
    scanf("%d", & estado);

    /* Bloco de comandos */
    switch (estado)
    {
        case 1:
            preFinal = venda + (venda * mg);
            printf("Preco final: R$%.2f\n", preFinal);
            break;
        case 2:
            preFinal = venda + (venda * sp);
            printf("Preco final: R$%.2f\n", preFinal);
            break;
        case 3:
            preFinal = venda + (venda * rj);
            printf("Preco final: R$%.2f\n", preFinal);
            break;
        case 4:
            preFinal = venda + (venda * ms);
            printf("Preco final: R$%.2f\n", preFinal);
            break;
        default:
            printf("Digite os estados com letras maiusculas: MG, SP, RJ e MS.");
            break;
    }
    return 0;
}
/* Fim do código */