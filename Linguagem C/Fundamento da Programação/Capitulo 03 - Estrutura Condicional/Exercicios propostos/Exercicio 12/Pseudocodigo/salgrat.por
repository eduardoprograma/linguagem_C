/*Programa Gratificação*/
programa
{
	funcao inicio()
	{
		/*Declare as variáveis*/
		/*sal = salario
		  imp = Imposto
		  grat = Gratificação
		  salImp = Salario com imposto
		  salTot = Salario total*/
		real sal, imp = 0.07, grat, salImp, salTot, aux
		/*Entrada de dados*/
		escreva("Programa gratificação de funcionarios.\n\n")
		escreva("Digite o salário do funcionário: $")
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
		escreva("Salário a receber: $", salTot, "\n")
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 815; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */