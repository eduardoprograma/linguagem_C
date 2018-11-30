/*Calculo do angulo do triangulo*/
programa
{
	funcao inicio()
	{
		/*Declare a variavel*/
		inteiro a1, a2, a3
		/*Entrada de dados*/
		escreva("Calculo de angulo\n\n")
		escreva("Digite o primerio angulo: ")
		leia(a1)
		escreva("Digite o segundo angulo: ")
		leia(a2)
		/*Bloco de comando*/
		a3 = 180 - (a1 + a2)
		/*Saida de dados*/
		escreva("\nO valor do terceiro angulo e ", a3, "\n\n")
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 394; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */