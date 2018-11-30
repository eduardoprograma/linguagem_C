/*Programa senha*/
programa
{
	funcao inicio()
	{
		/*Declaração de varáveis*/
		inteiro senha
		/*Entradede dados*/
		escreva("Só poderá acessar o sistema se a senha corresponder\n\n")
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
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 285; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */