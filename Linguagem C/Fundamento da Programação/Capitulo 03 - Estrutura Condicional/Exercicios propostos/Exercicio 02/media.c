/*Programa que calcula media*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declaração de variáveis*/
	float n = 0.0, nt = 0.0, media, c = 0.0;
	/*Entrada de dados*/
	/*Bloco de comandos*/
	while(c < 2){
		printf("Digite a nota do Aluno: ");
		scanf("%f", &n);
		c++;
		nt += n;
	}
	media = nt / c;
	/*Saída de variaveis*/
	printf("A media do aluno e %.2f\n\n", media);
	if(media < 4){
		printf("Aluno REPROVADO!!!\n\n");
	}
	else if(media >= 4 && media < 7){
		printf("Aluno de exame...\n\n");
	}
	else{
		printf("Aluno APROVADO!!!");
	}
	/*Fim do codigo*/
    system("pause");
    return 0;
}