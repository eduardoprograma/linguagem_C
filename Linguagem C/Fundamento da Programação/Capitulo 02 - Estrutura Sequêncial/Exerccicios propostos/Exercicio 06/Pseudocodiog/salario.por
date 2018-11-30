/*Programa Salario*/
programa
{
	funcao inicio()
	{
		/*Declare as variaveis*/
		real Salario, salario, vendas
		/*Entre com o valor das variaveis*/
		escreva("Bem vindo ao calculador de salario.\n\n")
		escreva("Digite o valor do salario: $")
		leia(salario)
		escreva("Digite o vaor das vendas: $")
		leia(vendas)
		/*Bloco de comando*/
		Salario = salario + (vendas * 0.04)
		/*Saida dos valores das variaveis*/
		escreva("Comissao: $", vendas * 0.04, "\n")
		escreva("Salario fixo: $", salario, "\n")
		escreva("Salario Total: $", Salario)
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 503; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */