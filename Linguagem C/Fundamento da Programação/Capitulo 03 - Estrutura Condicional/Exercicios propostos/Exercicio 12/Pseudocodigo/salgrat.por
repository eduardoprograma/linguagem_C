/*Programa Gratifica��o*/
programa
{
	funcao inicio()
	{
		/*Declare as vari�veis*/
		/*sal = salario
		  imp = Imposto
		  grat = Gratifica��o
		  salImp = Salario com imposto
		  salTot = Salario total*/
		real sal, imp = 0.07, grat, salImp, salTot, aux
		/*Entrada de dados*/
		escreva("Programa gratifica��o de funcionarios.\n\n")
		escreva("Digite o sal�rio do funcion�rio: $")
		leia(aux)
		sal = aux
		salImp = sal - (sal * imp)
		/*Bloco de comando*/
		se(sal <= 300){
			grat = 100.00
			salTot = salImp + grat 
		}
		senao se(sal > 300 e sal <= 600){
			grat = 75.00
			salTot = salImp + grat 
		}
		senao se(sal > 600 e sal <= 900){
			grat = 50.00
			salTot = salImp + grat 
		}
		senao{
			grat = 35.00
			salTot = salImp + grat 
		}
		/*Saida de dados*/
		escreva("Sal�rio a receber: $", salTot, "\n")
		/*Fim do c�digo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 815; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */