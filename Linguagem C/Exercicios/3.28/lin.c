//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.28 Valide a entrada do usuário. 
	Modifique o programa da Figura 3.10 para validar suas entradas. Em qualquer entrada, se o valor inserido for diferente de 1 ou 2, continue o looping até que o usuário informe um valor correto. */

#include <stdio.h>		/* função main inicia execução do programa */

int main( void )
{
	/* inicializa variáveis nas declarações */ 
	int aprovados = 0; /* número de aprovações */ 
	int reprovados = 0; /* número de reprovações */ 
	int aluno = 1; /* contador de alunos */ 
	int resultado; /* um resultado de exame */
	
	/* processa 10 alunos usando loop controlado por contador */ 
	while ( aluno <= 10 ) 
	{
		/* pede entrada do usuário e lê o valor digitado */ 
		chama:
		printf( "Forneca resultado ( 1=aprovado,2=reprovado): "); 
		scanf( "%d", &resultado );

		if(resultado < 1 || resultado > 2) 			//foi impementado apenas esse if/goto.
		{
			printf("Digite 1 = Aprovado ou 2 = Reprovado\n\n");
			goto chama;
		}
		
		/* se resultado 1, incrementa aprovados */ 
		if ( resultado == 1 ) 
		{ 
			aprovados = aprovados + 1; 
		} /* fim do if */
		else 
		{
			/* senão, incrementa reprovados */ 
			reprovados = reprovados + 1; 
		} /* fim do else */
		
		aluno = aluno + 1; /* incrementa contador de alunos */ 
	} /* fim do while */
	
	/* fase de finalização; exibe número de aprovados e reprovados */ 
	printf( "Aprovados %d\n", aprovados ); 
	printf( "Reprovados %d\n", reprovados );
	
	/* se mais de oito aprovados, imprime 'Bônus ao instrutor!' */ 
	if ( aprovados > 8 ) 
	{
		printf( "Bonus ao instrutor!\n" ); 
	} /* fim do if */
	return 0; /* indica que o programa foi concluído com sucesso */ 
} /* fim da função main */		