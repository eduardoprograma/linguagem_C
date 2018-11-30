/*Programa Desconto*/
programa
{
	funcao inicio()
	{
		/*Declare a variavel*/
		real preco, total
		/*Entre com o valor das variaveis*/
		escreva("Bem vindo ao programa que dá 10% de desconto no produto.\n\n")
		escreva("Digite o valor do produto: $")
		leia(preco)
		/*Bloco de comando*/
		total = preco - (preco * 0.10)
		/*Saida do valor da variavel total*/
		escreva("O valor do produto total: $", total)
		/*fim do programa*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 320; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */