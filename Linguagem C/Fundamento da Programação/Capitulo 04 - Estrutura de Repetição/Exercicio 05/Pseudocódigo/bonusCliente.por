/*Programa b�nus para 15 bons clientes*/
programa
{
	funcao inicio()
	{
		/*Declara��o de var�veis*/
		cadeia cliente = ""
		real bonus, valor, bonusT
		inteiro cont
		/*Entrada de dados*/
		escreva("Programa melhores clientes.\n\n")
		escreva("Digite o nome do cliente: ")
		leia(cliente)
		escreva("Digite o valor da compra: $")
		leia(valor)
		/*Bloco de comandos*/
		para(cont = 1; cont < 15; cont++){
			se(valor <= 1000){
				bonus = 0.10
				bonusT = bonus * valor
			}
			senao{
				bonus = 0.15
				bonusT = bonus * valor
			}
			escreva("O bonus para ", cliente, " e ", bonusT, "\n\n")
			escreva("Digite o nome do cliente: ")
			leia(cliente)
			escreva("Digite o valor da compra: $")
			leia(valor)
		}
		/*Sa�da de var�veis*/
		escreva("\nLevantamento de nossos melhores 15 clientes feito.\n\n")
		/*Fim  do c�digo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 577; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */