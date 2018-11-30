/*Calculo do lado do poligono*/
programa
{
	funcao inicio()
	{
		/*Declare a variavel*/
		inteiro ND, NL
		/*Entrada de variavel*/
		escreva("Programa para calculo de poligonos\n\n")
		escreva("Digite o numero de lados do poligono: ")
		leia(NL)
		/*Bloco de comandos*/
		ND = (NL * (NL - 3)) / 2
		/*Saida de variaveis*/
		escreva("O numero de diagonais do poligono e ", ND, "\n")
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 381; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */