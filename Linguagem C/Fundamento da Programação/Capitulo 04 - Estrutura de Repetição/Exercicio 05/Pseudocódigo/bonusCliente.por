/*Programa bônus para 15 bons clientes*/
programa
{
	funcao inicio()
	{
		/*Declaração de varáveis*/
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
		/*Saída de varáveis*/
		escreva("\nLevantamento de nossos melhores 15 clientes feito.\n\n")
		/*Fim  do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 577; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */