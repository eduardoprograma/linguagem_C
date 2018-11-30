/*Calculo de salario*/
programa
{
	funcao inicio()
	{
		/*DEclare as variaveis*/
		real HTrab, VSal, HExtra, VHTrab, VHExtra, SBruto, SHExtra, salario, VHora
		/*Entrada de dados*/
		escreva("Programa para calculo de salario.\n\n")
		escreva("Digite o valor do salario : $")
		leia(VSal)
		escreva("Digite a quantidade de hora trabalhada: ")
		leia(HTrab)
		escreva("Digite a quantidade de horas extras se houver: ")
		leia(HExtra)
		/*Bloco de comando*/
		VHora = VSal / 220                //220 é o numero de horas trabalhadas em um mes
		VHExtra = (VHora * 0.6) + VHora   //0.6 é a porcentagem acrecida nas horas normais
		SBruto = HTrab * VHora
		SHExtra = HExtra * VHExtra
		salario = SBruto + SHExtra
		/*Saida de variaveis*/
		escreva("\nValor das horas extras: $", SHExtra, "\n")
		escreva("Valor do salrio bruto : $", salario, "\n")
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 864; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */