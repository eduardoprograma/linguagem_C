/*Programa temperatura*/
programa
{
	funcao inicio()
	{
		/*Declare a variavel*/
		real C , F
		/*Entrada de dados*/
		escreva("Programa de conversao de temperarura C/F.\n\n")
		escreva("Digite uma temperatura: ")
		leia(C)
		/*Bloco de comando*/
		F = ((9 * C) + (32 * 5)) / 5
		/*Saida de dados*/
		escreva("A temperatura convertida e ", F, "F\n\n")
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 344; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */