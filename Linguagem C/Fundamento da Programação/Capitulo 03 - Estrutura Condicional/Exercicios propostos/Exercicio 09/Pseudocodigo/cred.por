/*Programa de analise de cr�dito*/
programa
{
	funcao inicio()
	{
		/*Declare as var�veis*/
		/*SM = Saldo m�dio , VC = Valor do cr�dito*/
		real SM, A, VC
		/*Entrada de dados*/
		escreva("Programa analise de cr�dito.\nApenas para saldos m�dios acima de $200.00.\n\n")
		escreva("Digite o Saldo M�dio: $")
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
		/*Sa�da de dados*/
		escreva("Saldo M�dio: $", SM, "\n")
		escreva("Valor do cr�dito: $", VC, "\n")
		/*Fim do c�digo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 220; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */