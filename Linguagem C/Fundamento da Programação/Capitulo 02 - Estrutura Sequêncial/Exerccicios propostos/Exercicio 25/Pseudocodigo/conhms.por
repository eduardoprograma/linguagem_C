/*Programa conversão hora/minuto*/
programa
{
	funcao inicio()
	{
		/*Declare as variaveis*/
		inteiro h, min, m, mt, s
		/*Entrada de variaveis*/
		escreva("Programa conversao de hora/minuto\n\n")
		escreva("Digite a hora : ")
		leia(h)
		escreva("Digite os minutos : ")
		leia(min)
		/*Bloco de comandos*/
		m = h * 60
		mt = min + m
		s = mt * 60
		/*Saida de variaveis*/
		escreva("Os minutos totais dos valores digitados e ", mt, "\n")
		escreva("Os segundos totais sao ", s, "\n\n")
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 349; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */