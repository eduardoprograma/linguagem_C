/*Programa de divisao*/
programa
{
	funcao inicio()
	{
		/*Declaracao de variaveis*/
		real n1, n2, divi
		/*Entrada de valores das variaveis*/
		escreva("Bem vindo ao programa de divisoa.\n\n")
		escreva("Digite o primeiro numero: ")
		leia(n1)
		escreva("Digite o segundo numero: ")
		leia(n2)
		/*Bloco de comando*/
		se(n2 != 0){
			divi = n1 / n2
			escreva("\nO valor da divisao e ", divi)
		}	
		senao{
			escreva("O segundo numero nao pode ser = 0.\n")
		}	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 455; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */