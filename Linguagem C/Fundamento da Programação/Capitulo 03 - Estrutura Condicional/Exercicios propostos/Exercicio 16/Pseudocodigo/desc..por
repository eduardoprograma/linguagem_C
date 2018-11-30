/*Programa de desconto em preços*/
programa
{
	funcao inicio()
	{
		/*Declarção de varaveis*/
		real prec, desc, pNew
		/*Entrada de dados*/
		escreva("Programa 'Desconto.\n\n")
		escreva("Digite o valor : $")
		leia(prec)
		/*Bloco de comando*/
		se(prec <= 30){
			desc = 0.0
			pNew = prec - (prec * desc)
		}
		senao se(prec > 30 e prec <= 100){
			desc = 0.1
			pNew = prec - (prec * desc)
		}
		senao{
			desc = 0.15
			pNew = prec - (prec * desc)
		}
		/*Saida de dados*/
		escreva("Valor a ser pago: $", pNew, "\n\n")
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 545; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */