/*Programa que calcula 4 notas e da media*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declaração de variaveis*/
	float n = 0.0, nt = 0.0, c = 0.0, media = 0.0;
	/*Entrada de variaveis*/
	printf("Programa para calculo de 4 notas = media\n\n");
	printf("Digite a primerira nota: ");
	scanf("%f", &n);
	/*Bloco de comando*/
	while(c < 3){
		c++;
		nt += n;
		printf("Digite uma nota: ");
		scanf("%f", &n);
		}
		media = nt / c;
	/*Saida de variaveis*/
	printf("A media e %.2f\n\n", media);
	if(media < 7){
		printf("Reprovado!!!\n\n");
		}
	else{
		printf("Aprovado!!!\n\n");
		}
	/*FIM DO CÓDIGO*/
    system("pause");
    return 0;
}