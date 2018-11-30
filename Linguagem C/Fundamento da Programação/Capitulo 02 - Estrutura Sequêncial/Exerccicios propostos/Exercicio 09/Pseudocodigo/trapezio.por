/*Programa Trapezio*/
programa
{
	funcao inicio()
	{
		/*Declare as variaveis*/
		inteiro A, base_maior, base_menor, altura
		/*Entre com os valores da variaveis*/
		escreva("Bem vindo ao programa calcule seu trapezio")
		escreva("Digite o valor da base menor: ")
		leia(base_menor)
		escreva("Digite o valor da base maior: ")
		leia(base_maior)
		escreva("Digite o valor da altura: ")
		leia(altura)
		/*Bloco de comando*/
		A = ((base_maior + base_menor) * altura) / 2
		/*Saida de valores das variaveis*/
		escreva("A area do trapezio e ", A)
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 545; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */