/*Programa Calculo de salário*/
programa
{
	funcao inicio()
	{
		/*Declare as variaveis*/
		/*Sal = Salário
		  NSal = Novo salario
		  A = Prcentagem*/
		real sal, NSal, A
		/*Entrada de dados*/
		escreva("Programa Calculo de salário.\n\n")
		escreva("Digite o salario do funcionario: $")
		leia(sal)
		/*Bloco de comando*/
		se(sal <= 300){
			A = 0.15
			NSal = sal + (sal * A)
		}
		senao se (sal > 300 e sal <= 600){
			A = 0.10
			NSal = sal + (sal * A)
		}
		senao se (sal > 600 e sal <= 900){
			A = 0.05
			NSal = sal + (sal * A)
		}
		senao{
			A = 0.00
			NSal = sal + (sal * A)
		}
		/*Saída de dados*/
		escreva("O novo salario do funcinario: $", NSal, "\n")
		escreva("Se nao houver alteração é porque não direito a aumento\n") 
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 741; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */