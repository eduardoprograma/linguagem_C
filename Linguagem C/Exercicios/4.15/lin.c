//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.15 	Programa de juros compostos modificado. 
	Modifique o programa de juros compostos da Seção 4.6 e repita suas etapas para taxas de juros de 5, 6, 7, 8, 9 e 10 por cento. Use um loop for para variar a taxa de juros. */

#include <stdio.h> 
#include <math.h>  
/* função main inicia a execução do programa */ 

int main(void)  
{ 
	double valor; /* valor em depósito */
	double principal = 1000.0; /* principal inicial */ 
	double taxa = .05; /* taxa anual de juros */ 
	int ano; /* contador do ano */
	
	/* calcula valor em depósito para cada um dos dez anos */ 
	for(taxa = 0.05; taxa <= 0.10; taxa += 0.01)
	{
		/* cabeçalho de coluna da tabela de resultados */ 
		printf("%4s%21s\t", "Ano", "Valor na conta");
		printf("Taxa: %.0f%s\n", taxa * 100, "%");

		for (ano = 1; ano <= 10; ano++) 
		{
			/* calcula novo valor para o ano especificado */ 
			valor = principal * pow(1.0 + taxa, ano);
				
			/* exibe uma linha da tabela */ 
			printf( "%4d%21.2f\n", ano, valor );
		}
	}/* fim do for */ 
	return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */