/*Programa Soma*/
programa
{
	funcao inicio()
	{
		/*Declare as var�veis*/
		real S, n				//Resultado da soma
		/*Entrada de dados*/
		escreva("Programa Soma.\n\n")
		escreva("Digite um numero: ")
		leia(n)
		/*Sa�da de dados*/
		enquanto(n != -1){
			S = 1 + (1/2) + (1/3) + (1/4) + (1/5) + (1/6) + (1/7) + (1/8) + (1/9) + (1/n)
			escreva("O valor da soma e :", S, "\n\n")
			escreva("Digite um numero: ")
			leia(n)
		}
		/*Fim do c�digo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 445; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */