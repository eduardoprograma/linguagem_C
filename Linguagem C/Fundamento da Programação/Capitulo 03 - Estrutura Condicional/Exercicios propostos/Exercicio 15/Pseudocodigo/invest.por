/*Programa Op��o de Investimento*/
programa
{
	funcao inicio()
	{
		/*Declare as var�veis*/
		/**/
		inteiro tipo
		real valor, valorT = 0.0
		cadeia tip = "tipo"
		/*Entrada de dados*/
		escreva("Programa Investimento.\n1 - Poupan�a\n;2 - Fundos de renda fixa\n\n")
		escreva("Digite o valor a ser investido: $")
		leia(valor)
		escreva("Tipo de investimento: ")
		leia(tipo)
		/*Bloco de comando*/
		escolha(tipo){
			caso 1:
				valorT = valor + (valor * 0.03)
				tip = "Popan�a"
			pare
			caso 2:
				valorT = valor + (valor * 0.04)
				tip = "Fundo de Renda Fixa"
			pare
			caso contrario:
				escreva("Comece de novo: Op��o invalida!\n\n")
			pare
		}
		/*Sa�da de dados*/
		escreva("Para o Investimento ", tip, "o valor sera acrecido com juros : $", valorT, "\n\n")
		/*Fim do c�digo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 477; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */