/*Programa de analise de crédito*/
programa
{
	funcao inicio()
	{
		/*Declare as varáveis*/
		/*SM = Saldo médio , VC = Valor do crédito*/
		real SM, A, VC
		/*Entrada de dados*/
		escreva("Programa analise de crédito.\nApenas para saldos médios acima de $200.00.\n\n")
		escreva("Digite o Saldo Médio: $")
		leia(SM)
		/*Bloco de comandos*/
		se(SM > 200 e SM <= 300){
			A = 0.20
			VC =SM + (SM * A)
		}
		senao se(SM <= 400 e SM > 300){
			A = 0.25
			VC =SM + (SM * A)
		}
		senao{
			A = 0.30
			VC =SM + (SM * A)
		}
		/*Saída de dados*/
		escreva("Saldo Médio: $", SM, "\n")
		escreva("Valor do crédito: $", VC, "\n")
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 220; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */