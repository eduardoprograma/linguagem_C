/*Programa mostra o numero menor*/
programa
{
	funcao inicio()
	{
		/*Declare as varáveis*/
		inteiro n1, n2
		/*Entrada de dados*/
		escreva("Programa mostra o numero menor.\n\n")
		escreva("Digite um numero: ")
		leia(n1)
		escreva("Digite um numero: ")
		leia(n2)
		/*Bloco de comando*/
		/*Saída de dados*/
		se(n1 > n2){
			escreva("O numero menor e ", n2, "\n\n")
		}
		senao se(n1 < n2){
			escreva("O numero menor e ", n1, "\n\n")
		}
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 382; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */