/*Programa para calcula r a hipotenusa*/
programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
		/*Declarar variaveis*/
		real a, b, c
		/*Entrada dedaos*/
		escreva("Programa para calculo da hipotenusa.\n\n")
		escreva("Digite o valor do cateto oposto: ")
		leia(a)
		escreva("Digite o cateto adjacente: ")
		leia(b)
		/*Bloco de comando*/
		c = mat.raiz(mat.potencia(a, 2) + mat.potencia(b, 2), 2)
		/*Saida de dados*/
		escreva("O calculo da hipotenusa para este trangulo e ", c)
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 520; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */