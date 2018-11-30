/*Programa que Calcula a idade*/
programa
{
	funcao inicio()
	{
		/*Declarar variaveis*/
		real anoNasc, anoAtual, idade, idaMeses, idaDias, idaSem
		/*Entrada de dados*/
		escreva("Programa para calculo da idade\n\n")
		escreva("Digite o seu anoa de Nascimento: ")
		leia(anoNasc)
		escreva("Digite o anoa atual: ")
		leia(anoAtual)
		/*Bloco de comando*/
		idade = anoAtual - anoNasc
		idaMeses = idade * 12
		idaDias = idade * 365
		idaSem = idade * 12
		/*Saida de dados*/
		escreva("A sua idade e ", idade, "\n")
		escreva("A sua idade em meses ", idaMeses, "\n")
		escreva("A sua idade em dias ", idaDias, "\n")
		escreva("A sua idade em semanas ", idaSem, "\n")
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 561; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */