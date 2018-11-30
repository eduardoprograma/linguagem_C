/*Programa atualização e classificação de preço*/
programa
{
	funcao inicio()
	{
		/*Declare as variaveis*/
		/*prec = preço;
		  A = porcentagem;
		  preT = preço total;*/
		real prec, A, preT
		cadeia classe
		/*Entrada de dados*/
		escreva("Programa Atualização e classificação de produto.\n\n")
		escreva("Digite o preço: $")
		leia(prec)
		/*Bloco de comando*/
		/*Calculo de preço*/
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
		/*Classificação*/
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
		escreva("Preço $", preT, "\n")
		escreva("Classificação: ", classe, "\n")
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 749; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */