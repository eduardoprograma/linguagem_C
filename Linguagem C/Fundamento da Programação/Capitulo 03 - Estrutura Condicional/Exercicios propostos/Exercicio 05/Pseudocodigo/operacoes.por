/*Programa chave*/
programa
{
	funcao inicio()
	{
		/*Declare as vari�veis*/
		real n1, n2, O
		inteiro NC
		/*Entrada de dados*/
		escreva("Programa Chaves\n\n")
		escreva("Digite um numero: ")
		leia(n1)
		escreva("Digite um numero: ")
		leia(n2)
		escreva("Escolha uma op��o:\n\n")
		escreva("1 - M�dia\n")
		escreva("2 - Diferen�a\n")
		escreva("3 - Produto\n")
		escreva("4 - Divis�o\n")
		escreva("Escolha... Digite agora a op��o: ")
		leia(NC)
		/*Bloco de comando*/
		/*Sa�ada de dados*/
		escolha(NC){
			caso 1:
			O = (n1 + n2) / 2
			escreva("A m�dia entre os dois numeros � ", O, "\n")
			pare
			caso 2:
				se(n1 > n2){
					O = n1 - n2
					escreva(" A difren�a entre os n�meros � ", O, "\n")
				}
				senao{
					O = n2 - n1
					escreva(" A difren�a entre os n�meros � ", O, "\n")
				}
			pare
			caso 3:
			O = n1 * n2
			escreva("O produto dos dois n�meros � ", O, "\n")
			pare
			caso 4:
			O = n1 /n2
			escreva("A divis�o do dois n�meros � ", O, "\n")
			pare
		}
		/*Fim do c�digo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 412; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */