/*Programa operações e escolhas*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as variáveis*/
	float n1, n2, O;
	int NC;
	/*Entrada de dados*/
	printf("Programa Chaves\n\n");
	printf("Digite um numero: ");
	scanf("%f", &n1);
	printf("Digite um numero: ");
	scanf("%f", &n2);
	printf("Escolha uma opção:\n\n"
	       "1 - Média\n"
	       "2 - Diferença\n"
	       "3 - Produto\n"
	       "4 - Divisão\n");
	printf("Escolha... Digite agora a opção: ");
	scanf("%d", &NC);
	/*Bloco de comando*/
	/*Saíada de dados*/
	switch(NC){
		case 1:
		    O = (n1 + n2) / 2;
		    printf("A média entre os dois numeros é %.1f\n", O);
		    break;
		case 2:
			if(n1 > n2){
				O = n1 - n2;
				printf(" A difrença entre os números é %.1f\n", O);
			}
			else{
				O = n2 - n1;
				printf(" A difrença entre os números é %.1f\n", O);
			}
               break;
		case 3:
		    O = n1 * n2;
		    printf("O produto dos dois números é %.1f\n", O);
               break;
		case 4:
		    O = n1 /n2;
		    printf("A divisão do dois números é %.1f\n", O);
		    break;
        default:
            printf("Reinicie e escolha uma opção valida\n");
            break;
	}
	/*Fim do código*/
    system("pause");
    return 0;
}