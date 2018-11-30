/*Programa Opção de Investimento*/
programa
{
	funcao inicio()
	{
		/*Declare as varáveis*/
		/**/
		inteiro tipo
		real valor, valorT = 0.0
		cadeia tip = "tipo"
		/*Entrada de dados*/
		escreva("Programa Investimento.\n1 - Poupança\n;2 - Fundos de renda fixa\n\n")
		escreva("Digite o valor a ser investido: $")
		leia(valor)
		escreva("Tipo de investimento: ")
		leia(tipo)
		/*Bloco de comando*/
		escolha(tipo){
			caso 1:
				valorT = valor + (valor * 0.03)
				tip = "Popança"
			pare
			caso 2:
				valorT = valor + (valor * 0.04)
				tip = "Fundo de Renda Fixa"
			pare
			caso contrario:
				escreva("Comece de novo: Opção invalida!\n\n")
			pare
		}
		/*Saída de dados*/
		escreva("Para o Investimento ", tip, "o valor sera acrecido com juros : $", valorT, "\n\n")
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 477; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */