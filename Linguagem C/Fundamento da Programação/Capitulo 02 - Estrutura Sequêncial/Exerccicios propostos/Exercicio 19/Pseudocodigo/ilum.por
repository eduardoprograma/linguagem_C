/*Calculo de ilumina��o do ambiente*/
programa
{
	funcao inicio()
	{
		/*Declara��o de vari�veis*/
		real L1, L2, A, MQ = 18.00, L
		/*Entrada de dados*/
		escreva("Programa para calculo de ilumina��o de um ambiente\n\n")
		escreva("Digite o primeiro lado do ambiente: ")
		leia(L1)
		escreva("Digite o segundo lado do ambiente: ")
		leia(L2)
		/*Bloco de comando*/
		A = L1 * L2
		L = A * MQ
		/*Sa�da de dados*/
		escreva("A ilumina��o para esse ambiente deve antender a ", L, " Watts.\n\n")
		/*Fim de codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 481; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */