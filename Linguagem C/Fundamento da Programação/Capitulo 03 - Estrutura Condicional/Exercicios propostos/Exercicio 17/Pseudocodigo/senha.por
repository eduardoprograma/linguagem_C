/*Programa senha*/
programa
{
	funcao inicio()
	{
		/*Declara��o de var�veis*/
		inteiro senha
		/*Entradede dados*/
		escreva("S� poder� acessar o sistema se a senha corresponder\n\n")
		escreva("Digite sua senha de 4 digitos: ")
		leia(senha)
		/*Bloco de comando*/
		escreva("\n\n")
		/*Saida de dados*/
		se(senha == 4531){
			escreva("Acesso permitido.\n\n")
		}
		senao{
			escreva("Acesso negado.\n\n")
		}
		/*Fim do c�digo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 285; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */