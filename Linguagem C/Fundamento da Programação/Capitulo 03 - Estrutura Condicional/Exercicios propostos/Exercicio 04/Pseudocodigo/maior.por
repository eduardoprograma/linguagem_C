/*Programa mostra maior*/
programa
{
	funcao inicio()
	{
		/*Declare as variáveis*/
		inteiro a , b , c
		/*Entrada de dados*/
		escreva("Programa que mostra o maior numero.\n\n")
		escreva("Digite o primeiro numero: ")
		leia(a)
		escreva("Digite o segundo numero: ")
		leia(b)
		escreva("Digite o terceiro numero: ")
		leia(c)
		/*Bloco de comando*/
		/*Saída de dados*/
		se(a > b e a > c){
			escreva("O numero maior e ", a, "\n\n")
		}
		senao se(b > a e b > c){
			escreva("O numero maior e ", b, "\n\n")
		}
		senao{
			escreva("O numero maior e ", c, "\n\n")
		}
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 566; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */