/*Programa atualiza��o e classifica��o de pre�o*/
programa
{
	funcao inicio()
	{
		/*Declare as variaveis*/
		/*prec = pre�o;
		  A = porcentagem;
		  preT = pre�o total;*/
		real prec, A, preT
		cadeia classe
		/*Entrada de dados*/
		escreva("Programa Atualiza��o e classifica��o de produto.\n\n")
		escreva("Digite o pre�o: $")
		leia(prec)
		/*Bloco de comando*/
		/*Calculo de pre�o*/
		se(prec <= 50){
			A = 0.05
			preT = prec + (prec * A)
		}
		senao se(prec > 50 e prec <= 100){
			A = 0.10
			preT = prec + (prec * A)
		}
		senao{
			A = 0.15
			preT = prec + (prec * A)
		}
		/*Bloco de comando*/
		/*Classifica��o*/
		se(preT <= 80){
			classe = "Barato"
		}
		senao se(preT > 80 e preT <= 120){
			classe ="Normal"
		}
		senao se(preT > 120 e preT <= 200){
			classe ="Caro"
		}
		senao{
			classe = "Muito Caro"
		}
		/*Saida de dados*/
		escreva("Pre�o $", preT, "\n")
		escreva("Classifica��o: ", classe, "\n")
		/*Fim do c�digo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 749; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */