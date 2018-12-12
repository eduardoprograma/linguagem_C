/*Uma empresa deseja transmitir dados através do telefone, mas existe a preocupação de que seus telefones possam estar grampeados. Todos os seus dados são transmitidos como inteiros de quatro dígitos. A empresa pediu a você que escrevesse um programa para criptografar os dados de forma que eles possam ser transmitidos com mais segurança. Seu programa deve ler um inteiro de quatro dígitos e criptografá-lo da seguinte maneira: Substitua cada dígito pelo resultado da expressão (soma daquele dígito com 7) modulus 10 (ou seja, o resto da divisão por 10 do número obtido pela soma daquele dígito com 7). Depois, troque o primeiro dígito pelo terceiro e troque o segundo dígito com o quarto. A seguir, imprima o inteiro criptografado. Escreva um programa separado que receba um inteiro criptografado e decriptografe-o para que seja obtido o número original.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int digito_1 = 0, digito_2 = 0, digito_3 = 0, digito_4 = 0;
    int num;
    int cripto_1 = 0, cripto_2 = 0, cripto_3 = 0, cripto_4 = 0;

    /*Entrada de dados*/
    printf("Digite um numero de 4 digitos a ser enviado criptografado: ");
    scanf("%d", &num);

    /*Bloco de comandos*/
    
    /*Separar os digitos*/
    digito_4 = num / 1000;
    digito_3 = (((num / 100) % 100) % 10);
    digito_2 = ((((num / 10) % 1000) % 100) % 10);
    digito_1 = ((((num % 1000) % 100) % 100) % 10);
    //printf("%d, %d, %d, %d.\n", digito_4, digito_3, digito_2, digito_1);    //Teste

    /*Criptografia*/
    cripto_4 = abs(digito_4 + 7) % 10;
    cripto_3 = abs(digito_3 + 7) % 10;
    cripto_2 = abs(digito_2 + 7) % 10;
    cripto_1 = abs(digito_1 + 7) % 10;

    digito_4 = cripto_2;
    digito_3 = cripto_1;
    digito_2 = cripto_4;
    digito_1 = cripto_3;
    //printf("%d, %d, %d, %d.\n", digito_4, digito_3, digito_2, digito_1);    //Teste

    /*Discriptografar*/
    if(digito_4 >= 0 && digito_4 <= 6)  //deve-se somar 10 a tabela de 0 a 6
    {
        digito_4 += 10;
    }
    if(digito_3 >= 0 && digito_3 <= 6)
    {
        digito_3 += 10;
    }
    if(digito_2 >= 0 && digito_2 <= 6)
    {
        digito_2 += 10;
    }
    if(digito_1 >= 0 && digito_1 <= 6)
    {
        digito_1 += 10;
    }
    cripto_4 = abs(digito_2 - 7) % 10;
    cripto_3 = abs(digito_1 - 7) % 10;
    cripto_2 = abs(digito_4 - 7) % 10;
    cripto_1 = abs(digito_3 - 7) % 10;

    digito_4 = cripto_4;
    digito_3 = cripto_3;
    digito_2 = cripto_2;
    digito_1 = cripto_1;

    /*Saída de dados*/
    printf("Receba esta informacao: %d%d%d%d.\n", digito_4, digito_3, digito_2, digito_1);
    system("pause");
    return 0;
}
/*Fim do código*/