/*Programa Multiplicacao*/
programa
{
	funcao inicio()
	{
		/*Declaracao de variaveis*/
		inteiro n1, n2, n3, multi
		/*Entrada dos valores das variaveis*/
		escreva("Bem vindo ao programa de multiplicacao.\n")
		escreva("Digite o primeiro numero: ")
		leia(n1)
		escreva("Digite o segundo numero: ")
		leia(n2)
		escreva("Digite o terceiro numero: ")
		leia(n3)
		/*Bloco de comando*/
		multi = n1 * n2 * n3
		/*Sa�da do valor da variavel multi*/
		escreva("A multiplicacao dos tres valores resultou no resultado igual a ", multi, ".")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 539; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */