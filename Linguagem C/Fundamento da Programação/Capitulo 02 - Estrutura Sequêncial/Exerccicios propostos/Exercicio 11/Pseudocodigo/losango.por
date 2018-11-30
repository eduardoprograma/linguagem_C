/*Programa calcula area dolosango*/
programa
{
	funcao inicio()
	{
		/*Declare as variaveis*/
		real A, digMaior, digMenor
		/*Entre com o valor dasvariavies*/
		escreva("Bem vindo ao programa 'Calculo da area do Losango'.\n\n")
		escreva("Digite o valor da diagonal maior: ")
		leia(digMaior)
		escreva("Digite o valor da diagonal menor: ")
		leia(digMenor)
		/*Bloco de comandos*/
		A = (digMaior * digMenor) / 2
		/*Saida do valor das variaveis*/
		escreva("A area do losango e ", A)
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 486; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */